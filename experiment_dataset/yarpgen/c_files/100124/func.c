/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100124
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_2 [2ULL] [i_0 + 1] [i_0 + 1])) + (((/* implicit */int) arr_5 [i_0 + 1]))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (!(((-1LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-23748))))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) << (((((-9061900617561760568LL) + (9061900617561760570LL))) - (2LL)))))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (4283773529U)))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) var_14);
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */_Bool) (unsigned char)255);
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+(min((((/* implicit */long long int) (unsigned char)231)), (-7557108066188077909LL))))))));
                                var_21 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) arr_18 [i_3 - 1])) : (arr_4 [i_3 + 1] [i_5 + 3])))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (arr_4 [i_3 - 1] [i_5 - 1]) : (((/* implicit */long long int) arr_18 [i_3 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 + 1] [i_5 - 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), ((+(-9223372036854775806LL)))));
                    var_23 -= ((((max((((/* implicit */long long int) (signed char)-109)), (arr_23 [i_2] [i_7] [4LL]))) | (((/* implicit */long long int) ((/* implicit */int) (short)-23726))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7157611729007438105LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (7964855341694348813LL))))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_2 + 3] [i_10 + 1] [i_8] [i_9] [i_2 - 2]))))) ? ((~(7157611729007438129LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) >> (((((/* implicit */int) (signed char)122)) - (95)))))) ? (((/* implicit */int) arr_19 [i_2] [i_2 + 3] [i_8] [i_10] [i_10 + 2] [i_10 + 2])) : (((/* implicit */int) max((var_8), ((short)-23752))))))))))));
                                var_27 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (_Bool)1))));
    }
    for (unsigned char i_11 = 3; i_11 < 9; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) max((arr_5 [i_11 + 2]), (arr_5 [i_11 - 3])))) + (79))) - (25))))))));
                    var_30 = ((/* implicit */signed char) max((var_30), ((signed char)55)));
                    var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_12]))))) ? (((((/* implicit */long long int) -255234649)) + (7157611729007438105LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_12] [i_11 - 1] [i_11 + 2])))))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((7157611729007438108LL), (((/* implicit */long long int) (signed char)-80)))))));
    }
}
