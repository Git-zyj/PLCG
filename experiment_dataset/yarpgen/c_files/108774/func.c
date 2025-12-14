/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108774
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_12 += ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1])));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 726016324398613998ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)52831))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-2080866329) : (((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_1] [i_1 + 1] [i_1] [i_4]))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (755885142U) : (var_10)));
                            }
                        } 
                    } 
                    var_15 += ((/* implicit */_Bool) 1775748343);
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (_Bool)1))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [(unsigned short)11] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (4294967295U)))));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_7);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 + 2])) : (-49282699)));
                    arr_18 [8U] [(signed char)1] [i_5] [i_5] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (arr_8 [i_1 + 1] [i_1 - 1]));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    var_18 += ((/* implicit */_Bool) ((min((4503565267632128ULL), (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(signed char)15] [i_6] [i_6])) % (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_6])))))));
                    var_19 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_11)) ? (755885143U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)12704)) / (((/* implicit */int) (unsigned char)2)))))))));
                }
                var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) ^ (arr_19 [i_0] [i_0]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) min((var_5), (755885142U)))) ? (((arr_13 [i_0] [i_0] [i_1] [i_1 + 1]) | (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_6))))))))));
                var_21 += ((/* implicit */signed char) 2038960000);
            }
        } 
    } 
    var_22 = ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (var_8)))))));
}
