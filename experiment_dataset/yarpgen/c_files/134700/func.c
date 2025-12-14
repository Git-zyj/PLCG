/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134700
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
    var_17 += ((/* implicit */short) 1365652741180714113ULL);
    var_18 = ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 - 1]))))) ^ (var_0)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) var_14);
                    var_21 = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]);
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned char)19])) << (((var_15) - (2576964985U)))))), (14525842747162417443ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
                    var_23 = ((/* implicit */unsigned int) (+((+((-(18446744073709551615ULL)))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) min((1ULL), (3964877356209455554ULL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(var_7)))) - (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_9 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1818258632)) ? (3964877356209455554ULL) : (18446744073709551615ULL)));
        var_26 = ((/* implicit */unsigned char) ((arr_8 [i_3]) * (arr_8 [i_3])));
        var_27 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_3] [i_3])) <= (((/* implicit */int) var_4))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned int) (short)5021);
        var_28 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)181)) < (((/* implicit */int) (signed char)127))))), (arr_13 [i_4] [i_4])));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */_Bool) max((((((arr_18 [i_4] [i_4] [i_4] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(short)5] [i_5] [i_5] [i_4]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)181)) + (((/* implicit */int) (short)-26825))))))), (((/* implicit */unsigned long long int) arr_15 [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned long long int) ((int) arr_17 [i_4] [i_5]));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] = ((/* implicit */unsigned char) 16100315192444734497ULL);
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (~(((/* implicit */int) ((short) ((_Bool) (unsigned char)181)))))))));
                            var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_7] [i_8]))) != (3964877356209455554ULL)))))))));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((var_13) - (1241092220)))))), ((+(arr_15 [i_6]))))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min(((-(((/* implicit */int) var_1)))), (arr_19 [i_5] [i_4] [i_5]))))));
                    }
                    var_34 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_9)) + (51)))));
                }
            } 
        } 
        arr_32 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14)) << (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) + (1306020287147138391LL)))))) <= (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15)))));
    }
    for (int i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_36 [i_10] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)116)))))))), ((~(18446744073709551615ULL))));
        arr_37 [i_10] [i_10] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
    }
}
