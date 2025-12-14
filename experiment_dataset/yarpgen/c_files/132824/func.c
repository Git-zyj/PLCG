/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132824
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((var_16) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((arr_1 [i_0 - 1] [i_0 - 1]) ^ (arr_1 [i_0 + 1] [i_0 + 2]))) << (((unsigned long long int) ((arr_1 [i_0 - 1] [i_0]) / (arr_1 [i_0 - 1] [i_0 - 1])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((int) 655590082723075541LL));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) arr_7 [i_0]);
                var_23 = ((/* implicit */short) ((signed char) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]));
                var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_5 [i_2])) + (2147483647))) << (((((/* implicit */int) arr_6 [i_1])) - (19))))) & (((int) arr_1 [i_2] [i_0]))));
                var_25 = ((unsigned char) arr_0 [(signed char)14]);
                var_26 ^= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1])) / (((/* implicit */int) arr_6 [i_0 + 3]))));
            }
            var_27 = ((/* implicit */short) arr_4 [i_0 + 2] [i_1] [i_1 - 1] [i_1 - 1]);
        }
        for (signed char i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]);
            arr_10 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_7 [i_0])), (((((arr_4 [i_0] [i_3] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))))) >> (((((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) arr_0 [i_0 + 1])))) + (22908)))))));
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 + 3])) | (((((/* implicit */int) arr_5 [i_0 + 2])) | (((/* implicit */int) arr_5 [i_0 + 1]))))));
            arr_11 [i_0 + 1] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) max((arr_9 [i_0] [i_3 - 1] [i_3]), (arr_8 [i_0 - 1] [i_3 - 3] [i_3 + 1])))) << (((arr_1 [i_0 + 3] [i_0 + 3]) + (9064926536539369448LL))))));
        }
        var_30 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))) & (arr_1 [i_0 + 2] [i_0 - 1]))));
    }
}
