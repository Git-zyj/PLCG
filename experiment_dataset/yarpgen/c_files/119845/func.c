/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119845
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) arr_1 [i_0]);
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((~(18194557830492856751ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)4088), ((short)-23))), (((/* implicit */short) (signed char)-41))))))));
                    var_14 *= ((/* implicit */short) ((1807759506U) << (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59020)) <= (((((/* implicit */int) (_Bool)1)) >> (((arr_4 [i_0] [i_0] [i_0]) + (2001429324))))))))) + (min((((/* implicit */unsigned int) (unsigned short)127)), (2487207790U)))));
        var_16 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned short)6516))))));
        arr_8 [2LL] &= ((/* implicit */int) max((2487207790U), (((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5814))) : (3864131631U)))));
    }
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 9778242352140814458ULL))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_18 -= arr_1 [i_3];
                var_19 = ((/* implicit */unsigned long long int) var_12);
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_5] = arr_12 [i_3] [i_3];
                                var_20 = ((/* implicit */int) ((long long int) ((long long int) min((arr_12 [i_5] [i_6]), (((/* implicit */short) (unsigned char)28))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
