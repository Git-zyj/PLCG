/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171042
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
    var_19 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_12);
                            var_21 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [(unsigned char)9] [i_0] [i_0] [(unsigned short)24])))) : (((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_13 [i_3] [17U]) : (((/* implicit */int) var_1)))));
                            var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [18LL])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_15)))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */short) (~(((/* implicit */int) (short)14504))));
        }
        /* LoopNest 3 */
        for (unsigned char i_5 = 3; i_5 < 24; i_5 += 2) 
        {
            for (unsigned int i_6 = 3; i_6 < 24; i_6 += 4) 
            {
                for (short i_7 = 3; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_7] [i_6]))))));
                        var_26 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_21 [i_7 + 1] [2] [2] [(unsigned char)22])) ? (((/* implicit */unsigned long long int) var_18)) : (var_4)))));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_27 [17LL] [i_7 - 2] [i_5] [i_5] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)24] [i_6 - 2] [24LL] [i_8])))))));
                            var_28 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) var_17)) ? (arr_12 [i_8] [(unsigned short)0] [(short)10] [(unsigned short)0] [(short)10]) : (((/* implicit */int) var_6))))));
                            var_29 = ((/* implicit */unsigned char) (-((~(arr_12 [i_8] [i_0] [(signed char)1] [i_0] [i_0])))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */_Bool) (-(arr_1 [(unsigned short)12])))) ? (var_13) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)18] [(unsigned char)18]))) : (var_13)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */int) var_15);
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)17952)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)67))))) : (14707488877392770679ULL)));
                        }
                        for (unsigned char i_10 = 1; i_10 < 24; i_10 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10] [i_10] [i_6 - 2] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) var_10)) : (var_15)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_5 + 1] [i_6] [i_0])))))));
                            var_34 = ((/* implicit */short) var_6);
                            arr_33 [i_0] [i_5] [i_5] [i_7] [i_0] = ((/* implicit */int) arr_1 [i_0]);
                        }
                        var_35 -= ((/* implicit */unsigned int) (+(arr_22 [i_0] [i_0] [i_6] [i_6] [i_7 - 3])));
                    }
                } 
            } 
        } 
    }
    var_36 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))), (max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_12))))), (((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */int) var_7))))))));
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((~(var_17))) : (((/* implicit */int) min((var_14), (var_0))))))) : (max((max((3ULL), (((/* implicit */unsigned long long int) 67092480LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14707488877392770679ULL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        arr_36 [i_11] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) (~((-(var_4)))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_22 [i_11] [(unsigned char)24] [i_12] [i_12] [i_12])))) ? ((~(((/* implicit */int) arr_19 [(_Bool)1] [i_12] [i_12] [(_Bool)1])))) : ((~(arr_12 [i_11] [i_11] [i_11] [(short)16] [i_12])))));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_18)))) ? ((-(arr_31 [i_11] [i_11] [i_11] [i_12] [18]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [18])))))));
            var_41 ^= ((/* implicit */short) var_7);
            var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            var_43 = ((/* implicit */short) arr_31 [i_13] [(signed char)9] [i_11] [7] [i_11]);
            var_44 = ((/* implicit */unsigned short) arr_29 [i_11] [i_11] [i_13] [i_13] [i_13]);
        }
        var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [(unsigned char)12] [i_11]))));
    }
}
