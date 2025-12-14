/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134097
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
        for (int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_9 [i_2 - 1] [i_1 + 1] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39468))) + (-4189686382992712411LL)))) ? (((/* implicit */long long int) 3258623827U)) : (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_5 [i_0] [(unsigned short)8] [i_0])))))));
                    arr_10 [i_2 - 1] [i_1 + 1] [i_1] [i_0] &= ((/* implicit */short) (((+(((/* implicit */int) (signed char)-102)))) >= (((((/* implicit */_Bool) 696365434)) ? (((/* implicit */int) arr_4 [i_0])) : (1471277147)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9203669643934794444ULL)) ? (((/* implicit */int) (short)8531)) : (((/* implicit */int) (unsigned char)240))));
                        var_20 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_12 [i_0] [(unsigned char)1] [i_3] [i_4]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (short)-32742)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)3]))) : (13225736918648948686ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3])) ? (-1524685887) : (-2097152)))))))));
                            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 4778017138964886310ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (350252838)))));
                            var_23 = ((/* implicit */long long int) var_2);
                            arr_24 [i_6] [i_6] [i_5] [(unsigned char)13] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (-6737625392341848948LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54651)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((5878044684809242565LL) - (5878044684809242555LL)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_1] [i_3] [i_5] [i_8] = ((/* implicit */short) (~(((int) arr_4 [i_3]))));
                            arr_32 [(_Bool)1] [i_5] [i_3] [i_3] [i_1 - 4] [i_0] = ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32758)));
                        }
                        var_26 = ((/* implicit */long long int) ((short) arr_13 [1LL] [i_5] [i_1 - 4] [i_0]));
                    }
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                }
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)18)) : (arr_19 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_29 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1 - 3]))))) : (((((/* implicit */_Bool) min((8672450590144725937LL), (((/* implicit */long long int) (short)27042))))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [(signed char)3] [i_1 - 1] [i_0] [i_0] [i_0])) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15240))))))))));
                var_29 = ((/* implicit */signed char) (((-(max((((/* implicit */long long int) var_6)), (3270530255305278138LL))))) + (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)114)))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) || ((_Bool)1)))), (var_12)));
    var_31 = (unsigned short)20913;
}
