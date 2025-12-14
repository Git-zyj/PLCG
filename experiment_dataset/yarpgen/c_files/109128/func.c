/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109128
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_7))) - (10438147004015953779ULL)))))), (6782196107483384319ULL)));
        var_14 = ((/* implicit */unsigned char) var_2);
        var_15 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 6782196107483384318ULL))))), ((short)-32747)))), (((((((/* implicit */_Bool) 709407505)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
    }
    for (short i_1 = 3; i_1 < 8; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_16 = max((((/* implicit */long long int) ((min((11557865463702583016ULL), (((/* implicit */unsigned long long int) -709407506)))) <= (min((((/* implicit */unsigned long long int) -709407506)), (15ULL)))))), (((((/* implicit */_Bool) (unsigned char)233)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((-709407505) / (((/* implicit */int) var_9))))))));
                        arr_19 [i_3] [i_2 - 2] [i_1] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -709407506)) | (11664547966226167280ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((10146420483279893089ULL), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned char) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (short i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_3)), (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)0] [i_5] [i_6 - 1] [i_1 + 1])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8300323590429658526ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)))), ((+(4378172924284461525ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) - (var_8))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        arr_29 [i_1 - 3] [i_1] [(unsigned short)7] = ((/* implicit */unsigned long long int) var_13);
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)202)))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (-709407533)))) ? (((/* implicit */unsigned long long int) ((arr_23 [i_7] [i_1] [i_1] [i_1 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) : (((4378172924284461513ULL) >> (((/* implicit */int) arr_17 [i_1] [i_1] [i_5] [i_1])))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (709407483)))) ? (((/* implicit */unsigned long long int) ((-709407515) & (((/* implicit */int) var_1))))) : (arr_12 [i_1 - 2] [i_1] [i_6 + 1])));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((var_0) ? (((((/* implicit */_Bool) min((((/* implicit */int) (short)-17207)), (arr_3 [i_1])))) ? (max((((/* implicit */unsigned long long int) 2159746143U)), (4378172924284461525ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) || ((_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -709407523)) && (((/* implicit */_Bool) (unsigned char)63))))))));
    }
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17587))) & (18446744073709551615ULL))) >= (((((/* implicit */_Bool) 709407518)) ? (max((var_5), (12886189501398016589ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_44 [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)193)))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12))))) ? (-709407506) : (max((-709407531), (((/* implicit */int) arr_34 [i_8] [i_9 + 3] [i_10]))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_11] [i_8] [5U]))))), (min((var_4), (var_8)))))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 20; i_12 += 2) 
                        {
                            arr_48 [i_8] = ((/* implicit */_Bool) (+(min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) 5560554572311535027ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_38 [14ULL] [i_8] [i_12])))))))));
                            var_23 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [2ULL] [i_9 + 3])) >= (2147483647))))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4)))))), ((+(((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) arr_34 [(short)6] [(unsigned char)0] [i_11 - 1])) : (((/* implicit */int) var_1))))))));
                        }
                        var_24 *= ((/* implicit */unsigned char) (+(min((var_5), (((/* implicit */unsigned long long int) var_1))))));
                    }
                } 
            } 
        } 
        arr_49 [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)0))))))), (min((max((var_5), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9U)) && (arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    var_25 = (~(((((/* implicit */_Bool) ((709407482) >> (((/* implicit */int) var_12))))) ? (min((1512664868183796682ULL), (((/* implicit */unsigned long long int) -709407514)))) : (((/* implicit */unsigned long long int) (+(var_4)))))));
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (min((2147483647), (((/* implicit */int) max(((unsigned short)26699), (((/* implicit */unsigned short) (signed char)-24))))))))))));
}
