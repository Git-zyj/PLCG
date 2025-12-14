/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15688
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) 14393986303948533543ULL);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 4052757769761018072ULL))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2] [11ULL])) - (((arr_2 [i_1]) ? (((/* implicit */int) arr_9 [i_2] [i_0])) : (((/* implicit */int) (short)32568))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2])) > (((/* implicit */int) arr_1 [i_0])))))) : (min((((/* implicit */unsigned long long int) (signed char)-84)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (4052757769761018066ULL))))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) (-(((arr_2 [i_3]) ? (((/* implicit */int) (signed char)87)) : (arr_10 [i_0 + 2] [i_0 - 1] [i_3] [(short)3])))));
                        var_20 |= ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_2 [i_0 + 2])), (14393986303948533547ULL))), (((/* implicit */unsigned long long int) ((long long int) 4052757769761018043ULL)))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-113))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)115))))))) : (min((((unsigned int) var_5)), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_11))))))))))));
                        var_22 = ((/* implicit */short) (unsigned char)2);
                    }
                }
                /* LoopSeq 1 */
                for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                {
                    arr_15 [(short)6] [i_0] [(short)6] [i_0] = ((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0]);
                    var_23 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_9 [(short)4] [i_4 - 2])))), (((((/* implicit */_Bool) 4052757769761018085ULL)) ? (((/* implicit */int) arr_9 [i_4] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_4] [i_4 - 1]))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (14393986303948533540ULL) : (((((/* implicit */_Bool) 4052757769761018046ULL)) ? (4052757769761018068ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
