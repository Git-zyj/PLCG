/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136988
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) arr_5 [i_2] [11ULL]);
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)101)) >= (0))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_3] [i_3] [12U]))))) : (((((/* implicit */_Bool) 306673452)) ? (arr_1 [i_4]) : (3279391069486764025LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (var_5)))))));
                                var_23 = ((/* implicit */unsigned int) (_Bool)1);
                                arr_13 [i_0] [i_0] [i_4] = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) -1LL))))), (((unsigned short) max((((/* implicit */int) arr_0 [i_3] [i_0])), (2025021752)))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                            {
                                var_24 = ((/* implicit */signed char) ((((unsigned int) arr_16 [13] [(unsigned char)13] [(unsigned char)13] [(_Bool)1] [i_5] [i_3])) <= (((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_6 [i_0] [i_0 - 1] [i_3 - 1] [i_3 + 1]))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
                            {
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) + (142)))))))));
                                var_27 = ((/* implicit */unsigned char) var_8);
                                var_28 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) ((unsigned int) -3279391069486764025LL))) <= (((((/* implicit */_Bool) -1751798369)) ? (((/* implicit */unsigned long long int) arr_2 [11U] [i_1])) : (var_4)))))));
                            }
                            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 3) /* same iter space */
                            {
                                arr_24 [i_1] [i_0] = ((/* implicit */unsigned short) var_15);
                                var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((signed char) arr_12 [10LL] [i_0] [i_2] [i_2] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) -3279391069486764026LL)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)7785)), ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 17; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */int) (signed char)26);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                            {
                                arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */long long int) var_12)) : (arr_36 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                                var_32 = ((/* implicit */unsigned int) (short)0);
                                var_33 &= ((unsigned short) var_15);
                            }
                        }
                    } 
                } 
                var_34 = ((((((/* implicit */_Bool) var_5)) && (var_11))) ? (((((/* implicit */_Bool) max(((unsigned short)52843), (((/* implicit */unsigned short) arr_28 [i_8]))))) ? (((1270552558U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(_Bool)1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)749)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (unsigned short)1265))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) arr_30 [i_8] [i_8] [i_9])) & (arr_33 [(_Bool)1] [i_9]))) >= (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)42091)))))))));
            }
        } 
    } 
}
