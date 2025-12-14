/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128428
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
    var_13 = ((/* implicit */unsigned char) max((9046949730771882621ULL), (9399794342937668995ULL)));
    var_14 -= ((/* implicit */short) var_10);
    var_15 = ((/* implicit */short) ((unsigned char) 9046949730771882621ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23121))) != (9399794342937668995ULL))));
        var_17 = ((/* implicit */unsigned char) min((var_17), ((unsigned char)110)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((int) (short)-26242));
        var_19 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
}
