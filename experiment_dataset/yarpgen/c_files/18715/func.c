/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18715
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
    var_18 = ((/* implicit */unsigned short) ((3999958434378819331ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16622790259689895442ULL)) && ((_Bool)1)));
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(-1725983788)))), ((+(max((arr_0 [i_0]), (arr_0 [i_0 - 1]))))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_10))));
    }
}
