/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150778
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) var_9));
    var_12 |= max((((/* implicit */long long int) 531371445)), (var_3));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((min((-1145769160526841102LL), (((/* implicit */long long int) -531371447)))), (((/* implicit */long long int) ((unsigned short) (unsigned char)20)))));
                arr_4 [i_1] [i_0] = min((531371445), (((/* implicit */int) (short)12268)));
            }
        } 
    } 
}
