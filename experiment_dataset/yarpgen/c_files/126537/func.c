/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126537
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    var_17 = ((/* implicit */unsigned int) ((((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_1))))) << (((/* implicit */int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (signed char)-65))))))))));
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
            {
                var_20 = var_9;
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    arr_12 [i_0] [i_2] [i_3] = arr_9 [i_2] [i_1 - 1] [i_3] [(signed char)13] [i_3] [i_3];
                    var_21 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_2 [i_1 + 1])))));
                    arr_13 [i_3] [i_2] [i_1] [i_0] &= ((/* implicit */signed char) var_0);
                }
            }
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
            {
                var_22 *= ((/* implicit */short) arr_6 [i_4]);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_15 [i_0] [i_1] [i_4]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (arr_7 [i_0] [(short)3] [i_4] [i_5]))));
                    var_24 -= ((/* implicit */unsigned int) var_3);
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) & (((/* implicit */int) var_13)))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))));
                }
            }
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
            {
                var_27 &= ((/* implicit */long long int) var_5);
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1] [i_1 - 2]))) ^ (((unsigned int) arr_5 [i_1 + 1] [i_1 - 2] [i_1 + 1])))))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 2])) && (((/* implicit */_Bool) ((short) arr_1 [i_1] [i_1 - 2])))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_30 [i_0] [i_1] [i_6] [2ULL] = ((/* implicit */unsigned long long int) (unsigned short)39540);
                    var_30 = ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) > (((/* implicit */int) var_1))));
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((unsigned int) arr_23 [i_1] [i_1] [i_1] [i_1 + 1] [(short)11] [i_1 - 1]));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) var_13)) < (((/* implicit */int) ((_Bool) var_7))))))));
                    var_33 = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
                    var_34 = ((/* implicit */long long int) var_9);
                }
                var_35 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_6])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (arr_7 [(_Bool)1] [(_Bool)1] [i_1 + 1] [i_6]))));
            }
            arr_34 [i_0] = ((/* implicit */unsigned char) (~(arr_3 [i_1 - 1])));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_8 [i_1 - 2]))))))));
            arr_35 [(signed char)0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) var_1);
        }
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            arr_38 [i_10] [(unsigned short)1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_0] [i_0] [i_0] [i_10]))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_10] [i_10] [i_10]))) * (var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_0])))))));
            arr_39 [i_0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_10])), (arr_31 [i_0] [i_0] [i_0] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_10])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10))))) : (arr_19 [i_10])))));
        }
        var_37 = ((/* implicit */unsigned char) ((signed char) arr_0 [i_0]));
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
    {
        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_11 [i_11])), (var_12))), (((/* implicit */unsigned int) arr_37 [i_11] [i_11]))))) * (arr_19 [i_11])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            arr_45 [i_11] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [(unsigned short)1])) || (((/* implicit */_Bool) var_9)))))));
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(((/* implicit */int) arr_25 [i_12] [i_12 - 1] [i_12] [i_12])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
        {
            arr_48 [i_11] = ((/* implicit */signed char) ((unsigned short) arr_46 [i_13 - 1] [i_13 + 1] [i_13 + 1]));
            arr_49 [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_13 - 1] [i_13 - 1] [(short)8]))));
        }
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 12; i_16 += 1) 
            {
                {
                    var_40 = ((/* implicit */signed char) (~(arr_47 [i_16 + 1] [i_16] [i_16 - 1])));
                    arr_58 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [(unsigned short)0] [i_15] [i_16]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_7))))) : (arr_22 [i_14] [i_14] [i_15] [i_16])));
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) var_1);
                        arr_61 [i_14] [i_15] [i_16 - 1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_7 [i_14] [i_14] [i_14] [i_14]))) + (((/* implicit */int) var_0))));
                    }
                    for (short i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) var_8);
                        arr_65 [i_14] [i_15] [i_16 + 1] [(signed char)4] &= (-(((unsigned long long int) arr_55 [i_15])));
                    }
                    for (short i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
                    {
                        arr_68 [i_15] [i_16 + 2] [i_15] [i_15] = ((/* implicit */unsigned long long int) var_3);
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((signed char) var_9)))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [5ULL] [i_14] [i_14] [i_14]))));
        arr_69 [(signed char)2] = ((/* implicit */_Bool) ((unsigned short) arr_24 [(unsigned short)4] [i_14] [i_14] [i_14]));
    }
    var_45 = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
}
