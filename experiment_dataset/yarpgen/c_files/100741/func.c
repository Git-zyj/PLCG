/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100741
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(5642126779167561555ULL)));
                        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0]))));
    }
    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35845))));
                        arr_22 [2U] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)35824))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29691)))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (~(max(((~(((/* implicit */int) arr_11 [i_4])))), (((/* implicit */int) max(((unsigned short)29690), (((/* implicit */unsigned short) arr_2 [i_4] [i_4] [i_4]))))))))))));
                        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)51))))), (max((arr_0 [i_6 - 1]), (((/* implicit */long long int) var_0))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) (+(var_7)));
                            var_21 &= ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) min((var_22), (max((max((arr_27 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 - 2] [i_6]), (((/* implicit */int) max(((unsigned short)35845), ((unsigned short)29692)))))), ((-(((/* implicit */int) min(((unsigned char)35), (((/* implicit */unsigned char) (_Bool)1)))))))))));
                            var_23 = min((((/* implicit */unsigned short) max((min((((/* implicit */short) (unsigned char)0)), (arr_4 [i_4] [i_4]))), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))))), (max((min((((/* implicit */unsigned short) (unsigned char)224)), ((unsigned short)4753))), (((/* implicit */unsigned short) (unsigned char)255)))));
                        }
                        for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            arr_33 [i_5] [i_5] [i_5] [9ULL] [i_6] [i_5] [i_11] = ((/* implicit */long long int) min((max(((-(((/* implicit */int) arr_32 [i_4] [i_5] [6U] [6U] [6] [i_11] [6])))), (((/* implicit */int) var_8)))), ((-(((/* implicit */int) (unsigned char)224))))));
                            arr_34 [1LL] [i_5] [i_5] [1LL] [i_5] [i_5] = ((/* implicit */long long int) (~((~(((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)3)))))))));
                            arr_35 [i_4] [i_5] [i_6] [i_5] [i_8] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_3), (var_4)))), (max((min((-9223372036854775795LL), (((/* implicit */long long int) (short)-1)))), (var_6)))));
                        }
                        arr_36 [i_5] [i_5] [i_5] [i_6] [(short)6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_20 [i_4] [i_5] [i_4] [i_4])), ((unsigned char)255)))))))));
                    }
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 4) 
                    {
                        var_24 ^= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [11] [i_5] [(short)13]))))), (max((16299091138815929657ULL), (((/* implicit */unsigned long long int) var_4))))))));
                        var_25 |= max(((-(max((((/* implicit */int) var_3)), (arr_37 [i_4] [i_6 - 2] [i_6 - 2]))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_42 [i_4] [i_5] [i_5] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) min((13479711992867481548ULL), (((/* implicit */unsigned long long int) arr_20 [i_6 + 1] [i_5] [i_6 - 1] [i_6 - 2])))))));
                        var_26 -= ((/* implicit */_Bool) (~(max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))));
                        arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)211)), (arr_14 [i_4] [i_13]))), (max((arr_14 [i_5] [i_13]), (-193335744)))));
                        var_27 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) max((149953259), (((/* implicit */int) (unsigned char)227))))), (min((((/* implicit */long long int) var_9)), (var_6)))));
                        arr_44 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_29 [(signed char)3] [i_6 - 2] [(unsigned char)2] [i_6 - 2] [i_6]), (arr_29 [(short)5] [i_6 - 2] [i_6 + 1] [i_6 - 2] [7U]))))));
                    }
                    arr_45 [i_5] [i_6 - 2] = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (var_14)))), (max((((/* implicit */unsigned int) min((((/* implicit */short) arr_12 [i_4])), ((short)-7463)))), (max((((/* implicit */unsigned int) (_Bool)0)), (var_10)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 3; i_14 < 10; i_14 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned short) max((max((((/* implicit */int) (short)19)), ((-(((/* implicit */int) arr_16 [(short)2])))))), (max((((/* implicit */int) var_8)), (var_14)))));
                        arr_49 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_38 [i_6 - 2] [i_14 - 1] [i_14] [i_14 - 2] [0U])))), (((/* implicit */int) max((min((((/* implicit */unsigned short) (short)24930)), ((unsigned short)16))), (((/* implicit */unsigned short) (_Bool)1)))))));
                        arr_50 [i_4] [i_5] [i_6] [i_14] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_1)), (8589934591ULL))), ((+(13479711992867481548ULL)))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 4045099384531586271LL))))))), ((+(((/* implicit */int) arr_38 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6])))))))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) 2147483635)), (arr_3 [i_6] [i_6 + 1] [i_6]))), (min((((/* implicit */long long int) var_11)), (arr_3 [i_6] [i_6] [i_6])))));
                        arr_54 [i_4] [i_4] [i_6] [i_6] [i_15] [i_5] = ((/* implicit */_Bool) (+((-(max((((/* implicit */int) (_Bool)0)), (var_1)))))));
                    }
                    for (long long int i_16 = 1; i_16 < 9; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            arr_60 [i_4] [i_5] [i_4] [i_4] [6U] [i_4] = ((/* implicit */unsigned short) (~((-(-9223372036854775796LL)))));
                            var_31 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)237))))));
                        }
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)57740)))))))));
                        arr_61 [i_5] [(unsigned short)10] |= ((/* implicit */short) (-(((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_8)))))));
                        var_33 ^= ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-11)), (arr_51 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_16 - 1] [(short)4] [(short)4]))))));
                    }
                    /* vectorizable */
                    for (long long int i_18 = 1; i_18 < 9; i_18 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_6 - 2] [i_6 - 2] [i_6] [i_18 + 1] [i_18 + 1] [(_Bool)0]))));
                        arr_64 [i_4] [i_4] [i_5] [i_6] [i_18 - 1] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    }
                    arr_65 [i_5] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) (signed char)0))))));
                    arr_66 [i_4] [i_5] [6LL] [(signed char)2] = ((/* implicit */unsigned short) (+((-(arr_27 [3LL] [i_5] [i_5] [i_5] [i_5] [8LL])))));
                }
            } 
        } 
        var_35 = ((/* implicit */short) min((max((((/* implicit */long long int) min((((/* implicit */signed char) var_11)), (var_15)))), (max((((/* implicit */long long int) (signed char)8)), (549751619584LL))))), (((/* implicit */long long int) min(((+(arr_48 [i_4] [i_4] [(unsigned short)4] [i_4] [i_4] [(_Bool)1]))), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
        arr_67 [i_4] = ((/* implicit */long long int) (+((-2147483647 - 1))));
    }
    for (long long int i_19 = 0; i_19 < 13; i_19 += 4) 
    {
        var_36 = ((/* implicit */unsigned long long int) (+(min((min((arr_3 [i_19] [(unsigned short)8] [i_19]), (((/* implicit */long long int) arr_5 [i_19] [i_19] [i_19])))), (((/* implicit */long long int) arr_69 [i_19]))))));
        arr_70 [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_1 [i_19]))))));
    }
    var_37 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min((var_3), (var_4))))))));
}
