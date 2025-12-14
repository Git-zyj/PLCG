/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164638
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_15 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (min((var_10), (-839901799)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        var_16 |= ((/* implicit */unsigned short) min((2199023190016LL), (((/* implicit */long long int) (unsigned short)44648))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((-839901799), (((/* implicit */int) (unsigned short)16383))))), (-2199023190017LL)));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_6 [i_1 + 1] [i_2 + 2]))) << ((((+(var_1))) - (6854675509996835395ULL)))));
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((2199023190021LL) & (((/* implicit */long long int) 23)))))));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_9) & (arr_2 [i_3] [i_3])))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 2199023190024LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2055348002U)));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(var_11))))));
}
