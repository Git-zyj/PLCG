/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126134
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (var_2)));
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) max((((/* implicit */int) var_14)), (var_7)));
        var_18 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-15823)), (arr_5 [i_1 - 1]))))) == ((+(13065061940652783450ULL))));
        var_19 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1 + 1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 18; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5])) > (((/* implicit */int) (((!(arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4]))) && (((/* implicit */_Bool) 2126545969)))))));
                            var_21 = ((/* implicit */int) var_3);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((1152123295906386817LL) << (((((/* implicit */int) arr_1 [i_1 + 1])) - (13067)))));
                            var_23 = ((/* implicit */long long int) var_11);
                            var_24 = ((/* implicit */signed char) (-(var_5)));
                        }
                        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_4] [i_4 - 3] [i_4] [i_4 - 2]), (arr_13 [i_4] [i_4 - 3] [i_4 - 3] [i_4 + 1])))) && (((/* implicit */_Bool) max((arr_13 [i_4] [i_4 - 3] [i_4] [(_Bool)1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 - 3] [i_4 - 3] [i_4 - 1]))))))));
                        var_27 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 5381682133056768156ULL)) ? (((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_18 [14] [14] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_12)))) : (max((((/* implicit */int) arr_1 [i_1 - 1])), (313949344)))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_29 = var_10;
        var_30 = ((/* implicit */long long int) (-(max(((+(arr_22 [i_7]))), (((/* implicit */int) arr_21 [i_7] [i_7]))))));
        var_31 = ((/* implicit */unsigned short) var_10);
        var_32 = ((/* implicit */long long int) var_14);
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((max((var_8), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_9] [i_9] [i_9])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_13)))))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_8] [i_8])))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_35 &= ((/* implicit */short) max((((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_8]))))) / (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_10] [(unsigned short)12]))) : (arr_27 [i_8] [i_8] [i_8]))))), (max((arr_27 [i_8] [i_10] [i_8]), (((/* implicit */long long int) arr_23 [i_8]))))));
            var_36 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_11 [i_8] [13U] [i_8])), (max((((((/* implicit */_Bool) arr_8 [(short)14] [(short)12] [8LL])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_10] [i_10] [i_8]))))), (var_1)))));
            var_37 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((11802660631097633299ULL), (((/* implicit */unsigned long long int) arr_19 [i_10] [i_10] [i_8])))))))), ((~(((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8]))))));
            var_38 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_1)) : (max((((/* implicit */unsigned long long int) var_3)), (15700342372405490609ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (+(var_0)))) : (var_1))))));
        }
        var_39 = ((/* implicit */unsigned int) max((((2147483629) << (((var_5) - (2786419039826856259LL))))), (max((((/* implicit */int) var_12)), ((~(arr_22 [(unsigned short)9])))))));
        var_40 = ((/* implicit */long long int) max((var_10), (((/* implicit */unsigned long long int) (signed char)126))));
    }
    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        var_41 = ((/* implicit */unsigned char) ((max((18014398509481983LL), (((/* implicit */long long int) (_Bool)1)))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_11] [i_11])))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7702)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)46203)), ((+(((2147483647U) | (((/* implicit */unsigned int) arr_22 [i_11])))))))))));
    }
    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) -302401539)) ? (((/* implicit */unsigned int) var_7)) : (((max((((/* implicit */unsigned int) (short)3)), (1356328604U))) >> (((max((var_0), (((/* implicit */int) var_3)))) - (1455278683)))))));
}
