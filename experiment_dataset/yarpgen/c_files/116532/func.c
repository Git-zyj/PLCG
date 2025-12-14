/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116532
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_11 = ((int) arr_7 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0]);
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_0] [i_0 - 1] [i_1 + 1] [i_3]));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(-2134797906))))));
                            var_13 -= ((/* implicit */signed char) ((_Bool) -310689393));
                        }
                        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 3) 
                        {
                            arr_21 [i_0] = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)12110)));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] [(signed char)12] [i_3] = ((/* implicit */unsigned short) (~(3439372942U)));
                        }
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1])) : (310689383)));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(arr_11 [i_1 - 1] [i_0 - 1]))))));
                        }
                    }
                    var_16 = ((/* implicit */long long int) ((var_4) == (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-54))))));
                }
            } 
        } 
    } 
    var_17 = max((((long long int) (unsigned short)61972)), (((/* implicit */long long int) var_8)));
    var_18 = ((/* implicit */int) max((var_18), ((~(((/* implicit */int) var_10))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) 310689393))) == (var_3))))));
    var_20 = ((/* implicit */long long int) var_0);
}
