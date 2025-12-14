/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138923
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */long long int) var_12);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [4LL] [i_0] [i_1])) ? (((long long int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            {
                var_15 += ((/* implicit */signed char) var_1);
                var_16 ^= ((/* implicit */unsigned int) arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 2]);
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_17 &= ((/* implicit */int) min((var_0), (((/* implicit */signed char) ((((/* implicit */int) arr_8 [10U])) != (((/* implicit */int) arr_8 [8])))))));
                    arr_17 [i_2] [(short)7] [(short)7] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_10 [i_2] [i_3 + 1] [(short)11]))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_2]))));
                    /* LoopSeq 4 */
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [4ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [8LL] [i_6 - 1] [i_6 + 1])) ? (((3007939959845924045ULL) / (arr_7 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (min((((((/* implicit */int) arr_10 [i_2] [10U] [i_6 + 2])) ^ (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)40)))) : (((((((/* implicit */int) var_13)) * (((/* implicit */int) var_1)))) & (((/* implicit */int) (signed char)-93))))));
                        var_19 = ((/* implicit */unsigned char) ((long long int) (short)14336));
                    }
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            arr_32 [i_2] [i_3] [(unsigned char)9] [i_2] [i_8] = ((/* implicit */unsigned int) var_3);
                            var_20 ^= ((/* implicit */unsigned int) arr_29 [i_5] [i_8 + 1] [i_8] [i_8] [i_8]);
                        }
                        arr_33 [i_7] [i_7] [i_2] = ((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) (signed char)-90)) ? (216172782113783808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))));
                        var_21 |= ((/* implicit */unsigned char) min((0U), (((/* implicit */unsigned int) arr_24 [i_2] [(signed char)14] [(signed char)14] [i_7]))));
                        var_22 = (+(((/* implicit */int) arr_12 [i_3])));
                        arr_34 [i_2] [i_3] [i_2] [i_2] [(unsigned short)10] = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        arr_38 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (signed char)-95);
                        arr_39 [i_2] [i_3] [4ULL] [(_Bool)1] [i_5] [i_2] = (!(((((/* implicit */_Bool) min((var_2), (14838444224814580082ULL)))) || (((/* implicit */_Bool) min((10748700951833289733ULL), (((/* implicit */unsigned long long int) 3055908662U))))))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (short)15924))))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        arr_43 [i_2] [i_3] [(signed char)4] [i_10] = ((/* implicit */unsigned char) ((arr_13 [i_2] [(unsigned char)1]) + (((/* implicit */long long int) max((arr_26 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_2] [i_3 + 3]), (arr_26 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_2] [i_3 + 2]))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) arr_21 [i_2] [(unsigned char)9] [i_5] [i_3] [i_10])) <= (((/* implicit */int) (signed char)-81))))) >> (((((((/* implicit */_Bool) 1239058646U)) ? (3608299848894971534ULL) : (3608299848894971537ULL))) - (3608299848894971505ULL))))) % (((/* implicit */int) var_0)))))));
                        var_25 |= ((/* implicit */unsigned short) (signed char)108);
                        arr_44 [i_2] [i_2] [i_2] [i_5] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) ((arr_14 [i_2] [i_2] [i_10] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        arr_45 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [i_3] [i_3] [i_10]);
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) var_2);
    var_27 = ((var_2) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))));
}
