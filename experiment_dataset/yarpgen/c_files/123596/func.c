/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123596
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
    var_15 = ((/* implicit */long long int) var_6);
    var_16 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)32767)))) * (((arr_6 [i_3 - 4] [i_2 - 1] [i_3]) * (arr_6 [i_3 - 3] [i_2 - 1] [i_2])))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((((((((/* implicit */_Bool) (signed char)74)) ? (arr_13 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67))))) + (9223372036854775807LL))) << ((((~(1108755477U))) - (3186211818U))))) >> (((/* implicit */int) ((_Bool) arr_12 [i_2 + 3] [i_3 - 3] [(short)1] [i_3] [i_4]))))))));
                                arr_14 [i_0] [i_0] [(_Bool)1] [i_2] [i_0] = min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-74))))), (min((arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]), (arr_11 [i_0] [i_0] [(signed char)6] [i_2] [i_2] [i_0] [i_0]))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_18 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [(_Bool)1] [i_3])) + (79))) - (34)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0] [i_2 - 3] [i_2] [i_5]), (arr_7 [i_0] [i_1] [i_2] [i_3]))))) : ((~(4539628424389459968LL)))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [(_Bool)1] [i_3])) + (79))) - (34))) - (156)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0] [i_2 - 3] [i_2] [i_5]), (arr_7 [i_0] [i_1] [i_2] [i_3]))))) : ((~(4539628424389459968LL))))));
                                var_19 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) >> (((13363904078648058911ULL) - (13363904078648058884ULL))))) | (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)15] [i_2] [i_3] [i_5]))))))), (((arr_12 [i_2 - 3] [i_5] [i_5] [i_5] [i_5]) * (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_1)))))))));
                                arr_18 [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((long long int) (signed char)59)) | (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))) ? (arr_13 [i_0]) : (((((/* implicit */_Bool) ((long long int) (short)7906))) ? (arr_12 [i_2 - 2] [i_1] [i_1] [i_3 - 2] [i_5]) : (((/* implicit */long long int) ((arr_11 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))))));
                            }
                        }
                    } 
                } 
                arr_19 [i_1] [i_0] = ((/* implicit */short) ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) - (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            arr_25 [i_0] [i_6] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) (((~(var_12))) >> ((((~(arr_12 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6]))) + (4227902885558319049LL)))));
                            arr_26 [(_Bool)1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3915381080U)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_6 - 1] [i_7] [i_7]))) | (((((/* implicit */_Bool) 4539628424389459978LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_0]))) : (-4539628424389459951LL)))))));
                            /* LoopSeq 3 */
                            for (long long int i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
                            {
                                arr_29 [i_0] [i_1] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_7])) / ((~(((/* implicit */int) (signed char)-92))))));
                                arr_30 [i_0] [i_1] [i_1] [i_6] [i_1] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((5094401628626613087LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))))))) / ((((~(((/* implicit */int) var_3)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7] [i_0] [15U])) && (((/* implicit */_Bool) (unsigned short)25946)))))))));
                            }
                            for (long long int i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_1))) / (((/* implicit */int) (signed char)74))));
                                var_21 *= ((/* implicit */unsigned short) -5094401628626613088LL);
                                arr_33 [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -4539628424389459978LL))));
                                var_22 = ((/* implicit */short) (((~(4294967283U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198)))));
                            }
                            for (long long int i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
                            {
                                arr_38 [i_10] [i_6] [i_6] [i_0] [i_6] [i_0] [i_0] = (~(((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_6] [i_0] [i_7] [i_10]))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) -5094401628626613087LL)) || (((/* implicit */_Bool) 8726684767731021363ULL)))))));
                                arr_39 [i_6] [i_6] [i_6] = ((/* implicit */long long int) max(((unsigned short)45748), (((/* implicit */unsigned short) (_Bool)1))));
                                var_24 ^= ((/* implicit */unsigned long long int) var_3);
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_0] [i_0] [i_0]))));
                            }
                            var_26 = ((/* implicit */signed char) (_Bool)1);
                            var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_7] [(unsigned short)15]))))) ? (((((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6] [i_1] [i_6] [i_1] [i_6] [i_1])) ? (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (arr_10 [i_1] [i_1] [i_6 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1])))))))))));
                        }
                    } 
                } 
                var_28 &= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) / (max((((/* implicit */long long int) 3338881355U)), (var_11))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-401)) ? (-7913366898568892063LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))))))));
            }
        } 
    } 
}
