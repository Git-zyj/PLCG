/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182819
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? ((-(min((((/* implicit */unsigned long long int) 4281704200571443545LL)), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)0));
            /* LoopNest 2 */
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_3] [(signed char)5] [i_0] [i_1] [i_4] = var_3;
                            arr_14 [i_0] [(unsigned char)6] [i_2 - 1] [i_3] [(short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3532514216U)))) && (((/* implicit */_Bool) ((int) 0)))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_3])) - (((/* implicit */int) arr_9 [i_0] [i_4] [i_2 - 2] [i_2 + 2]))));
                            var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_4 [i_2 - 3]))));
                        }
                        var_19 = (-((~(((/* implicit */int) arr_0 [i_2 + 2])))));
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned int) min((max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_3 [i_1])))), (((/* implicit */unsigned int) arr_5 [i_0] [i_2 + 1] [i_0])))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (short)-30109))))))));
                        var_21 = ((/* implicit */int) arr_12 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_1] [i_1] [i_0]);
                    }
                } 
            } 
            var_22 = ((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_0] [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_19 [i_0] [(signed char)21] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [(short)5] [i_0] [i_0]))) : (arr_2 [i_0]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-118)))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52889)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_8] [i_5])))))));
                            var_24 += ((/* implicit */short) arr_21 [i_0] [i_8 + 1]);
                            var_25 = ((short) arr_23 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_0]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)6] [(short)15]))) : (var_11))))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [(signed char)12] [i_0] [i_9] [i_9] [i_9])))))));
            var_28 = ((/* implicit */int) (unsigned short)29457);
        }
        var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)15] [6LL]))) == (6020292373483343381ULL))))), (min((min((((/* implicit */signed char) (_Bool)1)), (var_1))), (((/* implicit */signed char) (_Bool)0))))));
        arr_31 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 16890982360700653324ULL))))))), ((!(((/* implicit */_Bool) ((signed char) var_5)))))));
    }
    /* vectorizable */
    for (short i_10 = 1; i_10 < 17; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */unsigned short) (!(((arr_2 [i_10]) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_30 = ((((/* implicit */_Bool) var_10)) ? (6020292373483343392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2))));
                    var_31 *= ((/* implicit */short) (~(((/* implicit */int) var_6))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) arr_34 [i_10] [i_10]);
        arr_41 [i_10 - 1] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (short)-22673))));
        var_33 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1]))));
    }
}
