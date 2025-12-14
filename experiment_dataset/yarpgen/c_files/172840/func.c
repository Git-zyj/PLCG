/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172840
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_12 -= ((/* implicit */signed char) arr_0 [4U]);
            arr_6 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned char) ((unsigned short) min((17908707965794748292ULL), (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_0] [i_0 - 3])))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [(unsigned char)2] [i_2] [(signed char)0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)0])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_0 [(_Bool)1])))) & (((/* implicit */int) ((unsigned short) (unsigned short)35083))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                var_13 = ((/* implicit */short) arr_3 [i_0] [i_0] [(signed char)5]);
                arr_13 [i_0] [i_0] [i_3] [i_0] = ((signed char) ((arr_1 [i_0] [i_0 + 1]) ? (((((/* implicit */int) arr_7 [i_0] [i_2] [(short)6])) + (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_5 [i_3] [i_2] [13])) * (((/* implicit */int) (unsigned short)35083))))));
            }
            for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_14 -= ((/* implicit */signed char) var_7);
                    var_15 = ((/* implicit */signed char) ((min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))) > (min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)30448)) > (((/* implicit */int) arr_12 [i_0] [(signed char)0])))))))));
                    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)51171)) ? (((/* implicit */int) var_4)) : (var_6))) > (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)253)))))) ? (max((((/* implicit */unsigned int) (signed char)70)), (var_9))) : (((/* implicit */unsigned int) (-(var_5))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) ((int) arr_3 [i_0] [i_0] [i_0 + 1]));
                    arr_24 [i_0 - 3] [i_0] [(unsigned short)1] [i_0 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0] [(_Bool)0] [(short)13]) : (((/* implicit */int) (_Bool)1)))) - ((((_Bool)1) ? (((/* implicit */int) (unsigned short)30448)) : (((/* implicit */int) var_2)))))))));
                    arr_28 [i_0 - 3] [i_0] [i_2] [i_4 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0 + 1] [i_4 + 3] [i_4] [i_2])) / (((/* implicit */int) arr_27 [i_0 + 2] [i_4 + 3] [i_4] [i_2]))));
                }
                arr_29 [(signed char)4] [(short)13] = ((/* implicit */unsigned long long int) ((short) ((int) max(((unsigned char)5), (((/* implicit */unsigned char) arr_5 [i_0] [i_2] [i_4]))))));
                arr_30 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) var_2);
            }
            arr_31 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_10)), ((~(7074158248576251027ULL))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [(short)0] [i_0 + 1] [i_2])))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)-125))));
        }
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (short i_9 = 3; i_9 < 11; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */short) (unsigned char)250)), ((short)-16587))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))))));
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(signed char)4] [4U] [i_9 - 2] [i_10 + 1])))))) ? (min((max((var_9), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) arr_15 [(short)13] [i_9 + 3] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        var_22 -= ((/* implicit */int) arr_40 [i_11] [i_11]);
        var_23 = ((/* implicit */signed char) min((var_23), (arr_41 [i_11] [i_11])));
        var_24 = ((/* implicit */short) max((var_24), ((short)32767)));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((var_10) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) var_10)))) * (((/* implicit */int) arr_40 [i_11] [i_11]))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_39 [i_11])) : (((/* implicit */int) arr_39 [i_11]))))), (var_11))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (signed char)-49))))) ? (((arr_43 [i_12]) ? (arr_45 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12])))))) ? (((/* implicit */int) arr_41 [(signed char)12] [i_12])) : (((/* implicit */int) min((arr_43 [1]), (((((/* implicit */int) var_4)) > (((/* implicit */int) var_4)))))))));
        var_26 = ((/* implicit */short) var_8);
    }
    /* LoopSeq 2 */
    for (unsigned char i_13 = 1; i_13 < 19; i_13 += 1) /* same iter space */
    {
        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_0))) > ((+(((((/* implicit */int) var_1)) * (((/* implicit */int) var_10))))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_49 [i_13] [i_13]))))))) ? (max((max((538036107914803323ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_49 [i_13] [i_13])) : (var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_47 [i_13])) : (((/* implicit */int) arr_48 [i_13]))))) ? (((unsigned int) arr_47 [i_13 + 3])) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        var_29 -= ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_13 + 2]))));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (-((-(((((/* implicit */int) arr_48 [i_13 - 1])) - (((/* implicit */int) arr_48 [i_13 + 3])))))))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 1; i_14 < 19; i_14 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */int) arr_47 [i_14]);
        arr_53 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_14 + 1])) ? ((+(((/* implicit */int) arr_47 [(signed char)8])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
        var_32 = ((/* implicit */unsigned int) var_1);
    }
    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65534))));
    var_34 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_1)))) << (((/* implicit */int) var_10))));
}
