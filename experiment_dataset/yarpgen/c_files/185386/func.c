/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185386
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */short) min((((unsigned long long int) arr_2 [i_1 + 1])), (((unsigned long long int) (unsigned char)163))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_1 - 2])), ((unsigned char)79)))) ? (((((/* implicit */int) arr_1 [i_1 - 1])) - (((/* implicit */int) arr_1 [i_1 - 2])))) : (((/* implicit */int) max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2]))))));
                var_15 -= ((/* implicit */short) -264828142);
                var_16 = ((/* implicit */int) max((var_16), (min((((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_4 [(short)8] [(short)8])))) >> ((((~(((/* implicit */int) (unsigned short)6798)))) + (6812))))), ((~(((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)1)))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) ((unsigned int) (_Bool)1)))))));
        var_18 *= ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))), ((!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2])))))));
        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_7 [i_2] [i_2])))), (9075448110914980919LL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */short) arr_12 [i_3])), ((short)-13693)))) && (((/* implicit */_Bool) arr_8 [i_3] [i_3])))) && ((!((!(((/* implicit */_Bool) 0U))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_9))));
                        arr_23 [i_3] [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_21 [i_3] [i_4] [(short)7] [i_6])) - (13410))))) - (((/* implicit */int) (signed char)115))));
                        arr_24 [i_5] = ((/* implicit */long long int) (unsigned char)86);
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (short)21298))));
                    arr_25 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((arr_8 [i_5 + 1] [i_5 - 1]) & (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    }
}
