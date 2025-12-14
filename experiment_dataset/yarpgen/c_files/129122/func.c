/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129122
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
    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
    var_17 = ((/* implicit */short) (~((-((+(var_2)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_19 = ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) != (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [(unsigned short)2])))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    var_22 = var_13;
                    var_23 &= ((/* implicit */int) (~(((arr_4 [i_2 - 1]) / (arr_4 [i_2 - 1])))));
                    arr_10 [i_2 - 1] [i_1] = ((/* implicit */_Bool) var_7);
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        arr_14 [i_2] [i_3] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        var_24 -= ((/* implicit */short) (+(((((/* implicit */int) arr_11 [i_1] [i_2 - 1])) + (((/* implicit */int) var_11))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) == (arr_6 [i_1] [i_2 - 1] [i_3])))) ^ ((+((~(arr_7 [i_1])))))));
                        arr_15 [i_1] [i_1] [0LL] [i_1] [0LL] [0LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) < (arr_7 [i_2 - 1]))))));
                    }
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_5] [i_3]))));
                        var_27 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_2] [i_2 - 1] [8ULL]))) <= (var_3))))))));
                        arr_19 [i_5] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (((-(((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_5] [i_5] [i_5])))) < (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 1])))))));
                        arr_20 [i_1] [i_2] = (-(((((/* implicit */int) var_7)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5]))))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(var_2))))));
                            arr_26 [i_1] [i_1] [i_3] [(_Bool)1] [i_7 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [(unsigned short)8] [i_3]))));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        arr_27 [i_1] [i_1] [i_2 - 1] [i_3] [i_6] = ((/* implicit */short) var_3);
                        arr_28 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_12)))))))));
                    }
                    arr_29 [i_1] [i_1] [7ULL] = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
        arr_30 [i_1] [(unsigned short)2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                {
                    arr_39 [i_1] [i_9] [i_9] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) arr_18 [i_1] [i_8] [i_8] [i_8] [i_9])) == (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_17 [i_8] [i_1] [i_9]))))));
                    arr_40 [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_8] [i_9] [i_8])))))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_43 [i_10] [i_9] [i_8] [(short)8] = ((/* implicit */unsigned long long int) var_1);
                        var_31 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_6 [i_1] [i_8] [i_10]))))));
                        arr_44 [i_1] [i_8] [i_9] [i_10] = ((/* implicit */short) (~((-(((/* implicit */int) arr_42 [i_9]))))));
                        arr_45 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(arr_2 [i_8] [i_9])))));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_48 [i_11] = ((/* implicit */long long int) arr_16 [i_1] [i_8] [(_Bool)1] [i_11]);
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((-(arr_6 [i_1] [i_9] [i_11]))))))));
                        arr_49 [i_1] [8LL] = ((/* implicit */unsigned long long int) arr_38 [i_9] [i_1] [i_9]);
                        arr_50 [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_17 [i_1] [(_Bool)1] [i_9]);
                    }
                }
            } 
        } 
        arr_51 [i_1] = ((/* implicit */_Bool) (~((+((+(((/* implicit */int) var_8))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) (~((+(((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12] [i_12] [(signed char)1])))))))));
        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned int) arr_1 [i_12]))))))))));
        arr_54 [i_12] = ((/* implicit */long long int) (+(arr_5 [i_12] [i_12] [i_12])));
    }
    /* LoopSeq 3 */
    for (long long int i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        var_35 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_13]))))))))));
        arr_57 [i_13 - 1] = ((/* implicit */signed char) arr_55 [i_13] [i_13]);
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
    {
        var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_59 [i_14] [i_14]))));
        var_37 = ((/* implicit */unsigned char) (!(arr_60 [i_14])));
        arr_61 [i_14] [18LL] = ((/* implicit */short) (-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(_Bool)0] [i_14]))))))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 1; i_15 < 20; i_15 += 1) 
    {
        arr_64 [i_15 - 1] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_63 [i_15 + 1] [i_15 - 1]))))));
        arr_65 [i_15] [i_15] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_62 [(short)8] [i_15 + 1])))) % (((/* implicit */int) arr_62 [i_15 - 1] [i_15 - 1]))));
        arr_66 [i_15] = ((/* implicit */unsigned char) (-(var_5)));
    }
}
