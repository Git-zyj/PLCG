/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11148
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 5938097818847054167ULL)) && (((/* implicit */_Bool) 971157989)))), (((_Bool) arr_0 [16]))))), (min((((/* implicit */unsigned long long int) arr_4 [i_0])), ((~(5938097818847054160ULL)))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (_Bool)1))));
            }
        } 
    } 
    var_22 ^= ((((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_17)), (12508646254862497469ULL))))) >> ((((((~(17307388517030498252ULL))) << (((((/* implicit */int) (short)23561)) - (23546))))) - (16639620144797679590ULL))));
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_24 = ((/* implicit */int) var_10);
}
