/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101190
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [(short)11]))));
                var_18 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)43105))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [4] [i_2 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [(signed char)6] [i_2 - 1]))))) : (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) arr_12 [3LL]))))))))));
                    var_20 = ((/* implicit */unsigned short) arr_16 [i_4] [i_3] [i_3] [i_2]);
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) 3497633198097905560ULL)) && (((/* implicit */_Bool) 17730206400683399157ULL)))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1505094223)) ? (3497633198097905540ULL) : (716537673026152438ULL)));
                }
            } 
        } 
    } 
    var_23 = var_10;
}
