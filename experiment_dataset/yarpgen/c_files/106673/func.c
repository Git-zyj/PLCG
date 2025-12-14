/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106673
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((_Bool) arr_1 [i_0]));
        var_19 = ((/* implicit */unsigned short) (!(min((var_1), (var_17)))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) arr_1 [i_0]))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1 - 1] [i_0]);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_21 -= ((/* implicit */short) var_16);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), ((-(((unsigned long long int) -7237087543615711479LL))))));
                        var_23 += ((/* implicit */signed char) var_3);
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) arr_0 [i_0] [i_4]);
                        var_25 *= ((/* implicit */short) var_6);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */short) arr_7 [6ULL] [i_1] [i_0]);
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1 + 2] [i_0] [i_2 + 2])))));
                        var_28 ^= ((/* implicit */short) var_8);
                        arr_15 [(signed char)8] |= ((/* implicit */short) var_13);
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned char) var_18)))));
                    }
                }
            } 
        } 
    }
    var_30 = ((unsigned short) (!((_Bool)1)));
    var_31 = var_4;
}
