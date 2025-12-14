/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140830
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */int) var_13);
            var_16 = ((/* implicit */unsigned int) ((arr_0 [i_1] [i_0]) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0])))))));
        }
        for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3])) & (((/* implicit */int) arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3])))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 *= ((/* implicit */long long int) arr_0 [i_0] [i_3]);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                {
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_1 [i_4]))))) & (var_5)));
                    arr_14 [i_0] [i_3] [i_4] = ((/* implicit */int) arr_0 [i_0] [i_4]);
                    var_20 = ((/* implicit */signed char) var_2);
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [i_0] [i_2 - 2]))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 - 3] [i_2 + 2] [i_0] [i_2 - 3] [i_2 - 2])) ? (arr_10 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2 - 2] [i_2 - 1] [i_0] [i_2] [i_2 - 3])))));
                    var_23 = ((/* implicit */int) var_15);
                }
            }
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                arr_20 [(_Bool)1] [i_0] [i_6] = var_10;
                var_24 = (~(((/* implicit */int) arr_19 [i_0] [i_0])));
            }
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) arr_21 [i_7] [i_2] [i_0] [1]);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 3] [i_2 - 1])) ? (arr_9 [i_2 - 2] [(signed char)24] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 3] [i_2 - 1]))))))));
                arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
                arr_24 [i_0] [i_2 - 3] [i_0] = ((/* implicit */unsigned long long int) var_8);
            }
            /* LoopNest 3 */
            for (signed char i_8 = 4; i_8 < 23; i_8 += 1) 
            {
                for (signed char i_9 = 2; i_9 < 24; i_9 += 2) 
                {
                    for (signed char i_10 = 3; i_10 < 21; i_10 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned short) var_6);
                            var_28 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            } 
        }
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]);
        var_29 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_30 = ((/* implicit */unsigned int) max((var_30), (arr_18 [i_0] [i_0] [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_31 = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0]);
            arr_41 [i_0] = ((/* implicit */int) var_10);
        }
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) var_10))));
    /* LoopSeq 1 */
    for (signed char i_12 = 2; i_12 < 12; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))))), (arr_43 [i_12 + 1])))), (max((arr_49 [i_14] [i_13] [i_14] [i_12]), (((/* implicit */unsigned int) arr_43 [i_12 + 1]))))));
                    var_34 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_12 + 1] [i_12]))));
                    arr_50 [i_12] [i_12] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) > (min(((-(((/* implicit */int) arr_43 [i_12])))), (((/* implicit */int) ((arr_30 [i_12] [i_13]) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                    var_35 = var_3;
                }
            } 
        } 
        arr_51 [i_12] [i_12] = ((/* implicit */int) var_9);
    }
    var_36 = ((/* implicit */signed char) var_9);
    var_37 = ((/* implicit */long long int) var_7);
}
