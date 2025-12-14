/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141146
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) ((int) var_15));
                        var_18 = var_3;
                        var_19 -= ((/* implicit */long long int) var_10);
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */long long int) max((arr_11 [11LL] [11LL]), (arr_11 [i_1] [i_3])))), (max((arr_0 [i_3]), (arr_7 [9LL] [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((var_14), (((/* implicit */long long int) var_12)))), (arr_0 [i_3])));
                    }
                    arr_13 [i_0] [i_0] [i_0] [i_0] = var_13;
                    arr_14 [i_2] &= ((/* implicit */signed char) arr_4 [i_2]);
                    var_21 = ((/* implicit */int) min((((arr_7 [i_0] [i_1]) - (arr_8 [i_0] [(signed char)0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_2 [i_0]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((max((((/* implicit */long long int) var_12)), (((long long int) var_3)))) + (max((var_2), (((/* implicit */long long int) min((var_0), (((/* implicit */int) var_7)))))))));
}
