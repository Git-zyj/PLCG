/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169532
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
    var_13 |= (+(((unsigned int) var_6)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [9] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? ((-(3453499509U))) : ((+(var_4))))));
        arr_3 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_0 [i_0 + 3])) + (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned char)178)))))));
        arr_5 [i_0] = ((/* implicit */signed char) max((var_4), (3453499513U)));
        var_14 += ((/* implicit */signed char) (+((-(((/* implicit */int) arr_1 [i_0 + 3]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_2] &= ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (-(arr_11 [i_1] [i_1] [i_4])))), (max((((/* implicit */long long int) 841467788U)), (-2772472753837297302LL)))))));
                        var_15 = (unsigned char)255;
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) (unsigned char)208);
            var_17 += ((/* implicit */unsigned short) arr_7 [i_1]);
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            arr_20 [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(3453499505U))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_18 += ((/* implicit */unsigned short) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_19 &= (((-(((/* implicit */int) max((((/* implicit */signed char) arr_22 [i_1] [i_1] [i_6] [i_6])), (var_9)))))) < (((/* implicit */int) var_5)));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((0) & (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (unsigned char)255)))))))) < (1135045522U)));
                            var_22 = ((/* implicit */signed char) arr_10 [(unsigned char)2] [i_6] [i_6] [i_10]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_10 [i_6] [i_5] [i_5] [i_1]))));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_24 -= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_26 [16] [16] [16] [14U] [i_11]))), (min((18446744073709551590ULL), (((/* implicit */unsigned long long int) var_9)))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_28 [i_5] [i_11] [i_5] [i_13])) : (((/* implicit */int) arr_19 [i_1] [i_1])))), (((/* implicit */int) arr_24 [i_5] [i_5] [i_12] [i_13]))))));
                            var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(2077611524)))), ((-(min((var_0), (var_0)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_1] [i_1] [i_5] [i_14] [i_14] [i_1])) & (((/* implicit */int) arr_39 [i_1] [i_5] [i_5] [(short)6] [i_1] [i_1]))));
                var_28 = ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))));
                var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_30 [i_1] [i_5] [i_14] [i_14] [i_14]))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 3; i_16 < 16; i_16 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((min((max((var_11), (((/* implicit */unsigned int) arr_19 [i_1] [i_5])))), (841467783U))) << (((var_11) - (79709693U)))));
                        arr_46 [i_1] [i_5] [i_15] [i_16] = ((/* implicit */unsigned char) var_11);
                        arr_47 [i_16] [i_16 - 1] [i_15] [i_16 - 1] [18LL] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5]))) - (((var_12) & (((/* implicit */unsigned long long int) 4159881866U)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)78)))))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) | (9223372036854775807LL)));
                        var_32 = ((/* implicit */unsigned int) arr_11 [i_16] [i_15] [i_15]);
                    }
                } 
            } 
        }
        for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            arr_50 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) min((max((((/* implicit */int) (unsigned short)54576)), (0))), ((+((+(((/* implicit */int) var_3))))))));
            arr_51 [i_1] = ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) arr_21 [i_1] [i_17])), (arr_11 [i_17] [i_17] [i_17]))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 841467765U))))) ^ (((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_1] [i_17])))))));
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) var_2))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            var_34 = ((/* implicit */int) (~(arr_14 [i_1] [i_18] [i_18])));
            arr_56 [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(841467787U)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
            arr_57 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)17999)) <= (arr_11 [i_1] [i_18] [i_18])));
        }
    }
}
