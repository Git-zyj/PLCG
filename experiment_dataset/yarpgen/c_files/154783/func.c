/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154783
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
    var_17 = min((((var_14) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)3))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned short) 2147483647))) : (((/* implicit */int) var_4))))));
    var_18 |= ((/* implicit */int) (~(((((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_1))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((4474960106882827488ULL) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned char)9] [(unsigned char)9]))) : (((((unsigned int) arr_5 [i_1] [i_0])) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) | (((/* implicit */int) arr_0 [(_Bool)1])))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~((+(arr_1 [i_0 + 1] [i_0 + 1]))))))));
                /* LoopSeq 2 */
                for (int i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    arr_12 [i_0] [(_Bool)1] [4] [(_Bool)1] = ((/* implicit */int) arr_4 [i_0 + 1]);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)143), ((unsigned char)255)))) * (min(((~(((/* implicit */int) arr_2 [7ULL] [i_1])))), (((/* implicit */int) arr_10 [i_0] [(unsigned short)20] [i_3 + 1]))))));
                    var_21 = ((/* implicit */unsigned char) ((int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [(unsigned short)8] [i_0 + 1]))))));
                }
                for (int i_4 = 1; i_4 < 20; i_4 += 2) 
                {
                    var_22 = arr_3 [i_2] [i_1];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_4] [11LL] [i_4] [i_0] = ((/* implicit */unsigned short) (-(arr_17 [i_4] [i_4] [i_4 + 1] [9LL] [i_4])));
                        var_23 = ((/* implicit */int) arr_14 [i_4] [i_2 + 3] [11] [(_Bool)1]);
                        var_24 = ((/* implicit */unsigned short) arr_15 [i_0 + 1] [i_2 - 1] [(unsigned short)5] [i_4]);
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_25 [i_0 + 1] [i_0 + 1] [i_2 + 2] [i_0 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [3] [i_4 - 1] [i_2] [i_4] [8U]))))) | (arr_16 [i_4] [i_4 - 1] [i_4] [i_4])));
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-69))));
                        arr_26 [i_2] [i_1] [4U] [(unsigned char)10] [i_6] &= ((/* implicit */long long int) arr_1 [i_2] [(unsigned short)9]);
                        var_26 = ((/* implicit */unsigned short) (~(arr_17 [i_4] [i_4 - 1] [(unsigned char)9] [i_0] [i_4])));
                        var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_6] [i_1])) ? (arr_9 [i_0 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [19] [i_1])) % (((/* implicit */int) arr_3 [i_6] [i_1])))))))));
                    }
                    arr_27 [i_0 + 1] [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1]);
                    arr_28 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((int) arr_23 [i_4] [i_2] [(unsigned char)7] [(unsigned char)7] [i_4])))) || (((/* implicit */_Bool) (~(arr_14 [i_4] [i_1] [i_1] [i_4 - 1]))))));
                }
                arr_29 [17LL] [0LL] [0LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 1] [20U] [(signed char)14] [i_2])))))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((signed char) ((int) arr_1 [i_7] [i_7])));
                        var_29 = (~(((((arr_14 [i_7] [i_1] [i_1] [0U]) & (arr_33 [i_7] [i_7]))) & (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)98), (((/* implicit */signed char) (_Bool)0)))))))));
                        arr_36 [i_7] [i_7] [i_7] [i_7] [(signed char)7] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned char) (-(min((((/* implicit */unsigned long long int) arr_31 [i_7] [i_2] [14] [i_7])), (arr_1 [18ULL] [11LL]))))));
                    }
                    for (signed char i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_16 [i_1] [1] [i_7] [i_9])))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_30 [i_7] [i_9] [i_0 + 1] [i_2 + 3] [(unsigned short)8] [(unsigned short)8]), (arr_30 [i_0] [i_9] [i_0 + 1] [i_2 + 3] [i_2] [i_9])))))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), ((-(arr_33 [i_2] [12U])))));
                    }
                    var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned short)65532), ((unsigned short)1)))) / (((/* implicit */int) (unsigned short)48760))))), (arr_7 [0U] [i_7])));
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    arr_41 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)1)))))) % (((arr_14 [i_10] [i_0 + 1] [i_10] [(unsigned short)5]) / (arr_16 [i_0 + 1] [13] [i_10] [i_10 + 1]))))), (((unsigned int) (-(((/* implicit */int) arr_35 [14LL] [i_10] [i_2] [i_2] [(_Bool)1] [i_2])))))));
                    var_34 = ((/* implicit */_Bool) (+(arr_23 [i_2] [i_0] [i_2 - 2] [i_10 + 3] [i_10])));
                    var_35 = (i_10 % 2 == zero) ? (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((arr_17 [17] [i_1] [i_2 - 1] [i_10 + 3] [i_10]) << (((((((/* implicit */int) arr_37 [i_0] [i_0] [0] [i_0] [i_0] [i_10] [i_0])) + (120))) - (16)))))) ? (arr_14 [i_10] [i_1] [i_2] [2]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_31 [i_0 + 1] [i_1] [i_10] [i_10]))))))))) : (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((arr_17 [17] [i_1] [i_2 - 1] [i_10 + 3] [i_10]) << (((((((((((/* implicit */int) arr_37 [i_0] [i_0] [0] [i_0] [i_0] [i_10] [i_0])) + (120))) - (16))) + (35))) - (15)))))) ? (arr_14 [i_10] [i_1] [i_2] [2]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_31 [i_0 + 1] [i_1] [i_10] [i_10])))))))));
                }
            }
            for (int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-((-(((/* implicit */int) arr_35 [i_1] [i_11] [i_1] [i_1] [(_Bool)1] [(_Bool)1]))))))) / ((+((+(arr_17 [i_1] [2U] [i_11] [(unsigned char)4] [i_11])))))));
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_11])) ? (((/* implicit */unsigned int) 1872586465)) : (((unsigned int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_11])))))))));
                var_38 = ((unsigned char) min((16326667273378264719ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
            }
            arr_45 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)38121)) % (((/* implicit */int) (unsigned char)149))));
        }
        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            arr_48 [(unsigned char)8] [i_12] = ((/* implicit */unsigned int) max(((+(arr_17 [i_0 + 1] [(_Bool)1] [2U] [i_0 + 1] [i_12]))), (((/* implicit */long long int) ((unsigned short) (unsigned char)139)))));
            var_39 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((_Bool) ((unsigned char) (_Bool)1)))), (arr_8 [i_0 + 1] [3U] [i_12] [i_0 + 1])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                var_40 = ((/* implicit */int) (~(2285431830U)));
                arr_51 [(_Bool)1] [11ULL] [i_12] [i_0] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_12])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)140)) - (116)))))));
                var_41 = ((/* implicit */unsigned int) ((unsigned char) arr_21 [4] [i_0 + 1] [(unsigned char)2] [i_0 + 1] [(unsigned char)14] [(signed char)18] [i_13]));
                var_42 = ((/* implicit */unsigned char) ((arr_39 [i_0 + 1] [20ULL] [i_0] [i_12] [i_0 + 1]) ^ (arr_9 [i_0 + 1])));
                var_43 = ((_Bool) (unsigned char)138);
            }
            for (unsigned int i_14 = 3; i_14 < 18; i_14 += 1) 
            {
                arr_55 [5ULL] [i_12] [(_Bool)1] = ((/* implicit */unsigned char) arr_40 [i_12] [i_12] [(_Bool)1] [20ULL]);
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_15 [i_0 + 1] [i_12] [(unsigned char)10] [i_12]) ^ (((/* implicit */long long int) -1480854081))))) && (((/* implicit */_Bool) ((unsigned int) arr_34 [i_0 + 1] [i_12] [i_12]))))))) >= (max((arr_23 [i_0] [i_0 + 1] [i_0] [i_0] [i_12]), (((/* implicit */unsigned int) arr_11 [i_0 + 1] [i_12] [i_14 + 3] [i_12]))))));
                var_45 ^= ((/* implicit */unsigned short) ((signed char) (unsigned char)114));
            }
            arr_56 [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned int) 2579364719U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [12U] [i_12] [i_12] [i_12] [i_0 + 1] [i_12]))) : (((((/* implicit */_Bool) 3049722683U)) ? (((/* implicit */unsigned int) 2147483633)) : (arr_13 [(signed char)10] [i_0] [i_12] [i_0 + 1])))))));
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [14LL] [8LL] [i_0 + 1] [i_0] [i_0] [i_0] [14LL])) ? (((((/* implicit */int) arr_4 [i_0 + 1])) / (((/* implicit */int) arr_24 [i_0] [(unsigned short)2] [i_0 + 1] [i_0] [(signed char)12])))) : ((-(((/* implicit */int) (unsigned char)126))))));
        var_47 = ((int) ((((/* implicit */_Bool) ((int) (unsigned char)109))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_9 [i_0])));
        arr_57 [i_0 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(signed char)12]))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
    {
        arr_60 [(unsigned short)1] [i_15] = ((/* implicit */unsigned int) ((unsigned short) arr_37 [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_15] [(unsigned char)0] [i_15]));
        arr_61 [13ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_37 [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15] [(unsigned char)18] [i_15]))))) % (((/* implicit */int) (short)32757))));
        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_10 [(signed char)8] [(_Bool)1] [i_15]))))))));
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
    {
        arr_65 [i_16] [i_16] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_19 [i_16] [i_16 + 1] [i_16] [i_16 + 1] [10U])) ? (((/* implicit */int) arr_19 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [(_Bool)1])) : (((/* implicit */int) arr_19 [i_16] [i_16 + 1] [(unsigned short)12] [i_16 + 1] [(unsigned char)10]))))));
        arr_66 [i_16] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)29)))) | (((((/* implicit */_Bool) min((arr_13 [i_16] [(signed char)20] [18] [(signed char)20]), (((/* implicit */unsigned int) arr_47 [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) arr_31 [i_16] [(unsigned char)10] [i_16 + 1] [18U])) : ((-(((/* implicit */int) arr_47 [i_16] [i_16] [(unsigned short)12]))))))));
    }
    var_49 = ((/* implicit */_Bool) var_14);
    var_50 = ((/* implicit */signed char) (~(((unsigned int) var_16))));
}
