/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163923
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_7);
        var_15 = ((/* implicit */int) var_6);
        var_16 = ((/* implicit */unsigned char) min((min((var_1), (((/* implicit */long long int) var_0)))), (max((var_1), (var_2)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [(unsigned char)11] = ((/* implicit */short) var_0);
        var_17 = var_9;
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_7), (max((((/* implicit */unsigned long long int) min((var_2), (var_1)))), (var_6)))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_5)), (var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_10)))))))));
        var_20 = ((/* implicit */long long int) var_13);
        var_21 = ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_15 [8ULL] [i_2] = ((/* implicit */unsigned long long int) var_5);
                    arr_16 [18U] &= ((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) var_4))));
                    var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_3)), (var_6))), (min((((/* implicit */unsigned long long int) var_13)), (var_7)))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_23 += ((/* implicit */long long int) max((var_3), (var_12)));
                        var_24 = ((/* implicit */short) max((((/* implicit */long long int) min((3507018619U), (((/* implicit */unsigned int) var_5))))), (max((var_2), (var_2)))));
                        arr_19 [i_5] [14U] [i_4 + 1] [(short)2] = ((/* implicit */short) max((min((2856351369138957816ULL), (((/* implicit */unsigned long long int) -4088999513196333523LL)))), (((/* implicit */unsigned long long int) max((9223372036854775803LL), (4088999513196333521LL))))));
                        arr_20 [i_5] [i_3] [i_5] [i_5] = var_2;
                    }
                }
            } 
        } 
    }
    var_25 = ((/* implicit */int) var_10);
}
