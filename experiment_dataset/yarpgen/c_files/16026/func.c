/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16026
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
    var_20 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (-(arr_4 [i_0] [i_0] [i_0])));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_10 [i_0 - 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) - (((/* implicit */int) arr_11 [i_4])))))))));
                                var_23 = ((((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) >= (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))))))) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (var_7))), (((/* implicit */unsigned int) ((signed char) arr_6 [(_Bool)1] [i_3] [i_4]))))));
                                var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((signed char) var_12))))) ? (((max((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0]))) >> (((max((var_17), (var_6))) - (2700450410U))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)20)) || (((/* implicit */_Bool) (signed char)30)))))) : (((arr_1 [i_3] [i_1]) | (0U))))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)21)), ((unsigned char)175)))), (16534088213197760655ULL))), (((/* implicit */unsigned long long int) 2675237860U))));
                                var_26 = ((/* implicit */unsigned short) max(((unsigned char)166), (((/* implicit */unsigned char) (signed char)-29))));
                            }
                            var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (((((/* implicit */_Bool) 2675237860U)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3])) : (((/* implicit */int) var_14))))))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((arr_8 [i_0] [i_1] [i_2] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)53))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                    {
                        {
                            var_29 = arr_3 [i_0 - 1];
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-2147483644) + (2147483647))) >> (((((/* implicit */int) (unsigned char)175)) - (174)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 4] [i_7] [i_7 + 2]))) : (arr_18 [i_1 + 1] [i_1 + 1] [i_7 + 2]))) : (((((/* implicit */_Bool) var_12)) ? (arr_18 [i_1 + 4] [i_7 - 2] [i_7 + 1]) : (arr_18 [i_1 + 3] [i_1] [i_7 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = var_9;
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2632095681087271094LL)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)42))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1400455667451934542LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
