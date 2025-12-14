/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13724
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [16ULL] [i_0] |= ((/* implicit */unsigned short) arr_1 [(signed char)15] [i_0]);
                var_18 = ((/* implicit */unsigned long long int) var_0);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned short)20] = ((/* implicit */unsigned long long int) var_10);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) var_10);
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = (unsigned char)202;
                                var_19 = (~(((long long int) arr_8 [i_3 - 1] [i_3 - 1] [i_4])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_2);
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5] [i_5]))))) ? (max((arr_1 [i_5] [i_5]), (arr_1 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((long long int) var_6)))));
        var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)31))));
        var_21 = arr_15 [i_5];
        var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_5] [i_5] [i_5])))) - ((-(((/* implicit */int) arr_6 [i_5] [i_5]))))));
    }
}
