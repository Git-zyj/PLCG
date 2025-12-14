/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1513
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
    var_16 -= ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) * (((unsigned int) 220001910U)))), (((/* implicit */unsigned int) var_8))));
    var_17 = ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (var_5) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) 6224931065751628952ULL);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14421458478647284283ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 13086420845380805046ULL))), ((unsigned short)40302)))) : (((/* implicit */int) ((1761842117U) >= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
    }
}
