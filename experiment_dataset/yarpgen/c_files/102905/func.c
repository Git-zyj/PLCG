/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102905
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
    var_12 -= ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (min((max((((/* implicit */int) var_8)), (var_3))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_10))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = min((var_7), (var_4));
                    var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (unsigned char)42)), (7252268331593260678LL))), (max((max((var_9), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_11))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) var_9);
                                var_17 &= ((/* implicit */short) var_2);
                                arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                                var_18 = var_6;
                                arr_17 [i_4] [i_0] [20] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) var_10)), (var_11)));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_1);
                    var_19 = ((/* implicit */short) max((max((var_9), (((/* implicit */long long int) max((var_4), (var_8)))))), (var_9)));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_4)), (max((var_5), (((/* implicit */unsigned short) var_2))))))), (max((-7252268331593260687LL), (((/* implicit */long long int) (unsigned short)34940))))));
        arr_19 [i_0] [i_0] = var_9;
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */long long int) var_10);
        arr_25 [i_5] [i_5] = max((((/* implicit */long long int) var_4)), (var_9));
        arr_26 [6LL] = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        arr_30 [i_6] = ((/* implicit */unsigned short) var_8);
        var_21 = ((/* implicit */unsigned char) var_3);
    }
}
