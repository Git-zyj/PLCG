/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156991
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_3 [i_0 + 2] [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_13 [i_2] [10U] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) arr_9 [i_3] [i_1] [i_1])))));
                        var_13 = ((arr_10 [1LL] [7ULL] [7ULL]) / (((/* implicit */int) arr_6 [i_1 - 1])));
                        var_14 = ((/* implicit */_Bool) (-(6569513648952530421LL)));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 2]))));
                        var_16 = ((/* implicit */unsigned char) -3809383360111154927LL);
                    }
                } 
            } 
        } 
        var_17 = ((int) arr_8 [i_1 + 2] [i_1 + 2]);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 2] [i_1 + 1])) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
        arr_14 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)240)) << (((1740687708934779655ULL) - (1740687708934779633ULL)))));
    }
    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (2729199750U))))))));
}
