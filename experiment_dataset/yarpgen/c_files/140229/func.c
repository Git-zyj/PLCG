/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140229
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_0 + 1]);
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_2 [i_0 - 2]), (var_4))), (((/* implicit */unsigned short) ((arr_0 [i_0] [i_1]) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 - 1])))))))) ? (((/* implicit */unsigned long long int) (~(arr_3 [i_0 + 1] [i_0 - 1] [i_1 - 3])))) : (max((max((((/* implicit */unsigned long long int) arr_2 [1LL])), (arr_1 [i_0] [i_0 + 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [1ULL] [i_0 - 1])), (var_1))))))));
        }
        for (int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            arr_10 [4LL] [i_2] [i_2 + 2] = max((((/* implicit */signed char) arr_0 [i_2] [i_2 + 3])), (max((((/* implicit */signed char) arr_0 [i_2] [i_2 + 1])), (var_9))));
            arr_11 [(_Bool)1] [i_2 + 1] [(_Bool)1] = ((/* implicit */_Bool) ((max((arr_4 [i_0] [i_0 - 3]), (arr_4 [i_0] [i_0 - 2]))) ? (((/* implicit */int) max((arr_0 [i_2 + 1] [i_2 + 1]), (arr_0 [i_2 + 3] [i_2])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0] [(unsigned short)18])), (var_3))))));
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [19U] [i_0]))) : (((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [(signed char)2] [9ULL] [(signed char)2]))))) & (min((((/* implicit */long long int) 90711968)), (63LL)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                arr_15 [i_3] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [(signed char)10] [i_3 + 2] [i_0 - 2]))));
                arr_16 [i_2 + 2] &= (+((-(((/* implicit */int) (_Bool)1)))));
            }
            arr_17 [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) ^ (((/* implicit */int) var_5))));
        }
        arr_18 [i_0 - 1] [(signed char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((20), (-20)))))) ? (min((arr_13 [i_0]), (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (arr_2 [i_0 + 1])))))));
    }
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_3))))))))))));
    var_13 = ((/* implicit */unsigned long long int) var_1);
}
