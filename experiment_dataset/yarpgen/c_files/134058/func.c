/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134058
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
    var_18 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) arr_2 [(unsigned char)18])))));
        arr_4 [6LL] [6LL] &= ((/* implicit */unsigned short) arr_2 [18ULL]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_0] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) / (((/* implicit */int) (short)96))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_9)) - (37291)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) 4294967295U)) : (var_11)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (arr_10 [i_0 - 1] [i_0] [i_2 + 2])));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) 2147483647))))))));
            var_23 ^= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])));
        }
        var_24 = ((/* implicit */long long int) (~(var_6)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_25 = ((/* implicit */int) (unsigned short)4095);
        arr_16 [i_3] = ((/* implicit */short) ((((((((long long int) 4294967269U)) * (((/* implicit */long long int) ((arr_8 [i_3] [i_3]) / (((/* implicit */int) arr_5 [i_3]))))))) + (9223372036854775807LL))) << (((arr_9 [i_3]) - (10592896396685949934ULL)))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((unsigned short)38699), ((unsigned short)26836)))), (var_12)));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) < (((((/* implicit */_Bool) (unsigned short)38699)) ? (((/* implicit */unsigned long long int) var_15)) : (var_10)))));
                    var_28 = ((/* implicit */long long int) (signed char)31);
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 4; i_7 < 12; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26845))) * (3725299890U));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 569667406U)) ? (((/* implicit */int) (unsigned short)38700)) : (((/* implicit */int) (short)32767))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (var_15))), (((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned short)0))))) ? (((var_7) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))))));
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((3349940858681163255ULL) | (((/* implicit */unsigned long long int) var_11)))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((var_11), (var_12))) / (((/* implicit */long long int) ((var_6) * (var_6)))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((short) (-(-1504480117))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_35 *= ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (var_10)))));
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) 569667398U))));
                        }
                        var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (var_16)));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_7 - 2] [i_4] [i_7 + 2] [i_4]))))) ? (((/* implicit */int) ((short) arr_30 [6U] [i_7 + 3] [i_7] [i_7 - 4] [i_7]))) : (((((/* implicit */_Bool) arr_32 [i_7 + 3] [i_7 + 3] [i_4] [i_7 + 2] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_6]))))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) / ((+(((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) (((((-(arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (arr_10 [i_4] [i_4] [i_4])))))) ? (((((/* implicit */_Bool) min((arr_8 [i_4] [i_4]), (((/* implicit */int) (unsigned short)26850))))) ? (((/* implicit */unsigned int) ((((var_17) + (2147483647))) << (((var_0) - (2564554381U)))))) : (min((var_5), (((/* implicit */unsigned int) (unsigned short)26828)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (max(((unsigned short)12652), (((/* implicit */unsigned short) (signed char)52))))))))));
    }
    var_41 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 569667420U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (569667412U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26828)))))) : (min((((/* implicit */unsigned long long int) 0U)), (var_1))))), (var_10)));
}
