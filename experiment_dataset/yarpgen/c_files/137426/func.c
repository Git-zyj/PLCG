/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137426
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))), (((var_1) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)13)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [17LL])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [(_Bool)1] [i_3 - 1])), (arr_10 [i_0] [7LL] [i_2 - 3] [i_1] [(_Bool)1] [i_3]))))) >> (((((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_3] [i_2] [i_1])), (var_8)))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) - (186U)))));
                        var_13 &= ((/* implicit */long long int) ((short) (~(((arr_6 [(short)12] [(short)12]) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))))));
                        arr_11 [i_0] [i_1] [2U] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_8 [i_3 + 1]) < (((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */int) var_2)))))))), ((-(arr_9 [i_0])))));
                    }
                } 
            } 
            var_14 = ((/* implicit */short) (-((~(arr_5 [i_0] [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                arr_15 [i_0] [(unsigned char)14] [i_0] [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))) & (var_4)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)-12300)))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */int) var_2)) - (((((/* implicit */int) var_8)) >> (((arr_10 [i_0] [i_4 + 2] [i_4] [i_4 - 2] [i_0] [i_4 - 2]) - (2007335075824011760ULL)))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_3))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_4 + 1])), (arr_3 [i_0]))))))))));
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (-(max((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))))));
            }
            for (int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                var_18 = ((/* implicit */_Bool) (+(2256023130807395534ULL)));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_9 [i_0]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) (_Bool)1))))) >= ((-(arr_19 [i_0] [i_0] [i_5] [i_5]))))))));
                arr_21 [i_0] [7U] [i_0] [i_0] = ((/* implicit */long long int) ((max((arr_19 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) ((unsigned char) var_3))))) < ((-(((/* implicit */int) (unsigned short)46781))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) (((((((~(((/* implicit */int) var_7)))) + (2147483647))) << (((var_6) - (129169899))))) != (1242651219)));
                            arr_26 [i_0] [i_1] = ((/* implicit */long long int) (+((-(var_6)))));
                            arr_27 [(signed char)4] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned short)46781))))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_21 -= ((/* implicit */unsigned char) ((short) var_10));
            var_22 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_2)))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) var_8);
                arr_34 [i_0] [i_8] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_9 + 2] [i_9] [i_9])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_9 - 1] [i_9 - 1] [0U])) : (((/* implicit */int) var_3))));
            }
            var_24 = ((/* implicit */unsigned short) (short)-32744);
        }
        var_25 = ((/* implicit */short) ((unsigned char) max((((/* implicit */int) var_3)), (var_6))));
        arr_35 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
    }
    for (int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
    {
        arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54000)) || (((/* implicit */_Bool) var_3)))))))) ? ((+(((/* implicit */int) (unsigned short)54000)))) : (max((((((/* implicit */int) var_7)) + (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_6)))))));
        var_26 = ((/* implicit */unsigned char) ((int) max((14735300464056785767ULL), (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10] [i_10] [i_10 + 1])))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            arr_42 [i_11] [i_11] [i_10 + 1] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_10] [i_10 - 1] [i_10 - 1]))))), ((+(((/* implicit */int) arr_4 [i_10] [i_10 + 1] [i_11]))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25655))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_5))))) : (((((/* implicit */int) (unsigned short)18773)) - (((/* implicit */int) (_Bool)1))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            arr_46 [i_10 - 1] = ((/* implicit */signed char) ((short) arr_29 [i_12 + 1] [i_10 + 1] [i_12]));
            var_28 = arr_43 [(unsigned char)10];
        }
        var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10] [i_10 - 1] [i_10 + 1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(short)13] [i_10 - 1] [i_10 + 1])) || (((/* implicit */_Bool) arr_28 [i_10 - 1] [i_10 - 1] [i_10 + 1]))))))));
    }
    for (int i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) ((signed char) var_0)))))), (((unsigned int) var_2))));
        arr_50 [i_13] = ((/* implicit */short) ((((arr_40 [i_13 - 1]) && (((/* implicit */_Bool) arr_22 [i_13] [i_13 + 1] [i_13 - 1] [i_13])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_13 - 1]))) : (var_1))))));
        var_30 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (14425674191540752327ULL)))));
    }
    var_31 = ((/* implicit */signed char) var_1);
}
