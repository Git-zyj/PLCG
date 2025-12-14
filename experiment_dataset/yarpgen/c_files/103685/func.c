/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103685
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_1])), (((((/* implicit */_Bool) ((long long int) 899977618U))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1240344503537500699LL)) ? (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1]) : (((/* implicit */long long int) arr_5 [i_0 - 2])))) : (((/* implicit */long long int) 1100749998U)))))));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
    }
    for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] &= min((1100749998U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1100749998U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2 - 3]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [9]))))))))));
    }
    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 126384999))));
        var_20 = -5550284956871347275LL;
        var_21 += ((((((/* implicit */_Bool) -5550284956871347275LL)) ? (5550284956871347274LL) : (2804007897877721569LL))) % (((/* implicit */long long int) var_13)));
    }
    var_22 = (unsigned char)145;
    var_23 -= var_7;
}
