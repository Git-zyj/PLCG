/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117707
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
    var_20 = ((/* implicit */unsigned char) var_13);
    var_21 |= ((/* implicit */long long int) var_5);
    var_22 = ((/* implicit */_Bool) 1266151925U);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) -2043059233);
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        arr_4 [i_0] = ((/* implicit */long long int) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
        var_23 = ((/* implicit */unsigned short) ((10ULL) | (18446744073709551605ULL)));
        var_24 = ((/* implicit */long long int) var_10);
        var_25 = ((((/* implicit */_Bool) (short)12356)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)211)) > (11131914)));
                /* LoopNest 2 */
                for (long long int i_4 = 4; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_20 [i_1] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) arr_5 [i_1]);
                            var_27 = ((/* implicit */_Bool) var_11);
                            var_28 = ((/* implicit */unsigned int) (-(var_9)));
                            var_29 = ((/* implicit */_Bool) ((int) arr_13 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4 + 2]));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)511);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) arr_14 [i_1]);
            }
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                var_31 = ((/* implicit */long long int) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                arr_26 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) var_18);
                arr_27 [6LL] [6LL] [i_1] [6LL] = ((/* implicit */unsigned char) 14U);
            }
            arr_28 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)81)) >> (((var_19) - (317409245)))));
        }
        for (int i_7 = 2; i_7 < 12; i_7 += 4) 
        {
            arr_33 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) arr_14 [i_7 - 1])) : (var_8)));
            arr_34 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7 + 2] [i_7 + 1])) ? (arr_11 [i_7 - 1] [i_7 + 1]) : (((/* implicit */long long int) arr_15 [i_7 + 1] [5] [i_7] [i_7] [i_7 + 1] [i_7]))));
            /* LoopSeq 3 */
            for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_7] [i_8 - 1])) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_1] [i_7 + 2] [i_8 - 1])) : (1622460099)));
                arr_38 [i_1] = ((((/* implicit */int) arr_25 [i_8 - 1])) + (((/* implicit */int) arr_25 [i_8 + 1])));
            }
            for (long long int i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                arr_41 [i_1] [i_7] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
                arr_42 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((-11131900) <= (((/* implicit */int) arr_22 [i_9 - 2] [i_1] [i_9] [i_1]))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_45 [i_1] [i_1] = ((/* implicit */int) (unsigned short)65024);
                arr_46 [i_1] [i_1] = ((/* implicit */short) ((((_Bool) 9ULL)) ? (((var_10) * (((/* implicit */int) arr_37 [i_10] [i_1] [i_1])))) : ((+(((/* implicit */int) (signed char)78))))));
            }
        }
    }
}
