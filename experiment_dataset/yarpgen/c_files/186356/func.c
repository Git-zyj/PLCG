/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186356
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
    var_11 = var_10;
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) == (((long long int) ((int) var_6)))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) var_2)) ? (((arr_4 [i_0] [6]) + (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) 67076096)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) (+(((int) ((var_5) ? (var_0) : (arr_7 [3] [3]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_3 + 3] [i_5] [i_5] = ((/* implicit */int) var_4);
                                arr_19 [i_2] [i_3] [i_3] [i_5] [i_6] [i_5 + 1] [i_5 - 1] = ((/* implicit */unsigned char) (((~(arr_15 [i_5] [i_5] [i_5 + 1] [i_3 + 3] [i_5]))) / (((/* implicit */long long int) (~((-2147483647 - 1)))))));
                                arr_20 [(_Bool)1] [i_5] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_9 [i_5 - 1] [i_5 + 1])) : (arr_13 [i_3 + 3] [i_3 - 1])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (-(((((/* implicit */long long int) ((-981885487) / (2147483647)))) + ((+(var_8))))))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_15 = ((int) (unsigned char)167);
        var_16 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_15 [(unsigned char)22] [8] [8] [(unsigned char)22] [i_7])), (arr_4 [14] [14]))), (((/* implicit */unsigned long long int) max((((2147483647) << (((arr_15 [20] [20] [i_7] [20] [20]) - (2189684265762374177LL))))), (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_7])))))));
        arr_23 [i_7] = ((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [i_7]);
    }
}
