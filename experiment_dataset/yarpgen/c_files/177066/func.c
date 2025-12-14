/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177066
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_0))))));
                        var_17 = var_10;
                        var_18 = (+(((/* implicit */int) arr_2 [i_0 - 2])));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_19 = arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4];
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_15)))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_2] [i_3] [i_4])) && (((/* implicit */_Bool) var_11)))))));
                            var_21 |= ((/* implicit */short) (_Bool)1);
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_2]))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(arr_6 [i_0] [i_0 - 2]))))));
                            arr_13 [i_5] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_2]))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_6]))) : (2517539287U))) << (((1125899905794048ULL) - (1125899905794026ULL)))));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * ((+(arr_15 [i_0] [i_1] [i_2] [i_3] [i_6 - 2])))));
                            var_26 = ((/* implicit */_Bool) ((arr_1 [i_6 - 3] [i_2 + 3]) ? (var_15) : (((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_6 - 3]))));
                            var_27 = ((/* implicit */long long int) 1777428008U);
                        }
                    }
                    for (short i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) arr_4 [i_2] [i_7]);
                        arr_20 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) (~(max((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7 - 1]), (arr_11 [i_7] [i_7 + 2] [i_7] [i_7 + 2] [i_2] [i_7 + 2])))));
                    }
                    var_29 += ((/* implicit */long long int) (signed char)-46);
                    var_30 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [6ULL])), ((-(arr_15 [i_0] [i_1] [i_1] [i_2 - 3] [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_25 [i_8] = arr_24 [i_8];
        var_31 &= ((/* implicit */long long int) arr_24 [i_8]);
    }
    var_32 = ((/* implicit */unsigned int) (short)19168);
    var_33 = ((/* implicit */unsigned char) min((-4726042018181220106LL), (((/* implicit */long long int) var_10))));
}
