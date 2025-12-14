/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111074
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (short)4095)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_0 + 1] = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned short) arr_3 [(short)8]);
                                var_15 = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) != (max((((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 - 2])), (arr_2 [i_1]))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_9 [i_1]), (arr_9 [i_1])))) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_9 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_0 - 2] [i_5] [i_0 + 1])) ? (arr_14 [i_1] [i_1] [i_2] [i_3] [0LL] [i_3]) : (arr_14 [i_0 - 2] [i_1] [i_1] [i_1] [i_3] [(unsigned short)4]))) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)1] [i_0 - 2] [i_1] [i_0 - 2] [i_3] [(unsigned char)0])))));
                                var_17 = min((arr_1 [i_0 + 1]), (((arr_1 [i_0 + 1]) - (arr_1 [i_0 + 1]))));
                                arr_17 [i_1] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) max(((!(((/* implicit */_Bool) arr_5 [i_3] [i_0])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) <= (arr_11 [i_3] [18U] [i_2] [i_3]))))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) : (657425072068640675ULL))))));
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (arr_5 [i_0] [i_0])))) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) var_6))))), (((arr_8 [i_1] [i_3]) ? (((13231324044191191749ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(_Bool)1]))))))))));
                            }
                            var_20 = ((/* implicit */long long int) min((var_20), (min((arr_3 [i_0 + 1]), (min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(min((arr_3 [i_0 + 1]), (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (var_9)))))))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_1]))) ? (arr_14 [i_0] [i_1] [i_1] [i_0] [5ULL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)27627))))) >= (arr_3 [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_6);
}
