/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157458
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
    var_10 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_5)))))) : (((int) arr_0 [i_0] [i_0 + 2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)6])))))))));
                        var_13 = ((/* implicit */unsigned int) max((var_13), ((((+(arr_2 [i_0 - 1]))) / (((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_3 - 3] [i_3 - 2]))))));
                        var_14 = ((/* implicit */signed char) arr_9 [i_0 + 2] [(signed char)7] [(unsigned char)3]);
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (((+(10985335216308725429ULL))) % (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (var_6) : (((/* implicit */int) var_1)))))));
                    }
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [2ULL] [i_0 - 3] [(unsigned char)8] [i_0 - 3]))))) ? (((/* implicit */long long int) ((int) arr_11 [10] [i_1] [i_2] [(signed char)2]))) : (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_0 - 3] [i_1] [(unsigned char)0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))))))))));
                }
            } 
        } 
    } 
}
