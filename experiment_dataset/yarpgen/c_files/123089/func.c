/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123089
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))))))))));
    var_18 = ((/* implicit */long long int) ((int) (+((+(((/* implicit */int) (signed char)(-127 - 1))))))));
    var_19 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) ((signed char) (signed char)-116)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) -3532758920523602637LL)))));
        arr_4 [i_0] = ((_Bool) ((unsigned int) -1994815484));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) ((_Bool) arr_0 [15LL]))))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) ((signed char) (signed char)-110))));
    }
    for (short i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((int) (+(((/* implicit */int) (signed char)109))))))))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_11 [i_2] [i_2]))))))));
        var_22 -= ((/* implicit */long long int) (+((~(((unsigned int) 4247927700972704597LL))))));
        arr_14 [i_2] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) ((short) arr_0 [i_2]))))));
        arr_15 [i_2] = ((/* implicit */unsigned short) ((int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [(unsigned short)0]))))));
    }
}
