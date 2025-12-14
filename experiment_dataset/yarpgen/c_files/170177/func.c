/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170177
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) >= (((/* implicit */int) arr_4 [i_0 - 1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-90))))) ? (((/* implicit */int) (unsigned short)694)) : (((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) (signed char)89))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_3])) * (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) (signed char)89)) - (80)))))));
                            arr_14 [i_0] [i_1] [(signed char)14] [(signed char)14] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2097151LL)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (signed char)71))))))))) >= (((((/* implicit */_Bool) arr_4 [11LL])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */short) (((-(arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)22))))));
                            arr_18 [i_5] = ((/* implicit */int) (+(arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                            arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 1])) >= (((/* implicit */int) (signed char)89))));
                            arr_20 [i_5] [i_5] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [(unsigned short)10] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) - (((/* implicit */int) (unsigned short)55496))))) : (((unsigned long long int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_5]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            arr_23 [15U] [15U] [2] [i_3] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_6])) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_0 [(unsigned char)18] [i_6])))))));
                            var_14 &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)65535))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((signed char) arr_8 [i_3] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) ((unsigned short) (unsigned short)10024)))));
                        }
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((unsigned long long int) arr_15 [i_3])) != (((/* implicit */unsigned long long int) arr_1 [i_3])))))));
                    }
                    arr_24 [i_0] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-73)) - (((/* implicit */int) (signed char)71))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (unsigned short)10040))));
    var_19 = ((/* implicit */unsigned char) 80485352896656799ULL);
    var_20 = ((/* implicit */signed char) min((((((/* implicit */int) var_8)) << (((var_7) - (3906420455U))))), (((/* implicit */int) var_6))));
}
