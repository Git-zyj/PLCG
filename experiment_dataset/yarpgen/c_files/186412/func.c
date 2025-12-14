/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186412
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((unsigned char) var_9)))));
        var_12 &= min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) (short)-18989)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_0)) ? (5945968835564477263LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))), (((/* implicit */long long int) var_9)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((arr_1 [i_0 + 1] [i_0 + 2]) ? (((/* implicit */int) (short)19017)) : (((/* implicit */int) (unsigned char)89)))) >= ((+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 13607624U))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_1] [i_1]));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-18989)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) (short)-24569)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5945968835564477263LL))))), (((/* implicit */long long int) max((arr_10 [i_2] [i_3] [(unsigned char)19]), (arr_10 [i_3] [i_3] [i_2]))))));
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned int) (short)24569);
            }
        } 
    } 
}
