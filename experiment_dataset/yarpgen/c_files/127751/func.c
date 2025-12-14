/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127751
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
    var_20 = -1245706451967884174LL;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (min((0), (((/* implicit */int) var_17))))))));
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0 - 1])), (min((((/* implicit */long long int) arr_0 [(short)0] [(short)0])), (var_15)))))) ? (((unsigned int) 4193630721U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_16))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 17; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) (~(((101336574U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_4])))))));
                            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) var_5)));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_16 [i_1] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1]))) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4193630722U)) && (((/* implicit */_Bool) var_7)))))));
                        }
                        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_3 + 1] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [i_3 - 2] [i_6]))));
                            var_26 = ((/* implicit */signed char) (_Bool)1);
                            var_27 = ((/* implicit */_Bool) min((var_27), (var_4)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3799051215874731574ULL)))))));
                            var_29 = ((/* implicit */long long int) ((4193630746U) | (((/* implicit */unsigned int) var_14))));
                        }
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)228), ((unsigned char)156)))) ? (9223372036854775800LL) : (((882093932410652528LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_10)) ? (0U) : ((~(101336574U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_3)) - (37)))))) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_3 + 3])) : (((/* implicit */int) var_17)))))));
                        arr_27 [(short)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_0 + 2] [i_3 - 3]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0 + 1] [i_2] [i_3 + 1]) : (((/* implicit */int) arr_10 [10ULL] [10ULL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [19LL] [i_0] [i_0 + 2]))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))))) : (((/* implicit */unsigned int) (+((-(var_14))))))));
                        var_31 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        arr_32 [(unsigned short)1] [i_1] [i_2] [i_8] = ((/* implicit */unsigned char) arr_15 [i_0] [i_0 - 2] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8]);
                        arr_33 [i_1] [(unsigned char)18] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)247))));
                    }
                    var_32 = max((((/* implicit */unsigned short) arr_15 [i_1] [i_2] [i_1] [i_1] [i_1] [i_0 + 2] [i_0 + 2])), ((unsigned short)52836));
                    var_33 = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_34 ^= ((/* implicit */unsigned char) max((((signed char) (-(((/* implicit */int) arr_36 [i_0 - 1] [12LL]))))), (arr_2 [i_0 + 2] [i_9])));
            arr_38 [i_0] = ((/* implicit */signed char) (((((-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_34 [(_Bool)1])) : (((/* implicit */int) (unsigned char)0)))))) + (2147483647))) << (((((((/* implicit */int) arr_35 [i_9])) + (5064))) - (10)))));
            arr_39 [i_9] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [(unsigned short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (17466930202673965774ULL))), (((/* implicit */unsigned long long int) ((short) (signed char)-53)))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_9] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [(short)16] [i_9] [i_9]))) : (arr_31 [i_0] [i_0] [i_9] [i_9])))))));
            arr_40 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1])) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)1)) : ((~((~(((/* implicit */int) (short)20064))))))));
        }
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_6)))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned char)100))))))) : ((-((-(4149029826077753651LL))))))))));
}
