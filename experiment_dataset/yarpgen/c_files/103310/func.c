/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103310
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)70)))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0 - 1])) ? (arr_1 [i_0] [(signed char)6]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)28)) & (-1140454246))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) max((var_4), (var_5)))))))) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 11597994233407497681ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2]))) : (arr_1 [i_0] [i_0 - 1]))), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                arr_9 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127))));
                var_24 = ((/* implicit */int) var_13);
            }
            var_25 |= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)4]))))), (((arr_8 [1U] [(unsigned short)4]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))))))), (arr_8 [(signed char)6] [i_0 - 1])));
            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                arr_13 [i_1] = var_9;
                var_27 += ((/* implicit */short) 11597994233407497654ULL);
                var_28 = ((/* implicit */unsigned short) 2821506173U);
                arr_14 [i_0 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(max((arr_11 [i_0 + 1] [i_1] [i_3] [i_3 - 2]), (arr_11 [i_0 - 1] [i_1] [i_3 - 2] [i_3 - 2])))));
            }
            for (short i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [(signed char)8] [i_0 - 1]);
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_4 [i_0 - 1] [i_0] [i_0]), (arr_4 [i_4 - 2] [i_1] [i_0])))))))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (signed char)65)), (2817986394403748557ULL))) > (11597994233407497681ULL))))) - ((-(((long long int) (unsigned short)42913))))));
                arr_18 [(unsigned short)1] [(unsigned short)1] [2LL] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
            }
            for (short i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */int) (short)-19175);
                var_33 = max((arr_8 [i_0] [i_5 + 1]), (((/* implicit */unsigned int) var_14)));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            arr_28 [i_6] [i_1] [(_Bool)1] [i_6] [(unsigned short)10] &= min(((+((-(((/* implicit */int) var_14)))))), (((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) arr_25 [i_0] [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1] [i_6] [i_0 - 1])))));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((long long int) (signed char)127)))));
                            arr_29 [i_6] [i_6] [i_0 - 1] [i_6] [(_Bool)1] [i_7] [i_0 + 2] = ((/* implicit */_Bool) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_5 + 1])) && (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_5 + 1])))))));
                        }
                    } 
                } 
            }
            for (short i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
            {
                arr_33 [i_8] [(unsigned char)1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) arr_24 [i_0 - 1] [9U] [i_1] [i_8]))))) && (((/* implicit */_Bool) (short)-11659))));
                var_35 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_8 - 1])) ? (14316513872065052988ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0 + 2] [i_8 - 2]))))));
                arr_34 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_8] [(signed char)9])), (arr_20 [i_0] [i_0] [i_0 - 1] [(unsigned char)7]))) : (((/* implicit */unsigned long long int) arr_8 [i_0 + 2] [i_0 + 2]))))) ? (((((((/* implicit */_Bool) 4130230201644498627ULL)) && (arr_10 [i_8] [i_0] [i_8] [i_8]))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [(signed char)4] [i_8] [i_8] [i_8])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)43638))));
            }
        }
        for (int i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            var_36 += ((/* implicit */unsigned long long int) max((((int) arr_0 [i_0] [i_9])), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9 + 1] [i_9 - 1] [i_0 + 2] [i_9 - 1]))) - (max((max((arr_7 [i_0 + 1] [i_9] [i_10]), (((/* implicit */unsigned long long int) var_0)))), (14609375253057114058ULL))))))));
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(min((arr_22 [i_0] [i_9] [i_10]), (arr_23 [i_0 + 1] [(_Bool)1] [i_10] [(_Bool)1]))))))));
                var_39 = ((/* implicit */unsigned long long int) (+(1820579261U)));
            }
            var_40 |= ((/* implicit */int) ((((/* implicit */_Bool) 3592078666U)) ? (max((4960553061368914094ULL), (((/* implicit */unsigned long long int) (signed char)43)))) : (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)1))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0 + 1] [i_11])) * ((+(((/* implicit */int) (_Bool)0))))));
            var_42 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0 + 2] [6] [i_0 + 2] [i_11])) ? (((/* implicit */int) arr_27 [i_11] [i_11] [i_0 + 2] [i_11])) : (((/* implicit */int) arr_27 [i_0] [i_11] [i_0 + 2] [i_11]))))) ? (((/* implicit */int) ((_Bool) 7792731156468715260LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [8ULL] [i_0 + 1] [i_11])))))));
            var_43 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 163740178)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_0] [i_0] [(unsigned short)9] [i_11]))))) : (arr_32 [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [(unsigned short)9] [i_0 - 1]))) : (((((/* implicit */unsigned int) 2147483647)) | (var_0))));
        }
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_44 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40073)) - (((/* implicit */int) (signed char)-23))))) || (((/* implicit */_Bool) 4294967295U))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_47 [i_13] [i_0 - 1] [i_13] [i_12] = ((/* implicit */unsigned short) arr_27 [i_0] [i_12] [i_13] [i_12]);
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) var_3))));
                var_46 ^= ((/* implicit */unsigned int) 18446744073709551615ULL);
            }
            arr_48 [i_12] = ((/* implicit */signed char) var_9);
            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3696770319U))));
        }
    }
}
