/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111712
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) var_16);
                var_20 = max((var_9), ((~(4428376905277984107ULL))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))));
                                arr_15 [i_1] [i_1] [i_1] [17U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_4] [4U] [i_3] [i_2 + 1] [13LL] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_13)));
                                arr_16 [i_2 + 2] [i_1] = ((/* implicit */int) arr_9 [i_0] [14LL] [i_2 + 3] [(unsigned short)9] [(short)7]);
                                arr_17 [i_4] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
                                arr_18 [i_0] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) var_17);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [(_Bool)1])))))), (((/* implicit */long long int) (unsigned short)25042)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) var_13);
                    var_24 *= ((/* implicit */unsigned long long int) var_11);
                }
            }
        } 
    } 
    var_25 &= ((/* implicit */signed char) var_6);
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_2))));
}
