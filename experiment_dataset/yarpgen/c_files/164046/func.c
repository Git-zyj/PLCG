/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164046
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)8160)))) & (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(min((max((((/* implicit */unsigned long long int) (unsigned short)57387)), (var_4))), (((/* implicit */unsigned long long int) (+(var_2))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (+((~(var_11)))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_0)), (4115699045U))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)25)), ((-2147483647 - 1)))))))) ? ((~(3231241281U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (-(min((2147483647), (((/* implicit */int) (_Bool)1))))));
        var_17 -= ((/* implicit */unsigned char) arr_10 [i_2]);
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            arr_18 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_1 [i_4 - 1]))))));
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [7ULL] [i_4]))) & ((~(arr_10 [i_3])))))));
            var_19 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) arr_11 [i_4 - 1])))), (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_11 [i_4 + 1])))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_20 *= var_12;
            arr_23 [i_3] [i_3] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)17140))));
            arr_24 [(short)13] [i_5] [i_5] = ((/* implicit */short) ((signed char) var_5));
        }
        /* vectorizable */
        for (signed char i_6 = 4; i_6 < 14; i_6 += 4) 
        {
            arr_27 [i_6] = ((/* implicit */_Bool) (~(arr_22 [i_6 - 4])));
            arr_28 [i_6] [i_6] = ((/* implicit */short) var_0);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_35 [i_3] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_8] [i_3] [i_3]))))) + (max((((/* implicit */unsigned long long int) ((int) var_8))), (max((arr_22 [i_3]), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_8]))))))));
                    arr_36 [i_3] = ((/* implicit */signed char) min((2LL), (((/* implicit */long long int) (unsigned short)23993))));
                    arr_37 [i_3] [i_7] [i_3] [i_7] = ((/* implicit */signed char) (+(var_0)));
                }
            } 
        } 
        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [12LL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3])))))))));
        var_22 += min((((/* implicit */int) var_6)), (max((((2147483647) & (((/* implicit */int) var_1)))), (((/* implicit */int) arr_17 [5ULL] [5ULL])))));
    }
    var_23 = ((/* implicit */unsigned short) (+(max(((~(var_10))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)41543)))))))));
    var_24 = ((/* implicit */long long int) (-(min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23999))) == (3464969299132752269LL)))), ((+(((/* implicit */int) (unsigned char)15))))))));
    var_25 = (+(min((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))));
}
