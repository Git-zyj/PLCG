/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175864
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)11383)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)115)) <= (((/* implicit */int) (unsigned char)225)))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_4))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_21 = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20167))) : (3683274870U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11383))) : (var_7)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((~(3089705117U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) ((short) var_18)))));
}
