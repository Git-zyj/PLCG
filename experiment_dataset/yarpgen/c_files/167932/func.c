/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167932
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
    var_13 = ((long long int) var_11);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 -= ((/* implicit */short) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) : (max((((arr_2 [i_0] [(signed char)13]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_5))))));
        var_16 = arr_0 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_8 [i_1] [i_1] [(_Bool)1] [i_5]);
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? (arr_10 [i_3 + 2] [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_12))))));
                                var_19 = ((/* implicit */unsigned char) (~(var_12)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 + 2] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_11 [(unsigned short)4] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned short) ((unsigned short) var_5))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 1])) ? (((/* implicit */int) arr_14 [i_1 - 1])) : (((/* implicit */int) arr_14 [i_1 + 2]))));
                                var_23 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_7 + 1] [i_3 + 1] [(unsigned short)21] [i_3 + 1]))) ^ ((-(var_2))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_2] [i_3] [i_2] |= ((/* implicit */short) var_11);
                    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3 + 2] [(_Bool)1] [(unsigned char)9]))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (~((~(((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [(short)9] [(unsigned char)12] [(unsigned char)12] [20U]))))) && (arr_15 [i_1] [i_8 - 1] [i_8 - 1] [i_1 + 4] [i_9] [i_8 - 1])));
                    var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1 + 4])) ? (arr_16 [i_1 + 1] [i_1 + 1] [i_9] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1 + 3] [i_1 + 1] [(short)10])))));
                    arr_29 [i_1 + 2] [i_8] [i_1] [(signed char)2] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_27 [20U] [i_8]))))));
                }
            } 
        } 
        arr_30 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [(short)21] [i_1 - 1] [i_1 + 2]))));
    }
    /* vectorizable */
    for (signed char i_10 = 1; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_26 [i_10] [2LL] [2LL] [i_10])) ? (arr_16 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_9)));
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 20; i_11 += 2) 
        {
            for (unsigned int i_12 = 3; i_12 < 20; i_12 += 2) 
            {
                {
                    arr_41 [i_10] [i_11 + 1] [i_11] [i_11] = ((/* implicit */short) arr_19 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]);
                    arr_42 [i_11] [i_12] = arr_24 [i_10] [15LL] [i_10];
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((((/* implicit */int) var_0)) >= (((/* implicit */int) var_0)))))))));
}
