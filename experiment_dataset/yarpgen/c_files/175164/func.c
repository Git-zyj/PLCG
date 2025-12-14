/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175164
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */short) var_0);
        var_11 = (signed char)3;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) (signed char)-23)) & (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) var_3)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (signed char)63))))))))));
    }
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) (signed char)-64))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-61)) || (((/* implicit */_Bool) (signed char)45)))))))));
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))), (max((min((var_2), (var_8))), (834803016U)))));
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-63))))) ? (var_8) : (var_1))), (((/* implicit */unsigned int) ((signed char) 4294967292U)))));
}
