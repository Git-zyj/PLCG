/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102488
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
    var_11 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */signed char) (~(39021950U)));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (+((((-2147483647 - 1)) & ((~(((/* implicit */int) var_1))))))));
                    var_13 -= ((/* implicit */unsigned char) max((max(((-(arr_1 [i_0]))), (((unsigned long long int) 4255945338U)))), ((((!(((/* implicit */_Bool) var_2)))) ? (max((17280978055318292198ULL), (16389403419625483711ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))));
                    var_14 += ((/* implicit */unsigned int) max((16389403419625483737ULL), (((/* implicit */unsigned long long int) (unsigned char)68))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */_Bool) (~(((max((var_8), (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))))));
}
