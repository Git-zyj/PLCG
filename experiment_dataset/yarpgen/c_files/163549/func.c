/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163549
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
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min(((short)32767), (var_11)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0))))))), (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((long long int) -302547039));
        var_22 = ((/* implicit */unsigned char) ((long long int) (unsigned char)255));
        var_23 = ((/* implicit */unsigned long long int) var_19);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((unsigned short) arr_6 [i_1] [i_1]));
        var_25 += ((/* implicit */short) (-(var_18)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_5))));
        var_27 = ((/* implicit */int) (unsigned short)14894);
        var_28 += ((/* implicit */signed char) var_16);
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_4 [i_2]))));
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_11))));
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_1))));
    var_32 |= ((/* implicit */unsigned char) (((-(-1151985312))) ^ (((/* implicit */int) ((unsigned short) (unsigned char)197)))));
}
