/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131989
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
    var_13 = ((((/* implicit */_Bool) ((int) var_1))) ? (min((max((2008310766), (-395753958))), (((395753957) % (-1277199225))))) : (((int) ((((/* implicit */_Bool) -724389942)) ? (var_6) : (var_6)))));
    var_14 -= var_11;
    var_15 &= var_0;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) > (var_7)));
        arr_2 [4] = max((((((/* implicit */_Bool) 1690553711)) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 2063547946))))) : (-1784297326))), (950427847));
        var_17 = min((1936562713), (395753958));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 |= var_7;
                    var_19 = arr_4 [i_0];
                }
            } 
        } 
    }
    var_20 = ((int) 4128768);
}
