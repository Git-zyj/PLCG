/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167037
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
    var_13 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */_Bool) -1LL);
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
        var_16 = 3465848402U;
        var_17 = max(((~(max((var_5), (1308139623))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4))))))));
    }
    /* LoopSeq 3 */
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_18 = (+((+(var_9))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_19 = ((/* implicit */int) max((var_19), ((~((-(var_9)))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 - 1])) * (((/* implicit */int) var_8))));
            }
        }
        var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */int) max((arr_9 [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 1]), (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : ((~(((/* implicit */int) arr_3 [i_1 + 1]))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))));
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_9 [i_4] [i_4] [(_Bool)1] [i_4])), (max((((((/* implicit */unsigned int) ((/* implicit */int) (short)28352))) ^ (arr_6 [i_4] [i_4]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_4] [i_4] [i_4])))))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((arr_15 [7] [11] [i_4]) + (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) var_7))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (arr_4 [i_4])));
        }
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                arr_22 [i_7 - 1] [i_6] [(unsigned short)1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 2])))))));
                arr_23 [i_6] [i_6] [i_7] [i_7 - 1] = ((/* implicit */unsigned int) arr_10 [11U] [11U] [i_6] [i_7]);
                arr_24 [i_7] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 144115188075855871ULL))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_16 [i_6] [i_6]))))))));
            }
            arr_25 [i_4] [i_4] [i_6] = ((/* implicit */_Bool) ((max((4216917078U), (var_3))) - (2720431799U)));
        }
        var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_17 [i_8] [i_4] [i_4])))))));
            arr_29 [i_8] [i_4] [i_4] = ((/* implicit */long long int) (short)30560);
            arr_30 [(_Bool)1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_10 [i_4] [i_8] [i_4] [i_4]))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                arr_38 [i_4] [0U] [i_9] [i_4] = ((/* implicit */unsigned int) var_1);
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((536870911ULL) ^ (((/* implicit */unsigned long long int) arr_16 [i_9] [i_9])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_9])))));
            }
            var_29 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_6 [i_9] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_9] [i_4] [i_4])))))) - (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_9])))))));
            var_30 *= ((/* implicit */_Bool) ((unsigned int) var_11));
        }
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
        {
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((arr_43 [i_11] [i_11] [i_11]) ? (var_2) : (((/* implicit */unsigned int) var_9)))))) ? (((arr_43 [8] [i_12 + 3] [i_11]) ? (((((/* implicit */_Bool) arr_39 [i_11])) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_6)))) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (1828171654))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_11])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(arr_40 [i_11])))) % (arr_41 [i_13])));
                arr_49 [i_11] = ((/* implicit */int) var_6);
            }
            arr_50 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_11] [i_11] [i_11])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [(_Bool)1] [i_12] [i_12 + 3] [i_12])) ? (((/* implicit */int) (unsigned short)63865)) : (((/* implicit */int) arr_43 [i_11] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) (short)992)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_11]))) : (arr_45 [i_12] [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned long long int) (-(var_5)))))) : ((-(((((/* implicit */unsigned long long int) arr_41 [i_11])) + (var_10)))))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_11])) ? (var_10) : (((/* implicit */unsigned long long int) ((long long int) arr_39 [i_11])))));
        }
        arr_51 [i_11] = ((/* implicit */_Bool) (-((-(arr_40 [i_11])))));
        var_34 ^= ((/* implicit */int) (-(arr_39 [12LL])));
    }
    /* LoopSeq 1 */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        arr_54 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((arr_48 [i_14] [i_14] [i_14]) == (65535LL))) ? (4222355278685534336LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        arr_55 [i_14 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_11))))))), (((((((/* implicit */_Bool) arr_40 [i_14])) ? (arr_6 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_14]))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
        arr_56 [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 255U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_14 - 1])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_5 [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)127)))))))));
        arr_57 [i_14] [0LL] = ((/* implicit */short) (!(var_6)));
    }
}
