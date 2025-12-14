/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156027
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))));
                var_10 -= ((/* implicit */signed char) -6961374465638908082LL);
                arr_7 [i_0] = ((/* implicit */long long int) 18446744073709551604ULL);
                var_11 = ((/* implicit */long long int) (~(((unsigned int) arr_5 [i_0] [i_1 + 1] [(_Bool)1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (2157228786U)))), (((((/* implicit */_Bool) var_0)) ? (18446744073709551610ULL) : (18446744073709551605ULL))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_2] [i_3] [i_3] |= ((/* implicit */long long int) arr_11 [i_5] [i_3] [i_5]);
                        var_13 = (~(((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            var_14 = (!(((/* implicit */_Bool) (-(0ULL)))));
                            arr_25 [i_2] [i_2] [i_5] [i_5] [i_3 - 1] [i_5] [i_5] = ((/* implicit */short) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (13ULL)))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (signed char)114))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 15533460741892882319ULL)) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) 8726860024161555564ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_2] [(unsigned short)8]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [(_Bool)1] [i_3] [(short)2] [i_6]))))))));
                        }
                        for (short i_7 = 2; i_7 < 16; i_7 += 2) 
                        {
                            arr_30 [i_2] [i_7 - 2] [i_7] [i_5] [i_7 - 2] &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43118))) : (8304133200636881269LL)));
                            arr_31 [i_2] [i_3] [i_3] [i_5] [i_7] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (9719884049547996051ULL)))));
                        }
                        for (signed char i_8 = 3; i_8 < 16; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) arr_10 [i_4]);
                            arr_34 [i_2] [i_2] [i_2] [i_5] [i_8] = ((/* implicit */int) -3650575487168314284LL);
                            var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 7ULL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                        }
                        var_20 ^= ((arr_11 [2] [i_4 - 1] [i_3 - 2]) < (arr_11 [i_2] [i_4 - 1] [i_3 - 2]));
                    }
                    var_21 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (signed char)-49)) * (((/* implicit */int) (signed char)-2)))));
                }
            } 
        } 
        var_22 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2])))))) * ((~(6762318837569707559ULL)))));
    }
    var_23 = (_Bool)1;
    var_24 = ((/* implicit */_Bool) (unsigned short)0);
    var_25 = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-7613)) ? (((/* implicit */int) (short)-1574)) : (((/* implicit */int) (signed char)10)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))))));
}
