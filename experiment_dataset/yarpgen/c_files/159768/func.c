/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159768
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
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)19049);
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) - (arr_3 [i_1 + 1])))) ? (min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 3]))) : ((-(arr_3 [i_1 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)27909)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_12 [(unsigned short)6] [4ULL] [i_2] [(signed char)4] [i_3] [i_0]))))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_3 + 2])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (18446744073709551615ULL) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) < (((/* implicit */int) var_0))));
}
