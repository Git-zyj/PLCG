/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169527
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) + (117)))))));
        var_12 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) var_6)))));
        arr_4 [(unsigned char)11] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned char) var_2)), (arr_0 [i_0]))));
        var_13 &= ((/* implicit */signed char) (+(2233785415175766016ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_1]))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((signed char)122), ((signed char)-96)))) >> ((((-(2137172004470489794LL))) + (2137172004470489810LL)))));
    }
    var_16 = ((/* implicit */unsigned char) var_9);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
}
