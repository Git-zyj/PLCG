/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102930
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (var_11)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1]))));
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0 + 4] [i_0 + 2]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 4086106296U))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(268369920U)));
                    var_16 = ((/* implicit */short) ((unsigned short) (unsigned short)65535));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [i_3] = (unsigned short)65529;
        arr_11 [i_3 - 1] [i_3] = ((/* implicit */short) ((((((/* implicit */int) var_0)) < (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) (~(268369901U))))));
    }
    for (short i_4 = 2; i_4 < 9; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_4 + 1] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [i_4 - 1]), (arr_12 [i_4 + 1]))))) : (((((/* implicit */unsigned long long int) arr_1 [i_4 + 1] [(short)2])) * (72057592964186112ULL)))));
        var_17 = ((/* implicit */signed char) min((arr_8 [i_4]), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) (unsigned short)54053)), (var_6))) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_1 [i_4 + 1] [i_4])) + (4026597359U)))))))));
    }
}
