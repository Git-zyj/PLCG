/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101506
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
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0 + 1] [8U] [i_2] [i_0] = ((/* implicit */signed char) ((int) (+(727594622))));
                        var_16 ^= ((/* implicit */unsigned long long int) (-(727594631)));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */int) (short)-22050)) + (2147483647))) << (((((((/* implicit */int) (unsigned char)249)) ^ (((/* implicit */int) (unsigned char)198)))) - (63))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_0 [i_1]))));
                        var_19 = ((/* implicit */short) ((unsigned char) arr_2 [i_1]));
                    }
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1112287910U)) ? (-1079963717729486084LL) : (min((((/* implicit */long long int) (unsigned char)53)), (-1LL)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((((/* implicit */int) (short)-1)) + (-2046125765)))))) : (-1820504755)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            arr_16 [i_6 - 2] [i_5] [i_0] [i_2] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2]))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_0 [i_2])))))));
                            var_22 &= -727594641;
                            var_23 += ((/* implicit */short) ((arr_5 [i_0 + 1] [i_6 - 3] [3ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_5] [i_6 - 3])))));
                        }
                        var_24 += (-(((((/* implicit */int) arr_7 [i_5] [i_1 - 2] [i_1] [i_1])) * (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))));
                        var_25 = ((/* implicit */unsigned char) arr_14 [i_0] [i_2] [(short)2] [i_1 - 3] [i_0]);
                    }
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) -727594615)) ? (((/* implicit */int) arr_4 [8LL] [i_1] [i_2])) : (((/* implicit */int) arr_2 [(unsigned short)4])))) == (((/* implicit */int) min((arr_7 [8] [i_0 + 2] [i_0 + 2] [1]), (((/* implicit */short) (unsigned char)198)))))))) & (((/* implicit */int) (unsigned short)65534))));
                    arr_17 [i_0 - 2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)230))));
                    var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_1 [i_0 - 3] [i_1 - 4]) : (arr_13 [8] [i_1 - 3] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) ((var_2) == (((/* implicit */long long int) 2917692066U))));
    var_29 = ((/* implicit */unsigned short) ((int) (unsigned short)45585));
}
