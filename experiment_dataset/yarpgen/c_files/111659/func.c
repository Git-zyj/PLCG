/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111659
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
    var_13 = var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_1 [i_1 - 1] [i_0]))));
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_3) < (((/* implicit */int) var_1))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 1029789190)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))));
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_1 [i_0] [(short)6]))))) : (-1088642614159367028LL)));
        }
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (arr_3 [i_2] [i_2 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)-5))))) % (((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))));
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_4] [i_5])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 2])))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
            }
            var_22 = ((/* implicit */long long int) min((var_22), (var_11)));
        }
        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_18 [(unsigned short)9] [i_6] [i_6 + 3]);
                            var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (arr_20 [i_0] [i_6] [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6] [i_9]))) : (-1088642614159367028LL)))) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7] [i_6]))));
                        }
                    } 
                } 
            } 
            arr_23 [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 3] [i_6])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 1] [i_6])))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            arr_32 [i_0] [i_0] [i_10] [i_11] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_10] [i_11] [(_Bool)1])))))));
                            arr_33 [i_0] [i_6] [i_10] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_3) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(unsigned char)19] [i_0]))));
                var_28 = ((/* implicit */long long int) var_10);
                arr_34 [i_0] [10U] [i_0] = ((/* implicit */unsigned char) 1297521772407088651LL);
            }
            var_29 = ((/* implicit */short) (signed char)4);
        }
        for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_41 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
                var_30 = ((/* implicit */int) var_4);
            }
            /* LoopNest 3 */
            for (unsigned int i_15 = 4; i_15 < 21; i_15 += 1) 
            {
                for (int i_16 = 1; i_16 < 20; i_16 += 4) 
                {
                    for (unsigned char i_17 = 2; i_17 < 21; i_17 += 2) 
                    {
                        {
                            arr_49 [i_0] [0U] [i_0] [6ULL] [i_0] = (-(((/* implicit */int) var_2)));
                            arr_50 [i_0] [i_13] [i_13 + 2] [i_15 - 2] [i_16 + 1] [i_17] = ((/* implicit */short) arr_27 [i_0] [i_13 + 2] [i_17 + 1] [i_17 - 2] [i_17] [i_17]);
                            arr_51 [i_0] [i_16] [i_15] [i_13] [i_0] = ((/* implicit */long long int) ((unsigned short) (+(var_0))));
                            var_31 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                            var_32 = ((/* implicit */unsigned int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_17] [i_17] [i_17] [i_17 - 1] [i_17])))));
                        }
                    } 
                } 
            } 
            var_33 = (+(arr_6 [4LL] [i_13 + 1]));
            arr_52 [i_0] [i_0] = ((/* implicit */signed char) var_5);
        }
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    }
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) (signed char)-67)))) ^ (max((var_3), (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) min((var_6), (var_8))))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)228)))), (max((var_0), (((/* implicit */int) (signed char)48))))))));
}
