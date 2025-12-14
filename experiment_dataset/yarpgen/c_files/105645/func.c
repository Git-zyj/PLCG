/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105645
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
    var_13 = ((/* implicit */_Bool) var_10);
    var_14 = ((/* implicit */unsigned short) 2395410822U);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [(unsigned short)7] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (max((((/* implicit */unsigned int) var_3)), (arr_1 [i_0])))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) 957818800U)));
        var_15 -= ((/* implicit */unsigned short) max(((~(1899556478U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) (~(3250507005U)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned short)52954))))))) : (min(((~(0U))), (var_11))));
        var_17 = ((_Bool) arr_5 [i_1]);
        var_18 = ((/* implicit */unsigned int) (unsigned short)12581);
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) (_Bool)1))))) ? (((var_6) ? (max((var_7), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)61485))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)59576), ((unsigned short)56627)))))));
    }
}
