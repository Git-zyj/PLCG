/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187355
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)38995)), (4194303)));
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0 - 2] [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2 + 2] [i_1 + 1] [i_1 + 1]))))), (arr_7 [i_2 - 1] [i_1 - 1] [i_1 + 1])));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_18 = ((/* implicit */unsigned int) arr_3 [i_1]);
                arr_12 [i_1] [i_1] [i_1] [i_3] &= ((/* implicit */unsigned int) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) 4194296))));
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) arr_1 [i_1] [i_2 + 1]))))))));
                var_19 += ((/* implicit */short) min((min((arr_11 [i_1 + 2] [i_2] [(unsigned short)9]), (arr_11 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) arr_6 [(signed char)6] [i_2] [i_1]))));
                var_20 = ((/* implicit */short) (-(max((min((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_3])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [3LL] [3LL] [i_3])))))))));
            }
            for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) max((min((arr_5 [i_4] [i_2] [i_1]), (((/* implicit */unsigned char) arr_0 [(unsigned short)9] [i_2])))), (((/* implicit */unsigned char) arr_4 [i_4]))))), (min((arr_15 [i_1 + 1] [i_1 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2])))))))));
                arr_16 [i_1] [(short)3] [i_4] = ((/* implicit */signed char) (!(min((arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 2]), (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 3])))));
            }
            arr_17 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_10 [i_1 + 1] [i_1 - 1]), (arr_10 [i_1 + 2] [i_2 + 2]))))));
        }
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_14 [i_1] [i_1] [i_1 - 2] [i_1]))));
        var_23 = ((/* implicit */int) (+(max((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))));
    }
    var_24 = ((/* implicit */signed char) (-(max((((/* implicit */int) min((var_11), (var_6)))), ((~(((/* implicit */int) (unsigned short)26540))))))));
}
