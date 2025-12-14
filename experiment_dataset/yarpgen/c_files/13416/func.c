/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13416
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
    var_10 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -7593928951571850231LL)) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33439))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)0))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1]);
                var_12 = (short)-25977;
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (-(arr_7 [i_0] [i_0]))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned short) 15818434289776425874ULL)))));
                var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))))));
            }
            for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)25976)))))));
                arr_11 [i_0] [1ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(1939385382U)));
                var_17 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                var_18 &= ((/* implicit */signed char) ((unsigned short) var_5));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)26000)))))));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_20 ^= (((!(arr_10 [i_0] [i_5] [i_6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25996)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) var_3)))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19445))) : (10777604972712999094ULL))));
                        arr_23 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) (short)10029);
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                var_22 += ((/* implicit */unsigned short) ((signed char) var_7));
                var_23 ^= ((/* implicit */unsigned int) (-(arr_2 [i_9 - 1])));
            }
            for (int i_10 = 2; i_10 < 16; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 4; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_24 &= ((((/* implicit */_Bool) (unsigned char)116)) ? (arr_34 [i_12] [(unsigned short)6] [i_12 - 4] [i_12 - 1] [(unsigned short)6] [i_12]) : (arr_34 [i_12] [i_12] [i_12 - 4] [i_12 - 1] [i_12] [i_12]));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(0U))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 6U))));
                        }
                    } 
                } 
                arr_36 [(short)4] [i_8] [i_8] [i_0] |= ((/* implicit */signed char) 6U);
                var_27 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) 1705596390U)))) ? (((/* implicit */int) var_3)) : (arr_5 [i_0] [i_10 - 2])));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((long long int) var_1)))));
                var_29 -= ((/* implicit */unsigned char) 3345245918U);
            }
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_4 [i_8] [i_8] [i_8]))));
            arr_37 [i_0] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (-(arr_1 [i_0])));
        }
        var_31 += ((/* implicit */unsigned short) (signed char)-1);
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned char) ((unsigned long long int) var_8))))));
                        var_33 = ((/* implicit */short) 1073479680U);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_17 = 1; i_17 < 16; i_17 += 3) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) 1911321641)))))));
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) arr_9 [i_13] [i_17 + 1] [i_17 - 1] [i_17 + 1]))));
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            arr_55 [4ULL] = ((/* implicit */int) arr_33 [i_13] [i_13] [(_Bool)1] [i_13]);
            var_36 = ((/* implicit */signed char) arr_20 [i_13] [i_13] [i_13] [i_18]);
        }
    }
    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_9))));
    var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (short i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        arr_59 [i_19] = ((/* implicit */signed char) ((unsigned int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_19] [9U]))))));
        arr_60 [i_19] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) arr_12 [i_19])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)25986)) && (((/* implicit */_Bool) (short)26020))))) : (((/* implicit */int) ((short) 19U)))));
        arr_61 [i_19] = ((((((/* implicit */int) arr_41 [10] [(unsigned short)8])) + (2147483647))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32773))) - (5))));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            for (unsigned int i_21 = 0; i_21 < 17; i_21 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 4; i_22 < 16; i_22 += 2) 
                    {
                        for (short i_23 = 0; i_23 < 17; i_23 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned short) (signed char)1);
                                var_40 -= (((!(((/* implicit */_Bool) 15559447917245605248ULL)))) ? (arr_17 [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (unsigned short)31917)))))));
                                var_41 = (-((+(arr_34 [i_22 + 1] [i_22] [i_22] [i_22] [i_22 - 4] [i_22]))));
                                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-6815684450232247898LL) : (((/* implicit */long long int) 1145291732)))))));
                            }
                        } 
                    } 
                    arr_74 [i_19] [6] [i_19] &= ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) var_4)));
                }
            } 
        } 
    }
}
