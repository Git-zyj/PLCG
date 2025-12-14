/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173974
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((var_3) / (-83995079)))) ^ (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) (((_Bool)0) ? (83995079) : (((/* implicit */int) (unsigned short)13752))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (((_Bool)0) ? (-83995079) : (((/* implicit */int) (_Bool)0)))))));
        var_13 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (-(124LL))))))));
        var_14 = ((/* implicit */short) var_9);
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
    }
    var_15 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */short) (signed char)-20)), (var_2))));
    var_16 = ((/* implicit */int) ((124LL) >> ((((-(((/* implicit */int) max((var_5), (var_11)))))) + (44667)))));
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 83995079)), (11205933681344901490ULL)));
}
