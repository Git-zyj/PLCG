/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13121
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
    var_11 = ((/* implicit */unsigned char) (unsigned short)0);
    var_12 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)22043)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned short) (unsigned short)65521)))));
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50608)) ? (3128683515614731588LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
    }
}
