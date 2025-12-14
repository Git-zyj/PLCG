/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121429
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
    var_18 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1327496417)) ? (var_9) : (((/* implicit */unsigned long long int) var_15))))));
            var_19 += arr_6 [i_0 - 1];
        }
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 + 1])))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 14865733268383905199ULL))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        arr_20 [i_2] [i_2] [i_4] [i_2] [i_3] [i_4] = 3581010805325646417ULL;
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (3581010805325646388ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3 + 3])) ? (arr_13 [i_3] [i_4]) : (arr_6 [i_5]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            var_23 = (-(arr_2 [i_2]));
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_3 + 2] [i_4] [i_6 - 1] [i_6]))));
                            arr_23 [i_2] [i_3 + 2] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */int) (+(14865733268383905228ULL)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                            arr_27 [i_2] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_3 [i_3 + 3] [i_3 + 1])) : (3581010805325646416ULL)));
                            var_26 *= ((/* implicit */_Bool) ((int) arr_26 [i_3] [i_3] [i_3 + 3]));
                        }
                    }
                } 
            } 
            arr_28 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_3 - 1])))));
        }
        for (signed char i_8 = 4; i_8 < 15; i_8 += 4) 
        {
            arr_31 [i_2] [i_8 - 4] [i_8] = ((/* implicit */int) 3581010805325646427ULL);
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 3581010805325646409ULL))));
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_28 += ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_8 - 4]));
                var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 4095)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_10 [i_2]))))) : (arr_13 [i_9] [i_9])));
            }
        }
        for (unsigned long long int i_10 = 1; i_10 < 16; i_10 += 3) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 0))) ? ((-(4694371145468117425LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            arr_38 [i_2] [i_10] = (~(var_14));
            var_31 = ((/* implicit */short) arr_35 [i_2] [i_10]);
            arr_39 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_10] [i_10] [i_10 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4089)))))) : (arr_37 [i_2] [i_10 - 1] [i_2])));
            arr_40 [i_2] [i_2] [i_10] = ((/* implicit */long long int) -4095);
        }
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+(var_3))))));
    }
    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
    {
        arr_44 [i_11] = ((/* implicit */short) max((((/* implicit */int) arr_36 [i_11])), (-4075)));
        arr_45 [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) 14168865963834581995ULL));
    }
    var_33 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4089)) ? (((/* implicit */long long int) -4095)) : (var_15)))) ? ((+(14865733268383905180ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_2))))))));
}
