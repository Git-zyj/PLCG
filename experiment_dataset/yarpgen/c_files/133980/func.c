/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133980
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
    var_15 += ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) max((arr_1 [i_0]), ((signed char)-113))))))));
        var_17 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) & (((unsigned int) ((long long int) (signed char)(-127 - 1))))));
        arr_4 [i_0] = ((/* implicit */signed char) (short)6391);
        var_18 *= ((/* implicit */unsigned long long int) var_11);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_19 = arr_6 [i_1] [i_1];
        arr_7 [i_1] = ((/* implicit */unsigned long long int) 4294967290U);
        var_20 *= ((/* implicit */unsigned short) ((4294967292U) >= (4294967286U)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) 0U);
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 2083586429))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_22 -= ((/* implicit */int) (_Bool)1);
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_3] [i_5 - 1] [i_6])) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_3] [i_4])) : (3752595251076633238ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_5 + 1] [(unsigned char)16] [i_5 + 2] [5ULL])))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((long long int) (-(12349109130512263477ULL))));
                            arr_25 [2] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 + 3] [i_5 - 2])) && (((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1]))));
                            var_25 = (-(4294967292U));
                        }
                        var_26 -= ((/* implicit */int) 4294967292U);
                        arr_26 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = ((signed char) ((var_7) <= (((/* implicit */int) (unsigned char)30))));
                    }
                } 
            } 
        } 
        arr_27 [i_2] = ((/* implicit */signed char) ((int) (-(arr_19 [i_2] [i_2] [(signed char)2] [i_2] [i_2]))));
        arr_28 [i_2] [i_2] &= ((/* implicit */int) var_4);
        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (4410729381185155971ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12974930801167443334ULL)) && (((/* implicit */_Bool) arr_8 [i_2] [i_2]))))))));
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) min((var_2), (((/* implicit */short) var_6))))))))));
    var_29 += ((/* implicit */int) ((min((((/* implicit */unsigned int) ((signed char) 3752595251076633238ULL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_7)) : (1073739776U))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) max((4410729381185155981ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned long long int) (-(arr_22 [i_8])));
        arr_32 [(unsigned short)6] = ((/* implicit */int) 5U);
        var_30 = ((/* implicit */int) arr_8 [i_8] [i_8]);
        var_31 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 5471813272542108282ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (arr_15 [i_8] [i_8] [i_8] [i_8]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
    }
}
