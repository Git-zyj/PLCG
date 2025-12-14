/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115373
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] = arr_3 [i_0 - 1] [i_0 + 1];
        arr_5 [i_0 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_11)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_2)))));
        arr_9 [i_1 + 1] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 513085657)) ? (15456196346395027519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523)))));
        arr_10 [i_1 + 1] = ((/* implicit */unsigned long long int) (unsigned char)130);
        arr_11 [i_1 + 2] = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)25)) * ((-(((/* implicit */int) arr_7 [i_1 - 1]))))))));
        arr_12 [i_1] = var_9;
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_16 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-23247)) ? (((/* implicit */long long int) ((int) arr_15 [i_2] [i_2]))) : ((((!(((/* implicit */_Bool) arr_14 [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_15 [i_2] [i_2])) : (var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)42976)))))))));
        arr_17 [i_2] = ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned short)65493)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))) ? (var_9) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) != (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9))))))));
    }
    for (int i_3 = 4; i_3 < 8; i_3 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_23 [i_3 - 3] [i_4] = ((/* implicit */unsigned long long int) ((int) (unsigned short)4));
            arr_24 [i_3 + 2] [i_4] = ((((/* implicit */_Bool) (~(9223372036854775794LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4957012236583813308ULL)))) : (arr_18 [i_3 - 1] [i_3 + 1]));
        }
        for (int i_5 = 4; i_5 < 7; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_29 [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((unsigned long long int) arr_2 [i_5 - 4])), (((/* implicit */unsigned long long int) ((arr_2 [i_5 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))))));
                arr_30 [i_3] [i_5 + 3] [i_5] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_13 [i_3 - 4]))) + (((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) var_7)))))))), (((arr_21 [i_3 - 2] [i_5 - 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 4])))))));
            }
            /* vectorizable */
            for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
            {
                arr_35 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) var_4)))))));
                arr_36 [i_3] [i_5 - 3] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4294967287U)))) ? (arr_13 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))));
                arr_37 [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) % (((((/* implicit */_Bool) arr_18 [i_5] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        {
                            arr_43 [i_3] [i_5] [i_7] [i_3] [(short)2] = ((/* implicit */signed char) var_3);
                            arr_44 [i_5] = ((/* implicit */_Bool) (unsigned short)32);
                            arr_45 [i_9] [i_5 - 2] [i_5] [i_5 + 3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52096)) ? (1368806740U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22564)))));
                            arr_46 [i_3] [i_9] [i_7 - 1] [i_9 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) ((short) arr_28 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                        }
                    } 
                } 
                arr_47 [i_5] [i_5] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)30))));
            }
            arr_48 [i_5] [i_5] [i_5 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) -9223372036854775806LL))) > (((/* implicit */int) arr_34 [i_3]))))) : (((/* implicit */int) ((unsigned short) (-(var_8)))))));
            arr_49 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (-406081262) : (-1153018503)))) / ((+(arr_13 [i_3])))));
        }
        arr_50 [i_3] = var_3;
        arr_51 [i_3] = ((/* implicit */long long int) 3418487167U);
        arr_52 [i_3 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 16495019636833421015ULL)))) ? (((long long int) (short)32748)) : (var_8)))) ? (((/* implicit */int) ((unsigned short) (!(var_13))))) : (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)18644))))))));
    }
    var_14 = (+((~((+(((/* implicit */int) (unsigned char)215)))))));
}
