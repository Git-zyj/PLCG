/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175371
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_3)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 6; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((arr_3 [i_0] [i_0 + 3] [i_0 - 2]) >= (arr_3 [i_0] [i_0 + 2] [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 - 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) max(((unsigned short)14519), ((unsigned short)51009))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_9)))) - (arr_3 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(unsigned char)7] [i_3 - 2] [i_4] [i_3 + 1] = min((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */int) var_1)));
                                var_19 = ((/* implicit */long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))), (arr_7 [i_4] [i_4] [i_4] [i_1])));
                                arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) arr_14 [i_3] [i_3] [9U] [i_3 - 3] [i_3 - 2]);
                                arr_17 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_0 + 1])) % (min((12815425469634482113ULL), (((/* implicit */unsigned long long int) 9223372036854775804LL))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned short) arr_4 [i_0]);
            }
        } 
    } 
}
