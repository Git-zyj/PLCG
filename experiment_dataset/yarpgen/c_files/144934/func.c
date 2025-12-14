/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144934
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
    var_14 = ((/* implicit */long long int) var_7);
    var_15 = ((/* implicit */_Bool) (((((-(var_10))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned long long int) var_7)), (9915513219702592620ULL))) : (max((((/* implicit */unsigned long long int) (unsigned short)13)), (7766159081481654902ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [(unsigned short)4] [i_0 + 3])))) - (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_0) : (((/* implicit */int) (_Bool)1)))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_0 + 2] [i_1]), (arr_3 [i_0 + 2] [i_0])))) ? (((((7766159081481654902ULL) / (arr_3 [(unsigned char)1] [(unsigned char)1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((9530855593466874067ULL) >= (((/* implicit */unsigned long long int) 2147483637)))))))) : (((/* implicit */unsigned long long int) (~(max((var_10), (((/* implicit */long long int) 2147483647)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0] [i_0 + 2]))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [(unsigned char)11] [i_0 + 1])) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0] [i_0 - 1])))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0 - 1] [(signed char)8] [i_0 + 3] [i_0 - 1]), (((/* implicit */unsigned short) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7766159081481654902ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (18446744073709551615ULL)))));
                                var_20 = ((/* implicit */signed char) (-(max((min((((/* implicit */long long int) arr_5 [i_4] [i_2] [i_1] [i_0])), (-8513662875359876753LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6703)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_6 [(unsigned char)7] [i_1] [i_1] [i_1])))))))));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_3] [(unsigned short)12])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_3] [10LL]))))))));
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 + 3])))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)18)))) ^ (((((/* implicit */int) arr_6 [i_1] [i_2] [i_1] [i_4])) ^ (((/* implicit */int) arr_6 [(short)12] [(short)12] [8LL] [i_1])))))));
                            }
                            arr_13 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
