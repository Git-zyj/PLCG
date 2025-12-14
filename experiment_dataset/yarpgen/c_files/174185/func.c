/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174185
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_6);
                arr_7 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (arr_3 [i_0] [i_0] [17U]))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (min((-2670996062045381638LL), (var_5)))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    var_12 = ((/* implicit */long long int) var_6);
                }
                for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    arr_14 [12U] [i_0] = ((/* implicit */int) min((min((arr_12 [i_3 + 3] [(signed char)13] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 463815931706583419LL)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)32)))), (var_6))))));
                    arr_15 [i_0] [(signed char)5] [(signed char)5] [(signed char)2] = ((/* implicit */unsigned short) ((long long int) (+((+(((/* implicit */int) var_8)))))));
                }
                for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min(((+(134201344U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_4 - 3] [i_4 - 3] [i_4 - 3])) < (((/* implicit */int) arr_23 [i_1] [i_4 - 3]))))))))));
                                var_14 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                                arr_25 [i_0 - 1] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) arr_28 [i_0] [i_0] [(signed char)15] [13ULL]);
                        arr_29 [i_0] = ((/* implicit */short) ((unsigned char) -2670996062045381625LL));
                        arr_30 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_9 [i_0] [i_4] [i_7]))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_4 - 3] [i_7 - 1]))))))) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 3) /* same iter space */
                    {
                        var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (897840338U)));
                    }
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0] [i_0] [(short)8] [i_4] [6] [i_9]))))))))));
                        arr_36 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) var_8);
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                {
                    arr_44 [4] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_10] [i_11] [i_12] [i_11])) ? (-2670996062045381610LL) : (((/* implicit */long long int) 2147483647)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_7)) : (-134217728)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_51 [1] [i_11] [i_11] [i_13] [i_11] [i_13] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) -463815931706583419LL)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)-38))));
                                arr_52 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) (signed char)4))) : (var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_53 [i_10] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_10] [i_10])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (unsigned char)64))));
        var_18 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_10] [(unsigned char)10] [(unsigned char)10] [12LL])) : (-1459036028)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10))))))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
    {
        arr_57 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_15]))))) ? (((((/* implicit */_Bool) arr_55 [i_15])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)25283)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)896)) && (((/* implicit */_Bool) 263110610)))))));
        var_19 = ((/* implicit */unsigned int) arr_56 [i_15] [i_15]);
    }
    var_20 = ((/* implicit */unsigned int) (signed char)118);
}
