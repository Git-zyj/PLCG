/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12490
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (+((+(max((var_3), (((/* implicit */int) var_8)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_13 |= var_1;
        arr_2 [i_0] = ((/* implicit */short) ((((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
    }
    for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = arr_3 [i_1];
        arr_6 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_3 [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 2])) >= (((/* implicit */int) arr_3 [i_1 + 4]))))) : (((arr_4 [5ULL] [i_1 + 1]) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_4 [(signed char)15] [i_1 + 3]))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 4; i_3 < 12; i_3 += 4) 
        {
            {
                var_14 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned short) var_7))) * (((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_10 [i_2]))))));
                arr_14 [i_3] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_3 [i_2])), (arr_13 [i_2] [i_3])))) && (max((var_1), (var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_11 [i_2] [i_3 - 2] [i_2])))) : (((long long int) arr_9 [3])))));
            }
        } 
    } 
}
