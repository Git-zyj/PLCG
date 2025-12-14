/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114817
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
    var_13 |= ((/* implicit */short) var_5);
    var_14 = var_11;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-10);
                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)154)), ((+(arr_4 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [(unsigned char)8] |= ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (unsigned char)96))))) | (max((((/* implicit */long long int) (unsigned char)116)), (arr_6 [i_3]))))) >> (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? ((~(((/* implicit */int) (signed char)104)))) : (max((((/* implicit */int) arr_7 [i_3])), (var_6))))) + (137)))));
                            arr_18 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)118)) ? (8529593002516660936LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1])))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_18 = ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_0] [i_5])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned char)116)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(arr_15 [i_0] [i_0] [i_2] [i_2 + 2] [i_2] [i_3] [i_5])))), (((536870910U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5] [3LL]))))) : (((/* implicit */int) ((2199023251456LL) <= (((/* implicit */long long int) arr_13 [i_0] [i_2] [i_2 + 1] [i_0])))))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2199023251457LL)) ? (((((5961125505950386858LL) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) >> ((((~(var_3))) - (2513213601U))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)8128))));
                            arr_23 [i_0] [i_2] [i_6] = ((/* implicit */signed char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        arr_24 [i_1] [i_0] = ((/* implicit */int) ((5ULL) != (((/* implicit */unsigned long long int) (+(arr_17 [i_3] [i_2 + 1] [i_2] [i_1] [i_0] [i_0]))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_0] [(short)8] [(short)8])), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [(_Bool)1] [i_1] [i_0] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (arr_22 [i_1] [i_2] [i_1] [i_1] [i_0]))))))));
                        var_23 *= ((/* implicit */_Bool) arr_20 [i_1] [(signed char)19]);
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_7 [20])), (arr_22 [i_0] [i_1] [i_2] [i_8] [i_2]))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)115))))) ? (((((/* implicit */int) arr_21 [12LL] [i_0] [i_2 - 1] [i_0] [i_2 - 1])) | (arr_15 [i_8] [i_8] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) -2199023251457LL)) && (((/* implicit */_Bool) 0U)))))));
                        var_26 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        arr_34 [i_2 - 2] [i_2 - 2] [(short)0] [2] [i_0] [i_1] &= ((/* implicit */signed char) var_2);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_29 [i_2 + 2] [i_2 + 2] [(_Bool)1] [i_2] [i_2 + 1] [(short)13]), (((/* implicit */unsigned short) arr_32 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_2 + 1] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) (unsigned short)6785)))) : (((((/* implicit */_Bool) arr_29 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_32 [i_2 + 2] [i_2 + 2] [i_2] [12])) : (var_6)))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_6))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_2]), (((/* implicit */short) (unsigned char)147))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (arr_13 [i_0] [i_0] [20U] [i_0]) : (-498967114)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57412)) >> (((((/* implicit */int) (unsigned char)125)) - (119))))))))) : ((-(((/* implicit */int) var_8))))));
                    }
                }
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (unsigned char)118))));
                var_31 = (unsigned short)58751;
            }
        } 
    } 
}
