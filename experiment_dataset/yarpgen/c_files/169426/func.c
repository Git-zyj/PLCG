/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169426
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
    var_20 = ((/* implicit */_Bool) var_18);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)77)) ? (17139449261322766226ULL) : (((/* implicit */unsigned long long int) 0U))))) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
                            var_22 += ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1]);
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */short) arr_10 [(unsigned short)4] [i_1] [i_1] [i_1]);
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((-(((/* implicit */int) arr_9 [i_0 + 3] [i_0 - 1])))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_5 [13LL] [i_0 + 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3] [i_1]))))))))))))));
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) > (((arr_10 [10ULL] [10ULL] [i_0] [i_0 + 2]) + (((/* implicit */int) arr_9 [5ULL] [5ULL])))))))) * (((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_1])) ? (arr_5 [i_0 + 1] [i_0] [i_1]) : (arr_5 [3ULL] [(signed char)17] [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [17ULL] [i_1])) ^ (((/* implicit */int) arr_9 [i_0] [20])))))))));
            }
        } 
    } 
}
