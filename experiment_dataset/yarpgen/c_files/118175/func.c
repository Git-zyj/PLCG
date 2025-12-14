/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118175
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [1ULL] [i_0]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_10 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [1LL]))) * (arr_2 [i_0]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(_Bool)1])))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) var_9)), (arr_1 [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)4] [i_0]))))))) ? (((max((arr_2 [i_0]), (arr_2 [i_0]))) >> (((arr_2 [i_0]) - (608898777U))))) : ((-(arr_2 [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            {
                arr_10 [i_2] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_8 [i_2])), (-6814400332765671628LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [0U] [i_2])))));
                var_13 = ((/* implicit */short) min((var_13), (arr_9 [i_1])));
            }
        } 
    } 
    var_14 ^= ((/* implicit */signed char) min((-6814400332765671620LL), (((/* implicit */long long int) var_6))));
    var_15 = ((/* implicit */long long int) var_8);
}
