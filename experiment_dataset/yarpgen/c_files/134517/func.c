/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134517
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
    for (int i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = (~(arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = (~(((/* implicit */int) (((~(arr_0 [i_0] [i_0]))) >= (((((/* implicit */_Bool) 2147483647)) ? (-2036961426) : (-2110386103)))))));
                    arr_7 [i_0] [i_1] [i_2] |= ((/* implicit */int) (!(((/* implicit */_Bool) 1282457313))));
                }
            } 
        } 
        arr_8 [i_0] = ((((/* implicit */_Bool) -1350261415)) ? (75773168) : ((-2147483647 - 1)));
        arr_9 [i_0] = 1531201741;
    }
    for (int i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_14 = ((int) -573519729);
        var_15 -= min((1988178962), (((((/* implicit */_Bool) (+(-519747594)))) ? (((/* implicit */int) ((6) < (arr_1 [i_3])))) : (((366205257) << (((32767) - (32765))))))));
        var_16 *= ((int) ((((/* implicit */_Bool) -1531201741)) && (((/* implicit */_Bool) arr_2 [i_3 + 1]))));
    }
    var_17 = -1724054229;
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((var_8) > (((((/* implicit */_Bool) ((var_11) >> (((-1224045735) + (1224045760)))))) ? (((((/* implicit */_Bool) -900007132)) ? (-950811641) : (var_3))) : ((-(13))))))))));
    var_19 = ((((/* implicit */_Bool) 0)) ? (67106816) : (1627558510));
    var_20 = max((var_8), (((((/* implicit */_Bool) (~(var_2)))) ? (((521392257) >> (((-129768136) + (129768153))))) : (max((-1170244979), (-1197884799))))));
}
