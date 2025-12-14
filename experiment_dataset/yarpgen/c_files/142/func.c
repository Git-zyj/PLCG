/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 576460750155939840ULL)) ? (max((10923281425536060161ULL), (576460750155939840ULL))) : (10923281425536060161ULL)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 = max((var_8), (((/* implicit */unsigned char) (((-(7523462648173491450ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172)))))));
        arr_2 [9ULL] = ((/* implicit */short) 17818062825083648343ULL);
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
    {
        var_20 -= ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 7523462648173491450ULL))))), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_14))))))))) : (15088681700066353081ULL));
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) % (var_7)));
        arr_6 [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) >> (((((/* implicit */int) arr_5 [i_1] [i_1])) - (58)))))) % (10923281425536060165ULL))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)23594))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_22 = (~(var_9));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17870283323553611747ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)13796))));
                    var_24 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)127)) >> (((((/* implicit */int) var_8)) - (162)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            var_25 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_8)) >> (((/* implicit */int) (unsigned char)30))))));
            arr_19 [i_5] = 14324640916158138852ULL;
        }
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_15)))) : (((/* implicit */int) ((974910263072899223ULL) == (arr_8 [i_6] [i_6])))))))));
        var_27 = ((/* implicit */short) arr_1 [(short)9]);
        var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))) == (628681248625903273ULL)));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_29 -= ((((/* implicit */_Bool) 17471833810636652393ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_23 [i_8]));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 9; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_31 = arr_30 [i_6] [i_7];
                            var_32 = ((/* implicit */short) arr_29 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10]);
                        }
                        arr_34 [i_6] [(unsigned char)8] [i_8] [i_9] &= ((var_3) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)25089))))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_6])))))));
    }
    var_34 = var_6;
    var_35 = var_13;
    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)36), (var_8)))) ^ (((/* implicit */int) var_15)))) == (max((((((/* implicit */_Bool) (short)-14768)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((10923281425536060150ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29193))))))))));
}
