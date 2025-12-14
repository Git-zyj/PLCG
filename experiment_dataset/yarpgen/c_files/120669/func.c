/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120669
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)5]))))) << (((((/* implicit */int) arr_1 [i_0])) + (28)))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_3 [i_2]);
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2 - 1] [i_1 + 3])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1 - 1] [0LL])) % (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                }
            } 
        } 
        var_18 += ((/* implicit */signed char) ((arr_4 [i_0]) & (arr_4 [i_0])));
    }
    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        var_19 -= ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_3 - 2])), ((unsigned char)225))))));
        arr_12 [i_3] = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) arr_11 [i_3]))))) - (((/* implicit */int) arr_11 [i_3])))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_3 + 1])), (arr_10 [i_3]))))))));
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_5)))) && (((/* implicit */_Bool) ((66571993088LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))))))), (var_6))))));
}
