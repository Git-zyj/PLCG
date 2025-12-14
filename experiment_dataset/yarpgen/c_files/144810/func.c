/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144810
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
    var_12 = -1LL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((var_1) >> ((((~(arr_0 [i_0]))) - (7452772554388428228LL))));
        var_13 = ((((/* implicit */_Bool) ((((-871580472753383460LL) + (9223372036854775807LL))) >> (((9183833453540642200LL) - (9183833453540642169LL)))))) ? (((var_10) + (var_3))) : (arr_0 [i_0]));
    }
    var_14 = ((((/* implicit */_Bool) 9183833453540642191LL)) ? (-9183833453540642200LL) : (-2747161652609606337LL));
    var_15 |= var_1;
}
