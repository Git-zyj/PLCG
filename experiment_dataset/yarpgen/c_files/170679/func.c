/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170679
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
    for (int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */long long int) (~((+(544444504)))));
                    arr_9 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((544444504), (min((var_3), (-544444505)))))) ? (((((/* implicit */_Bool) ((544444498) / (arr_1 [i_1] [i_1])))) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_2]), (544444525)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_6 [i_2] [i_1] [7ULL])), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 4] [i_0 - 4] [i_2])) ? (var_10) : (var_12)))) : (min((((/* implicit */unsigned long long int) -2147483635)), (13383102322066243082ULL)))))));
                    arr_10 [i_2] [i_1] [i_2] = var_10;
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) 889427474)) && (((/* implicit */_Bool) 7315229923826184437LL)))) ? ((-(var_2))) : (((unsigned long long int) var_5))));
                    arr_12 [i_0] [i_1] [i_2] = arr_5 [i_0 - 4] [i_2] [i_2];
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_15 [i_0] = arr_2 [i_0] [i_1];
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                    arr_17 [i_0 + 3] [i_1] [i_3] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (-(var_8)))) / (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) -544444504)) : (arr_7 [i_3] [i_1] [i_0]))))), (((((/* implicit */_Bool) ((unsigned long long int) 503316480))) ? (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_1] [12LL]) : (((/* implicit */unsigned long long int) -544444497)))) : (((((/* implicit */_Bool) 544444496)) ? (7734129260181342081ULL) : (((/* implicit */unsigned long long int) 4223786588693235935LL))))))));
                }
                arr_18 [i_0 - 4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */int) ((((/* implicit */long long int) var_9)) == (var_1))))))), (((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])) : (arr_13 [i_1] [i_1] [i_1] [i_0])))));
                arr_19 [5] [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1])) <= (var_7))))) <= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (((/* implicit */long long int) -382090137)))))) ? (min((min((arr_1 [i_0] [i_1]), (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 - 2] [i_1] [i_1])) && (((/* implicit */_Bool) 16734097986938119634ULL))))))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_0))))) ? (var_0) : ((-(var_9)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1985301245)) ? (max((9223372036854775785LL), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483643)) < (16734097986938119641ULL)))))))) <= (min((((/* implicit */unsigned long long int) (~(4220965683585281682LL)))), (min((365964802195157836ULL), (((/* implicit */unsigned long long int) var_12))))))));
}
