/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168948
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
    var_18 ^= ((/* implicit */long long int) var_0);
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((2334434242824072204ULL), (((/* implicit */unsigned long long int) ((int) var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) ^ (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_3] = ((((/* implicit */_Bool) ((arr_3 [i_1]) - (((/* implicit */unsigned int) var_6))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (var_6));
                        arr_13 [i_0] [i_1] [i_1] [i_4] = arr_1 [i_2] [i_4];
                        arr_14 [i_0] [i_0] [i_2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) var_13);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [16] [i_1] [i_3] [i_1] [(unsigned short)6])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_15)))))));
                    }
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)0))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)116))));
                        arr_18 [i_2] [i_3] [i_2] [i_1] [i_1] [i_2] |= ((unsigned char) ((short) -3413012840033964786LL));
                        var_24 += ((/* implicit */short) arr_0 [i_5] [i_3]);
                    }
                    for (int i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        arr_21 [i_3] [i_1] [i_2] [i_2] [i_6] [i_6] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1923206925U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_6 + 2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_14))))) : (((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 3] [i_6]))));
                        var_25 ^= ((/* implicit */unsigned long long int) arr_7 [i_6] [i_1] [i_2] [i_3] [i_6 - 2] [i_2]);
                    }
                    for (int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        arr_24 [i_1] [i_3] [i_3] [i_3] [i_7] [i_2] &= ((/* implicit */signed char) arr_7 [i_0] [i_1] [2LL] [i_0] [i_3] [i_0]);
                        arr_25 [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */short) ((((/* implicit */int) ((short) var_16))) ^ (((/* implicit */int) arr_15 [i_7 - 1] [i_7 - 1] [i_0] [i_7] [i_7]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_22 [i_8] [(short)16] [i_1] [i_8])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))));
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((int) var_16));
                        arr_30 [i_8] [14U] [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) var_13);
                    }
                    for (int i_9 = 2; i_9 < 14; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_3] [i_9] = ((/* implicit */short) var_6);
                        arr_35 [i_0] [0LL] [i_0] [8] [i_2] &= ((/* implicit */unsigned short) ((short) ((unsigned int) var_0)));
                    }
                    for (int i_10 = 2; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_27 -= ((/* implicit */short) (+(((((/* implicit */_Bool) 3191475694U)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                        var_28 += ((/* implicit */short) (unsigned char)240);
                    }
                    for (int i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] [i_1])) ? (((/* implicit */int) var_15)) : (((int) arr_27 [i_0] [i_1] [i_11] [i_11]))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_11 + 1] [i_1] [i_3] [i_11 + 1] [i_3] [i_1] [3ULL])))))));
                    }
                    var_31 ^= ((/* implicit */short) 1030139803U);
                    arr_41 [i_0] [2U] [i_1] [i_3] = 8393593648458753530LL;
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((unsigned int) var_15))));
                    var_32 += ((/* implicit */unsigned char) var_2);
                }
            }
            var_33 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)116)))) ? ((~(-1242100629902454285LL))) : (((/* implicit */long long int) var_11))));
            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (short)3242))))))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_48 [i_13] [(unsigned short)5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140)))))));
            var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_13] [i_13])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : ((-(arr_3 [i_0])))));
        }
        arr_49 [i_0] = ((/* implicit */unsigned char) var_1);
    }
}
