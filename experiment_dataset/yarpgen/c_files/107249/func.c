/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107249
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
    var_13 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) var_11);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (arr_5 [(unsigned short)3])));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1);
                    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */unsigned short) arr_7 [i_2 - 1] [i_2] [i_1 + 2] [i_1 + 1]))))), (arr_1 [i_1 - 3] [i_2 + 1])));
                }
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_0 [i_1 + 1])))) ? (((arr_1 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2] [i_1 - 2])) * (3))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned short) (unsigned char)126);
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (2147483647) : (var_2))))));
}
