/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118748
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
    var_16 = ((/* implicit */signed char) var_1);
    var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (signed char)64)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (3821459992U)))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_18 += ((/* implicit */unsigned long long int) var_1);
    var_19 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? ((-(((/* implicit */int) arr_0 [i_1] [i_1])))) : (-536870912)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [17U] [i_1] = ((/* implicit */signed char) 473507304U);
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
                    {
                        var_20 &= ((/* implicit */unsigned int) ((max((((/* implicit */int) ((arr_12 [i_4] [i_3] [i_2]) < (var_8)))), ((((_Bool)1) ? (-1) : (((/* implicit */int) var_12)))))) & (((/* implicit */int) var_11))));
                        var_21 -= ((/* implicit */signed char) arr_12 [i_3 + 1] [i_2] [i_1]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_18 [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) arr_11 [i_3 - 1])), (var_3)))));
                        arr_19 [i_1] = ((/* implicit */unsigned short) (~((+((~(var_9)))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = (+(arr_15 [i_1] [i_1] [i_2] [i_3 + 2] [i_5] [i_5]));
                        var_22 -= ((/* implicit */int) min((((unsigned long long int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)60317)))), (((/* implicit */unsigned long long int) (+((~(var_7))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            arr_27 [i_1] [15U] [11ULL] [15U] [15U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) 473507304U)))));
                            arr_28 [i_7] [i_7] [(signed char)7] [i_3 + 2] [i_3 - 1] [i_2] [8] = ((/* implicit */unsigned short) (~(arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1])));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) + (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_0)))));
                            var_24 = ((/* implicit */_Bool) 4294967295U);
                            var_25 = ((/* implicit */_Bool) arr_5 [i_1]);
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_6 - 1])) < (((((/* implicit */int) arr_17 [i_3])) & (arr_9 [i_3 + 2] [i_1] [i_1])))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 1; i_8 < 18; i_8 += 3) 
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_3] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 3821459992U))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (65536)))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_12 [(signed char)15] [i_2] [(signed char)11]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_13) : (((/* implicit */unsigned long long int) var_9))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                        }
                        for (signed char i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_3))));
                            var_30 &= -65537;
                            var_31 |= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_32 *= var_5;
                    arr_34 [15ULL] [(unsigned short)2] [(unsigned short)6] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)0))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(var_14)))) ? (-1594843815) : ((~(((/* implicit */int) arr_6 [(_Bool)1] [i_10])))))) & (((/* implicit */int) arr_25 [i_1] [i_10] [2U] [(unsigned short)14] [i_1] [i_1]))));
            arr_37 [(_Bool)1] [i_1] [i_10] = ((/* implicit */int) (~(arr_21 [i_10] [(unsigned short)13] [i_1])));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                {
                    var_34 = ((/* implicit */_Bool) arr_5 [i_11]);
                    var_35 = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        var_36 = ((unsigned short) (~(((var_14) & (((/* implicit */int) (unsigned short)10600))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
    {
        arr_46 [(_Bool)1] [i_13] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 473507304U)) ? (arr_15 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */int) (_Bool)1))))) < (var_13));
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned short) arr_15 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
        arr_48 [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_36 [i_13] [i_13] [i_13]))));
    }
}
