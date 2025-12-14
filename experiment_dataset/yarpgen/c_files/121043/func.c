/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121043
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */signed char) arr_1 [i_1]);
            arr_7 [i_0] [(short)12] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1]);
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)83)) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2]) : (arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 2]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 2])) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 2] [i_0 + 3]))))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
            {
                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */signed char) arr_11 [(unsigned char)16] [i_2] [(unsigned char)3]);
                arr_13 [i_3] [i_2 + 2] [i_2] [i_0] = ((/* implicit */unsigned char) (+(arr_9 [i_3] [i_2] [i_0])));
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_14 [i_0] [(short)12] [i_3] [i_2] [i_0] [i_0])))));
                    var_19 = (+((-(arr_0 [i_0] [i_3]))));
                    var_20 += ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)4226)) - (4196)))));
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_2 + 1] [i_0])))));
                    var_22 = ((/* implicit */signed char) ((unsigned char) arr_9 [i_0 + 1] [i_2 + 3] [i_4 + 1]));
                }
                for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    arr_20 [i_5] [i_3] [(short)10] [i_2] [i_5] = ((/* implicit */short) (~(arr_16 [i_2] [i_2] [i_2] [i_2 - 2] [(short)16])));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (unsigned char)86))));
                }
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 1454394180))));
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        var_25 = var_0;
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((10063435049281854167ULL) >= (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */long long int) arr_5 [i_0 + 3] [i_2] [i_3])) : (var_15))))))));
                    }
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((long long int) var_5)))))));
                    arr_28 [i_0] [i_0] [i_3] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_6 + 2]))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((((/* implicit */_Bool) arr_17 [i_6] [i_3] [i_3] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_2] [i_0 + 1])) : (arr_19 [i_2] [i_2] [i_0])))));
                }
            }
            for (short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
            {
                arr_33 [i_8] [i_2 + 3] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_11)), (6841724123750096348ULL))), (((/* implicit */unsigned long long int) ((short) max((arr_23 [i_0] [i_2] [i_2] [i_0]), (((/* implicit */unsigned short) var_10))))))));
                /* LoopSeq 2 */
                for (short i_9 = 3; i_9 < 15; i_9 += 4) 
                {
                    var_28 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) * (((/* implicit */int) (short)-4214))))), ((+(262143ULL)))));
                    arr_37 [i_9] [i_8] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) | (11605019949959455254ULL)));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        var_29 += ((/* implicit */short) arr_18 [i_2 - 2] [i_2] [i_0 + 2]);
                        var_30 = ((/* implicit */long long int) min((var_30), (((long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_2] [i_8] [5ULL])) ? (arr_16 [i_10] [(_Bool)1] [8LL] [i_2 - 1] [i_0 + 3]) : (((unsigned long long int) (signed char)-18)))))));
                    }
                    var_31 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_16 [i_0] [i_9 - 3] [i_8] [i_0] [i_9 - 1]), (arr_16 [i_0 + 1] [i_9 - 3] [i_8] [i_8] [i_0 + 1]))))));
                }
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) arr_14 [i_12] [i_11] [i_8] [i_2] [i_0] [i_0 + 3]);
                        arr_46 [i_12] [i_11] [i_11] [i_8] [i_11] [i_0 + 3] = ((/* implicit */short) arr_1 [i_12]);
                        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_42 [i_12] [i_11] [i_8] [i_2 + 2]))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_39 [i_8] [i_2] [i_8] [i_11] [i_0] [i_11])))) - (arr_32 [i_8] [i_0]))))));
                    }
                    var_35 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_0 + 2])) ? (arr_15 [i_2] [(unsigned short)11] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_0 + 1]) : (arr_15 [i_8] [i_0 - 1] [i_2 + 3] [i_2 + 1] [i_2 + 1] [i_0 - 1]))), (((((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_2 + 3] [i_2 + 2] [i_2 + 2] [i_0 - 1])) ? (arr_15 [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_0 - 1]) : (arr_15 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_0 - 1])))));
                    var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_0] [i_0] [i_0]))));
                    var_37 = max((((((/* implicit */_Bool) (+(6841724123750096332ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4242))) : (var_6))), (((/* implicit */unsigned long long int) ((int) (unsigned char)75))));
                }
                var_38 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_41 [i_0] [i_0] [i_0 + 1]), (((/* implicit */unsigned short) var_13)))))))) != (min((((/* implicit */int) ((signed char) (unsigned char)73))), (((int) arr_16 [i_8] [i_8] [i_0] [i_0] [i_0]))))));
                var_39 *= ((/* implicit */unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) 6436040029033753331ULL))))), (arr_22 [10ULL] [i_2] [i_8] [i_8] [i_0])));
            }
            var_40 = ((/* implicit */unsigned char) min((var_40), (((unsigned char) ((((/* implicit */_Bool) arr_45 [i_0 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2])) && (((/* implicit */_Bool) arr_45 [i_0 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_14 = 3; i_14 < 16; i_14 += 2) 
                {
                    var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                    arr_53 [i_0] [i_0 - 1] [i_2] [i_2] [i_13] [i_14 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [9LL] [i_13] [i_2])) ? (((/* implicit */int) ((arr_35 [i_14] [i_2 + 2] [i_13] [i_14] [i_14] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_13] [i_2])))))) : (((/* implicit */int) (short)-4237))));
                    var_42 += (-((+(((/* implicit */int) var_13)))));
                }
                for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) 
                {
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (+(((arr_15 [i_15] [(signed char)12] [i_15] [i_15 - 1] [i_0 + 2] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                    var_44 = ((/* implicit */unsigned char) min((max((arr_8 [1] [i_2 + 3] [i_2 + 3]), (arr_8 [i_15 + 2] [i_2 + 1] [i_2 - 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                }
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    arr_59 [i_16] [i_16] [i_16] [i_0] [(short)11] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) + (min((arr_44 [i_2] [i_0 - 1] [i_13] [i_0 - 1] [i_13]), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_13] [i_13] [i_16] [i_13] [i_13] [i_2]))))))) && (((/* implicit */_Bool) min(((~(-6574523741569402484LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3871573957U)) || (((/* implicit */_Bool) (signed char)-53))))))))));
                    var_45 = arr_49 [i_2 + 3] [i_2] [i_2 + 1] [i_0 + 2];
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (max((((/* implicit */unsigned long long int) arr_14 [i_16] [i_13] [i_13] [(unsigned short)7] [i_0] [i_0])), (max((arr_0 [i_2 + 1] [i_0 - 1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_0]))) | (arr_51 [i_0] [i_16] [i_2 + 2] [(signed char)1] [i_0])))))))));
                }
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) arr_52 [i_0] [i_2 + 1] [i_13] [4U] [i_13]))));
                arr_60 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((short) var_13));
            }
        }
        var_48 = ((/* implicit */unsigned long long int) max((var_48), (min((max((arr_44 [(unsigned char)2] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_23 [i_0 + 1] [i_0 - 1] [2ULL] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((short) var_0)))))));
        arr_61 [i_0] = (((-(max((((/* implicit */unsigned int) (unsigned char)73)), (arr_18 [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) ((int) ((_Bool) 1312185523313687091ULL)))));
    }
}
