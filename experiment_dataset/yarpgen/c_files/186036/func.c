/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186036
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) min(((unsigned short)1975), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (short)0;
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_0 [i_1] [i_1])))) >= (((((/* implicit */int) arr_1 [i_1])) - (arr_4 [i_1] [i_1]))))) ? ((~(((/* implicit */int) (unsigned char)209)))) : ((~(((/* implicit */int) min((arr_3 [i_1]), (arr_1 [i_1]))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_2])) < (((/* implicit */int) (_Bool)1)))))));
                                arr_17 [i_4] [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_0 [i_1] [i_2])) & (((/* implicit */int) arr_0 [i_5] [i_5])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (short)4095)))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6]))))), ((~(((/* implicit */int) var_3))))));
        arr_22 [i_6] [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (min((((long long int) -5531053732085661857LL)), (((/* implicit */long long int) ((((/* implicit */int) var_17)) % (((/* implicit */int) var_3)))))))));
        var_23 = ((/* implicit */unsigned int) arr_6 [i_6] [i_6]);
    }
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)74)) ^ ((-(((/* implicit */int) (_Bool)0))))));
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [(short)10] [i_7]))));
    }
    var_26 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 9; i_8 += 3) 
    {
        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
        {
            {
                var_27 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)16216), (((/* implicit */unsigned short) (unsigned char)155))))) | (((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 1]))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_8]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8] [i_8 + 3])) + (((/* implicit */int) arr_25 [(_Bool)0])))))))));
                var_28 = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) * (((max((arr_28 [i_8] [i_8] [i_9]), (((/* implicit */unsigned int) arr_27 [i_9] [i_9])))) ^ (((/* implicit */unsigned int) ((-1644059770) - (((/* implicit */int) arr_29 [i_8] [i_9]))))))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_26 [i_9 + 2] [i_9 - 1]), (arr_26 [i_9 - 1] [i_9 + 2])))) + (((int) (!(((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    var_30 = ((/* implicit */short) arr_34 [i_10] [i_10] [i_10]);
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? ((~((-(((/* implicit */int) (unsigned char)206)))))) : (arr_33 [i_10] [i_11])));
                }
            } 
        } 
    } 
}
