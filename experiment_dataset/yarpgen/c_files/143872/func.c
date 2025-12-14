/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143872
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (364133691U)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_16 += ((/* implicit */unsigned char) var_4);
                        var_17 *= (!(((((/* implicit */unsigned long long int) 4194304U)) <= (1079991549600226031ULL))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4290772991U)) && (((/* implicit */_Bool) arr_9 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4194304U))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((arr_20 [i_4] [i_4] [i_7 - 2] [i_7 - 2] [i_8 - 1]) > (((/* implicit */long long int) arr_1 [i_7 - 1] [i_8 + 3])))))));
                                var_21 = ((/* implicit */signed char) ((2002377213) % (((/* implicit */int) (signed char)-22))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((1125899906842623ULL) * (arr_13 [i_6])));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) & (364133691U)))))))));
                }
            } 
        } 
        arr_22 [23LL] [23LL] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> ((((~(((/* implicit */int) (signed char)-34)))) - (8)))));
        var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7566841535840091672ULL)) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) : ((+(((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_15 [i_4] [i_4] [i_9])) | (((/* implicit */int) arr_9 [(_Bool)1]))))));
            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_9] [i_9] [i_4]))) - (arr_13 [i_4])));
        }
    }
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)92)))) <= (((/* implicit */int) ((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) == (((-1) * (((/* implicit */int) (unsigned char)228))))))))))));
    var_28 *= ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        for (signed char i_11 = 2; i_11 < 19; i_11 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_29 &= ((/* implicit */short) ((4290772966U) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_12])) * (((/* implicit */int) arr_28 [i_11])))))));
                    var_30 = ((/* implicit */signed char) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_11 - 2] [i_10] [i_11])))));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_12 [i_12]))));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 19; i_13 += 1) 
                    {
                        for (signed char i_14 = 1; i_14 < 18; i_14 += 1) 
                        {
                            {
                                var_32 *= ((/* implicit */long long int) (!(arr_36 [i_14 + 3] [i_14 + 2] [i_13 - 1] [i_11 - 1] [i_11 - 1])));
                                var_33 += ((/* implicit */signed char) (~(9223372036854775807LL)));
                                var_34 *= ((/* implicit */signed char) (~(var_13)));
                                var_35 = ((/* implicit */_Bool) max((var_35), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65515)) % (((/* implicit */int) arr_24 [6U])))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_15 = 3; i_15 < 20; i_15 += 2) 
                {
                    arr_42 [(unsigned short)2] [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_11 + 1] [24] [i_15 - 3] [i_15 - 2])) < (arr_14 [i_11 - 1] [i_11 + 2] [i_15 + 1])));
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))))) * (arr_27 [i_10])));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-30)) || (((/* implicit */_Bool) 2002377211))))) | (((/* implicit */int) (signed char)-30))));
                    var_38 = ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_15 - 3] [i_11 + 1] [i_11 + 1])))));
                }
                var_39 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3100))) * (1125899906842623ULL));
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max((arr_10 [i_10] [i_11 + 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_11 - 1] [i_11 + 1])) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30)))))))))))));
            }
        } 
    } 
}
