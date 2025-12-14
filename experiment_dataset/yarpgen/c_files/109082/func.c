/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109082
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
    var_16 = ((/* implicit */unsigned long long int) ((((max((var_4), (((/* implicit */long long int) (_Bool)1)))) / (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) / (var_11)));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)202)) >> (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [(_Bool)1] [i_2] [i_3] = min((((((/* implicit */unsigned long long int) arr_2 [i_1 + 3] [i_0 - 3] [i_0 - 1])) / (max((14563930624777257201ULL), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_15), ((unsigned char)195)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 9223372036854775801LL)))) : (min((var_11), (((/* implicit */long long int) (signed char)68))))))));
                            arr_12 [i_0 - 4] [(signed char)10] [i_1] [(_Bool)1] [i_0 - 2] = ((max((-8082896474739481173LL), (((/* implicit */long long int) (unsigned char)122)))) << (min((((/* implicit */unsigned int) var_8)), (arr_2 [i_1 + 2] [i_1 - 1] [i_0 - 4]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                arr_17 [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) min((((-5833311866410143112LL) & (((/* implicit */long long int) 0U)))), ((~(((((/* implicit */long long int) ((/* implicit */int) (signed char)58))) & (9223372036854775807LL)))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (signed char)10)), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 1]))) : (arr_6 [i_0 - 1] [i_1] [i_0 - 2] [i_4]))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_7 [17LL] [i_0] [i_1] [i_0])), (arr_1 [i_1])))))))));
                            }
                            arr_18 [i_1] [i_1] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) <= (max((arr_0 [i_1 + 2]), (((/* implicit */unsigned long long int) var_2)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 4])) < (((/* implicit */int) arr_9 [i_0 - 2] [5U] [i_0 - 3] [i_1 + 2] [i_1 - 1] [i_1 - 1]))))), (((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
            }
        } 
    } 
}
