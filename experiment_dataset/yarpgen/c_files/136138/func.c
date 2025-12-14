/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136138
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
    var_15 = ((/* implicit */_Bool) ((unsigned char) (!(((17206773544124047052ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
    var_16 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) max((min((var_4), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)24685)) : (((/* implicit */int) var_0))))))) | (var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((_Bool) var_3))), (2498336384818215766ULL))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) (_Bool)1);
    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((-(5783561317501243340ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (((long long int) (+(var_4))))));
}
