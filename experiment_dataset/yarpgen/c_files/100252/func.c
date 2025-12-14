/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100252
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [i_0])))) < (((var_3) - (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                    var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1]))) + (((/* implicit */long long int) var_4))));
                    var_11 = ((/* implicit */unsigned int) (short)-32756);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) var_9);
    var_13 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) var_9)), (min((164774265U), (((/* implicit */unsigned int) var_6)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
}
