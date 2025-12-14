/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17550
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
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned short)62503)), (var_11))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) 15198975786710107872ULL)) ? (15198975786710107849ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14758)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)14758))))), (((int) (unsigned short)47377))));
                    var_16 |= ((/* implicit */short) ((1101108174) - (((/* implicit */int) (unsigned short)47377))));
                }
            } 
        } 
    } 
}
