/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149752
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_2) >> (((arr_4 [i_1] [i_1]) - (11691427436128270364ULL))))))));
                var_16 = ((/* implicit */unsigned char) min((min((min((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_1 - 3]))), (((((/* implicit */unsigned long long int) var_1)) ^ (arr_3 [i_0] [i_1]))))), (min((arr_4 [i_1] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (84373023U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned int) var_11);
                    arr_10 [i_0] [i_0] = ((/* implicit */signed char) min((((unsigned long long int) arr_1 [6U])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) ((unsigned short) (_Bool)0))))))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)24))));
                    var_19 -= ((/* implicit */unsigned int) ((var_12) + (((/* implicit */long long int) ((((/* implicit */_Bool) 629266579)) ? (((/* implicit */int) arr_9 [3])) : (arr_8 [i_0 - 1] [i_0 - 1] [i_3]))))));
                }
                for (short i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_4 + 1] [i_4] [i_4] [i_0] = max((((/* implicit */unsigned long long int) (_Bool)1)), (((881894375458778315ULL) >> (((11343100897398423854ULL) - (11343100897398423830ULL))))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), ((((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(var_3))))))) : ((((!(((/* implicit */_Bool) 2470818043U)))) ? (2926297046U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)221), (((/* implicit */unsigned char) (_Bool)1))))))))))));
                    arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_13 [(_Bool)1] [i_4] [i_4 - 1] [i_0 - 1])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_4] [i_4] [i_4 + 1] [i_0 - 1]))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (_Bool)0)))))));
                    arr_20 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12))), (((/* implicit */long long int) arr_6 [i_0] [i_0 - 1] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) ((min((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) arr_9 [i_4 + 1])))) + (max((((/* implicit */long long int) arr_9 [i_0])), (arr_0 [i_0])))));
                }
            }
        } 
    } 
    var_22 *= ((/* implicit */short) var_8);
}
