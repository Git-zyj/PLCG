/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108362
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(unsigned short)5] [i_0] [i_1] = ((/* implicit */unsigned short) (((-((+(var_10))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)3)))))))));
                    var_19 = (+(((/* implicit */int) (signed char)7)));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */int) var_12);
                        /* LoopSeq 4 */
                        for (int i_4 = 3; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)65535);
                            var_21 ^= ((/* implicit */signed char) ((arr_0 [i_4 + 1]) / (max((arr_0 [i_4 - 2]), (arr_0 [i_4 - 1])))));
                        }
                        for (int i_5 = 3; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [(unsigned short)0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_0] [16U] [i_3] [i_0])) + (((/* implicit */int) max((((/* implicit */short) arr_1 [i_5])), (var_5))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4810))))), (max((((/* implicit */long long int) var_14)), (7890209784342161747LL))))))));
                            var_23 = ((unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0])) + ((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (int i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min(((+(arr_8 [i_2] [i_6 + 1] [i_6] [i_6 + 2] [i_6 - 2]))), ((+(arr_8 [i_2] [i_6 - 3] [i_6] [i_6 + 2] [i_6 - 2]))))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (((/* implicit */short) var_16))))) | (((((/* implicit */int) var_5)) ^ (var_18)))))), (((unsigned long long int) (~(((/* implicit */int) (signed char)2))))))))));
                        }
                        for (int i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) ((min((13252127122025030008ULL), (((/* implicit */unsigned long long int) 3499846706U)))) * (max((((arr_18 [i_0]) / (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (signed char)-60))))));
                            arr_21 [i_0] [6LL] [i_2] [i_2] [(unsigned short)1] [i_3] [i_0] = ((/* implicit */long long int) var_6);
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_11))));
                        var_28 = ((signed char) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)50)), ((short)-21665))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        arr_27 [i_0] [i_9] [i_2] [10LL] [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_22 [i_9] [i_2] [i_1] [i_0] [i_0]))))), ((~((~(arr_19 [i_0] [i_0] [i_0] [i_0] [0LL] [i_0] [i_0]))))));
                        arr_28 [i_1] [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_18);
                    }
                    arr_29 [i_0] [i_0] = ((/* implicit */signed char) max((((min((arr_9 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2] [i_1] [i_1] [2] [i_0])))) >> (((arr_17 [i_2] [i_2] [i_2] [8U] [i_1] [8U] [i_0]) - (7090227944169555826LL))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [2U] [i_0]))));
                    var_29 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_25 [(short)4] [5LL] [i_0]))) : ((~(arr_18 [i_2])))))));
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */int) ((arr_18 [i_0]) << (((min((((/* implicit */long long int) ((int) var_14))), (min((((/* implicit */long long int) (unsigned char)99)), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)9]))))) - (61LL)))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(var_3))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] [(signed char)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) >> ((((~(((/* implicit */int) (signed char)7)))) + (33)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) min(((unsigned short)2758), (((/* implicit */unsigned short) (short)-26906))))) >> (((arr_20 [i_10] [i_10]) + (1408536778)))))));
        var_31 += ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_10] [i_10] [i_10] [(unsigned char)21]))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_10]))) & ((-9223372036854775807LL - 1LL)))))) & (((/* implicit */long long int) arr_23 [i_10] [i_10] [i_10] [i_10]))));
        var_32 ^= ((/* implicit */signed char) min((max(((((_Bool)1) ? (arr_17 [i_10] [i_10] [i_10] [i_10] [21ULL] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_10] [(unsigned char)10] [10LL] [i_10] [(signed char)3]))))), (((/* implicit */long long int) (((+(-1449452119))) ^ (arr_23 [i_10] [i_10] [i_10] [i_10]))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_33 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_32 [i_11] [(_Bool)1]))))));
        var_34 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 806194250)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-99)))) + (((/* implicit */int) arr_31 [i_11])))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) min((arr_35 [i_12] [i_12]), (((/* implicit */unsigned long long int) var_15)))))));
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 21; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                {
                    arr_44 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) var_16);
                    var_36 = ((/* implicit */int) arr_4 [i_12] [i_12] [i_12] [i_12]);
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned long long int) arr_32 [i_12] [(short)13]);
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 8; i_15 += 2) 
    {
        for (signed char i_16 = 2; i_16 < 8; i_16 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_17 = 1; i_17 < 7; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 1; i_18 < 8; i_18 += 2) 
                    {
                        {
                            arr_55 [i_18] [6LL] = ((/* implicit */int) max((((((((/* implicit */unsigned long long int) -1449452099)) | (440953020024561157ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)33)), (arr_26 [i_18] [i_18] [i_17 - 1] [i_15] [i_18] [i_15])))))), (min((arr_47 [i_15] [i_16]), (((/* implicit */unsigned long long int) min((arr_38 [i_15] [i_17]), (((/* implicit */long long int) var_1)))))))));
                            arr_56 [(unsigned short)7] [i_18] [(unsigned short)7] [i_18] = ((/* implicit */short) max((var_18), (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_17 - 1] [i_18 + 2])), ((unsigned short)44290))))));
                        }
                    } 
                } 
                arr_57 [1U] [i_16] = ((/* implicit */int) ((min((arr_51 [i_15] [i_16] [i_16 - 1] [i_16]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 0LL)) == (var_10)))))) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_15])), (arr_12 [i_15] [i_15 + 2] [i_15 - 1] [i_15] [i_15 - 1]))))));
            }
        } 
    } 
    var_38 = ((/* implicit */_Bool) max((6993847512772984278ULL), (((/* implicit */unsigned long long int) 727148130U))));
    /* LoopNest 2 */
    for (unsigned short i_19 = 2; i_19 < 23; i_19 += 2) 
    {
        for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            {
                arr_62 [i_20] [i_19 - 1] = ((/* implicit */unsigned long long int) var_1);
                arr_63 [i_19] [i_19 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_60 [i_20] [16])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 16776192U)) ? (-379392460) : (var_3)))))))));
            }
        } 
    } 
}
