/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113921
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (arr_1 [i_0] [i_0 - 1])))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)47))));
                    arr_8 [i_0] [i_0] [i_2] [16LL] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        var_13 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_6 [i_0 - 1] [7U] [i_3])))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) max((arr_1 [i_1] [i_2]), (((/* implicit */int) (unsigned short)42009))))) ? (((/* implicit */unsigned long long int) var_6)) : (arr_5 [13LL] [13LL])))));
                        var_14 = ((/* implicit */long long int) max((arr_6 [i_0 - 1] [i_0 + 1] [i_2]), (arr_5 [i_3 - 2] [i_3 + 1])));
                        var_15 -= ((/* implicit */signed char) ((((_Bool) ((((/* implicit */unsigned long long int) arr_4 [(unsigned char)13] [7] [(unsigned char)11])) > (arr_6 [i_0] [i_1] [i_2])))) ? (arr_4 [i_1] [i_2] [i_3]) : (((/* implicit */long long int) min((arr_9 [i_1] [i_2] [i_1] [i_1]), ((~(((/* implicit */int) (signed char)0)))))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-((+(arr_0 [i_0 + 1]))))))));
                    arr_15 [i_0 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_12 [0ULL] [i_0] [i_1] [i_1]);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
    var_18 += ((/* implicit */unsigned char) var_7);
}
