/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147012
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 2])) != (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2])))))));
                        var_16 = ((/* implicit */int) min((var_16), ((-(arr_3 [6] [i_0 + 2])))));
                    }
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((arr_2 [(short)4]) != ((((_Bool)1) ? (arr_2 [(short)4]) : (arr_2 [2U]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_7]))) >> ((((~(((/* implicit */int) var_9)))) + (7)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_4])), (var_7)))) ? (((/* implicit */int) arr_16 [i_6] [i_6 + 2] [i_6])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_4])))))));
                            arr_20 [i_7 - 2] [(short)16] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((var_9) ? (arr_1 [i_5] [i_4]) : (((/* implicit */unsigned long long int) 3916192953U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)6] [i_5] [i_5] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-5352))))) ? (((/* implicit */unsigned int) arr_6 [12ULL] [i_5] [i_4] [(short)16])) : (((arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
            }
        } 
    } 
}
