/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108173
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
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13941)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((+((-(var_2)))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)49)))), (((/* implicit */int) ((_Bool) var_19)))))) & (var_19))))));
    var_22 |= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [(unsigned char)3])))) < (((((/* implicit */_Bool) arr_1 [3U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1]))) : (arr_2 [i_0 - 1]))))))) : (arr_2 [i_0])));
        var_24 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (((18446744073709551591ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))))))))));
        var_25 = ((/* implicit */signed char) (-((-(((/* implicit */int) ((_Bool) 3257242154450007755ULL)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) (~(((unsigned long long int) max((arr_1 [i_1]), (((/* implicit */short) (signed char)68)))))));
            arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_1 [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) < (525360791U)))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */signed char) var_5)), ((signed char)(-127 - 1))))), (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned long long int) (signed char)-113))))));
        }
    }
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_10))))))) ? (min((arr_8 [i_2 - 1]), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-99)) % (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) var_18)) >> (((/* implicit */int) var_5)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) % (((unsigned long long int) arr_13 [i_3] [i_4] [i_5] [(_Bool)1])))));
                                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [(unsigned short)8] [i_2] [i_4] [i_5 + 1] [6U])) && (((/* implicit */_Bool) arr_9 [i_2])))) || (((/* implicit */_Bool) ((signed char) var_7)))));
                            }
                        } 
                    } 
                    var_31 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_2] [i_2] [i_3] [i_3] [i_4] [(_Bool)1])))) ? (((arr_17 [i_4] [i_3] [i_2] [i_2] [i_2]) >> (((arr_16 [i_3] [i_4]) - (3626787421U))))) : (((arr_12 [5ULL] [i_3] [i_4] [i_3]) ? (12103074703839446307ULL) : (6654388738847160902ULL)))))));
                    var_32 *= max((((((/* implicit */unsigned long long int) 1912084731U)) | (arr_17 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))), (((arr_17 [i_2] [i_2 - 1] [2ULL] [i_2 + 1] [i_2 + 1]) - (arr_17 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))));
                    arr_20 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_18 [(signed char)6] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_4]))) || (((/* implicit */_Bool) arr_18 [i_2 + 1] [8U] [i_3] [i_4] [i_2 + 1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) ((unsigned short) var_14))) : (((/* implicit */int) min((var_15), (var_6))))))) : (((arr_13 [i_2 + 1] [i_3] [i_4] [(short)2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1])))))));
                }
            } 
        } 
        arr_21 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_14 [i_2] [13U]))), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (var_3)))))));
    }
    for (signed char i_7 = 1; i_7 < 14; i_7 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(max((2687287180U), (((/* implicit */unsigned int) (unsigned short)51954))))))) ^ (((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [0U] [i_7 + 1] [i_7 - 1] [i_7])) ? (((((/* implicit */_Bool) (signed char)-69)) ? (arr_13 [i_7] [2U] [8ULL] [i_7]) : (((/* implicit */unsigned long long int) 3U)))) : (((/* implicit */unsigned long long int) ((6U) >> (((18446744073709551601ULL) - (18446744073709551600ULL)))))))))))));
        arr_25 [i_7] = ((/* implicit */signed char) ((2144427501U) < (1763185571U)));
        arr_26 [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_23 [i_7] [i_7]))))) * (arr_17 [4ULL] [i_7 - 1] [i_7] [i_7] [i_7 - 1]))));
        var_34 |= ((/* implicit */signed char) (+(((((((/* implicit */int) var_15)) % (((/* implicit */int) arr_11 [i_7] [(unsigned short)8])))) * (((/* implicit */int) ((0U) <= (arr_14 [i_7] [i_7]))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_30 [i_8] = (~((+((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_16 [i_8] [i_8])) : (9775628350944922666ULL))))));
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_8])) / (((/* implicit */int) arr_9 [i_8]))))) ? (((/* implicit */int) arr_9 [i_8])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) arr_9 [i_8]))))));
        arr_32 [i_8] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-123))))) % (((((/* implicit */_Bool) var_17)) ? (arr_27 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_8] [i_8]))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((unsigned char) var_4))), (arr_4 [i_8] [i_8] [i_8]))))));
    }
}
