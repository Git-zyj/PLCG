/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148581
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
    var_17 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 17636437673855590674ULL)))) ^ (((unsigned long long int) max((16479419127171457749ULL), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 -= (~(arr_1 [i_0]));
        var_19 += var_4;
        var_20 += ((/* implicit */_Bool) ((((unsigned int) arr_0 [i_0])) << (((var_13) - (4188069875849975556ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(-2335371414380482603LL)));
    }
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((var_7) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-1LL) : (var_5))))))), (((((/* implicit */_Bool) ((var_8) ? (var_1) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (var_0))))) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) var_6))))))));
    var_22 &= ((/* implicit */signed char) var_10);
    var_23 = ((/* implicit */_Bool) ((unsigned long long int) 1612008013892566304ULL));
}
