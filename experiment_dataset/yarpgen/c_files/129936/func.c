/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129936
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
    var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)255)), ((-9223372036854775807LL - 1LL))));
    var_21 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_22 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_23 -= ((/* implicit */unsigned char) arr_0 [i_2]);
                    var_24 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42864))) % ((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((arr_4 [i_2] [i_1 + 3] [i_0] [i_0]), (((/* implicit */unsigned int) var_4))))))));
                    var_25 = ((/* implicit */short) arr_2 [i_2] [i_2]);
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2] [i_0]);
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0])) ? (((/* implicit */int) ((signed char) max((1168724029U), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */int) arr_10 [i_0] [i_0]))));
                            var_28 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(max((-1), (((/* implicit */int) (unsigned char)92))))))), (((((/* implicit */_Bool) min((1168724029U), (((/* implicit */unsigned int) arr_0 [i_3]))))) ? (max((arr_3 [i_2] [i_2]), (((/* implicit */long long int) arr_10 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)22671)) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_3])) : (((/* implicit */int) var_6)))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) min((var_12), (((/* implicit */signed char) arr_7 [i_4] [i_4 + 4] [i_4 + 3]))))), (((((/* implicit */int) arr_7 [i_4 + 4] [i_4 + 1] [i_4 - 2])) % (((/* implicit */int) arr_7 [i_4] [i_4 + 3] [i_4 + 1]))))));
                        }
                        for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_5 + 4])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_3])) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [i_1]))))), (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_30 *= ((((/* implicit */_Bool) arr_13 [i_0] [i_3 + 1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-4337)) % (((/* implicit */int) arr_6 [i_1] [i_0] [i_1 + 1] [i_1] [i_1] [i_1]))))) : (arr_14 [i_0]));
                            arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) | (((arr_13 [i_2] [i_3] [i_2] [i_1] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) arr_14 [i_2])) ? (((((/* implicit */_Bool) -1536972861)) ? (((/* implicit */unsigned long long int) 1168724029U)) : (11506943175878277615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22671)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (67108863LL))))))));
                            var_31 ^= (((((!(((/* implicit */_Bool) var_11)))) ? (min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5 + 2])), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(arr_15 [i_0] [i_0] [(_Bool)1] [i_2] [i_1] [i_0] [i_0])))))));
                        }
                        for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            var_32 ^= ((/* implicit */int) var_3);
                            var_33 = max((((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2])) ? (3126243267U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_2]))))), (((/* implicit */unsigned int) var_10)));
                        }
                        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_34 *= ((/* implicit */int) (unsigned char)1);
                            var_35 ^= ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_7]) : (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_7]))) : (((((/* implicit */_Bool) max((arr_19 [i_0] [i_7] [i_0]), (((/* implicit */long long int) var_8))))) ? (max((arr_4 [i_0] [i_2] [i_2] [i_3]), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                        }
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_16))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_3])) ? (((/* implicit */unsigned long long int) arr_13 [i_2] [i_1 + 2] [i_1 + 3] [i_1] [i_3])) : (arr_15 [i_1] [i_1 + 2] [i_1 - 2] [i_2] [i_1] [i_2] [i_3 - 1])))) ? (((/* implicit */int) ((signed char) 592067337))) : (((/* implicit */int) ((short) arr_15 [i_0] [i_1 - 2] [i_1 + 3] [i_3 - 1] [i_3 - 1] [i_2] [i_3])))));
                    }
                    for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) ((signed char) arr_19 [i_0] [i_2] [i_0]));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_2] [i_1]), (var_3)))) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) - (min((((/* implicit */long long int) -1536972861)), (min((((/* implicit */long long int) var_19)), (var_14)))))));
                        var_40 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) -6985155264735972444LL))));
                    }
                }
                arr_24 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) min((var_3), (((/* implicit */unsigned int) var_4)))))), (((((/* implicit */_Bool) max((var_7), (var_7)))) ? (((int) arr_19 [i_1] [i_0] [i_0])) : (334654304)))));
                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */long long int) var_8))))) ? (max((((/* implicit */unsigned int) (unsigned short)32768)), (arr_14 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_1] [i_0] [i_1]) <= (((/* implicit */long long int) var_19)))))))))))));
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    for (unsigned short i_10 = 3; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) var_2))));
                            var_43 = ((/* implicit */unsigned int) var_15);
                        }
                    } 
                } 
            }
        } 
    } 
    var_44 = ((/* implicit */long long int) -1579607481);
}
