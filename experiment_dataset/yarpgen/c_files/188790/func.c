/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188790
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((int) 9223372036854775807LL);
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)60))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 67076096)) : (arr_12 [i_4] [i_1] [i_1] [i_1])))));
                        arr_17 [i_2] [i_2] = ((/* implicit */unsigned char) ((((unsigned int) arr_11 [0LL] [i_2] [i_3] [i_4])) > ((+(var_3)))));
                    }
                } 
            } 
            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((int) max((arr_12 [i_1] [6U] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [1LL]))))));
        }
        for (unsigned short i_5 = 4; i_5 < 12; i_5 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_29 [i_1] = 67076096;
                            arr_30 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_8] [i_7] [i_5] [i_5])), (max((((/* implicit */unsigned short) var_15)), ((unsigned short)32091))))))));
                            arr_31 [i_1] [(short)6] [i_6] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */int) min((arr_9 [i_1] [i_5 - 2] [i_6]), (arr_9 [i_1] [i_7] [i_6])))), ((+(((/* implicit */int) arr_9 [i_5 - 4] [i_5] [i_6]))))));
                            arr_32 [i_5] [i_7] [i_6] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))) * (max((((/* implicit */long long int) (signed char)-62)), (((long long int) 1220537781755721544ULL))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                for (signed char i_10 = 4; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                    {
                        {
                            arr_41 [i_1] [i_5] [i_1] [i_5] [i_11] [i_1] = ((/* implicit */_Bool) -67076097);
                            arr_42 [i_1] [i_5] [(signed char)10] [i_9] [i_9] [i_10] [i_10] = ((/* implicit */short) arr_28 [i_1] [i_1] [i_1] [i_9] [i_1] [i_11]);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_12 = 4; i_12 < 12; i_12 += 3) /* same iter space */
        {
            arr_46 [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
            arr_47 [i_12] [i_1] [i_12] = ((/* implicit */unsigned short) ((unsigned char) var_11));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                for (long long int i_14 = 3; i_14 < 14; i_14 += 2) 
                {
                    {
                        arr_53 [i_14] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)-10527);
                        arr_54 [i_13] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) + (arr_50 [i_14] [i_14 + 1] [i_12 - 3] [i_1])));
                    }
                } 
            } 
            arr_55 [i_1] [i_1] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_1] [i_1])) ? (((/* implicit */int) arr_40 [i_1] [6] [i_12] [10] [i_1] [i_1])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (arr_51 [i_1] [i_1])));
            arr_56 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)34))))) % (((arr_50 [i_1] [i_1] [i_1] [i_12 - 3]) + (((/* implicit */unsigned int) arr_28 [9LL] [i_1] [i_12 + 1] [i_12] [9LL] [i_1]))))));
        }
        for (unsigned short i_15 = 4; i_15 < 12; i_15 += 3) /* same iter space */
        {
            arr_60 [(unsigned short)14] = max((((var_14) - ((~(((/* implicit */int) arr_9 [i_1] [i_15 - 3] [(unsigned char)12])))))), (((/* implicit */int) arr_52 [i_15 + 1] [5U] [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15])));
            arr_61 [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)63);
            arr_62 [i_15 + 3] [0U] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (532407189U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) - (max((arr_12 [i_15] [i_1] [i_1] [i_15]), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (-67076096))))));
            arr_63 [i_1] [(unsigned char)6] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-116)) + (119))))));
        }
        arr_64 [i_1] = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1] [i_1]);
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 4) 
    {
        arr_69 [i_16] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_15)), (arr_68 [i_16] [i_16])));
        arr_70 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >> (((max((max((var_14), (((/* implicit */int) var_7)))), (((/* implicit */int) var_2)))) - (161)))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) -336460814))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18096073096221949261ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4)))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48826)) >> (((var_3) - (3184690880U))))))))));
    var_17 = ((/* implicit */signed char) var_9);
}
