/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118956
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
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned long long int) ((long long int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)14]))))))));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_7))));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) (-((~(arr_5 [i_1] [(unsigned short)12])))));
        arr_7 [8U] &= min((((/* implicit */long long int) (~(((/* implicit */int) (short)16031))))), (((long long int) arr_2 [i_1 - 1])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            arr_12 [i_1] [i_1 + 1] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) var_8)) : (arr_3 [i_1])));
            arr_13 [i_1] = ((/* implicit */unsigned char) var_9);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) arr_2 [i_1 + 1])))))));
            var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)10))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_9 [(unsigned char)16] [i_1 + 1])))))))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65526))))) ? ((-(((/* implicit */int) arr_11 [i_3])))) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_1 + 1] [i_1 - 1]), (arr_14 [i_1 + 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (var_9)))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 3) /* same iter space */
    {
        arr_21 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_0 [i_4])), (arr_1 [i_4 - 1])))), (min((var_8), (((/* implicit */unsigned int) arr_1 [i_4 - 1]))))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (short)32764)) << (((((/* implicit */int) (unsigned short)65535)) - (65535)))));
                        arr_31 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) && (((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        var_22 = arr_22 [i_4 - 1] [(short)3];
    }
    /* LoopSeq 2 */
    for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
    {
        arr_35 [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32743)) ? ((~(((/* implicit */int) arr_34 [i_8 + 2])))) : (((((/* implicit */int) arr_34 [i_8 - 1])) - (((/* implicit */int) arr_34 [i_8 + 2]))))));
        arr_36 [i_8] [9LL] = var_9;
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_49 [i_10] [i_10] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_10])) ? (arr_48 [(unsigned short)0] [i_10] [(short)0] [i_12] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744)))));
                        var_23 = ((/* implicit */short) ((arr_41 [11ULL] [i_10]) || (((/* implicit */_Bool) arr_3 [i_10]))));
                        arr_50 [i_10] [i_10] [i_11] [0U] [8ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_11] [i_10]))));
                        var_24 -= ((unsigned long long int) arr_48 [i_9] [i_10] [i_11] [i_12] [i_12]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9] [(unsigned short)24] [i_9]))) & (var_7)));
    }
    /* LoopSeq 2 */
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) ((((_Bool) arr_52 [1] [(short)15])) ? (var_12) : (((((/* implicit */_Bool) arr_54 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_13]))) : ((~(5763025096543438894ULL)))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_15 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_13] [(unsigned short)4] [i_13])))))))));
        arr_55 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_25 [i_13] [i_13] [i_13])), (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_51 [i_13] [i_13])) : (((/* implicit */int) arr_22 [i_13] [i_13]))))) : (((long long int) ((((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) arr_5 [i_13] [i_13])) : (var_12))))));
        arr_56 [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_13] [i_13])) ? (arr_4 [i_13] [i_13]) : (arr_4 [i_13] [i_13]))) & (((((/* implicit */_Bool) arr_4 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_4 [i_13] [i_13])))));
    }
    for (unsigned short i_14 = 4; i_14 < 23; i_14 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((int) min((arr_0 [i_14]), (arr_0 [i_14])))))));
        var_29 = ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_2 [i_14 + 1])))), (((arr_26 [i_14 - 4] [i_14] [i_14] [(unsigned short)5]) && (((/* implicit */_Bool) arr_2 [i_14 - 4]))))));
    }
}
