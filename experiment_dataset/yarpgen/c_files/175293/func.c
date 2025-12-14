/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175293
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
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) arr_5 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) 6961382297595975455LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (arr_0 [i_2]))))));
                    arr_6 [(unsigned short)3] [i_2] [i_2 - 3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) arr_4 [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (long long int i_3 = 4; i_3 < 12; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((_Bool) var_12)))) * ((-(((/* implicit */int) arr_8 [i_3] [i_3]))))));
        var_23 = ((/* implicit */unsigned char) arr_7 [i_3] [i_3 + 2]);
        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 - 2])) ? ((~(arr_4 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_10 [i_3] [i_3]) : (arr_7 [i_3] [i_3 + 1]))))))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (((unsigned long long int) -6961382297595975455LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_3] [i_3 + 1] [i_3]), (arr_5 [i_3] [i_3] [i_3 - 4]))))))) : ((~(((unsigned long long int) arr_1 [i_3] [i_3]))))));
    }
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        var_25 = arr_12 [i_4];
        var_26 = arr_12 [i_4 - 1];
    }
}
