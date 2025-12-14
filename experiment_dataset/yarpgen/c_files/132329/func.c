/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132329
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
    var_13 = ((((/* implicit */_Bool) min((var_10), (var_7)))) ? ((~(var_7))) : (min((var_4), (min((((/* implicit */long long int) var_6)), (var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = max((var_10), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 3]))) : (var_9))));
                var_15 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) (signed char)-86))))) * (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) -6490230771570797942LL))));
                arr_5 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((var_9) + (8283060492719961957LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (((min((var_11), (((/* implicit */unsigned long long int) -8731537254171930459LL)))) >> (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))));
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (max((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 3]))), (max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 2]))))) ? (((/* implicit */long long int) ((int) arr_4 [i_2 - 1] [i_2 - 3]))) : (var_5)));
                    arr_8 [i_2] [i_2] [i_2] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) && (((/* implicit */_Bool) arr_2 [i_1 - 2]))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) arr_6 [i_0] [i_1 - 2] [i_0] [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_1 - 1] [i_1 - 2]), (arr_3 [i_0] [i_1 - 3]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */long long int) (signed char)-1);
}
