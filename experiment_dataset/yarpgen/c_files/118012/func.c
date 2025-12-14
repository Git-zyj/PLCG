/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118012
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-24004))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)186))))) : (min((var_10), (((/* implicit */unsigned long long int) var_0)))))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_11))), (((var_6) + (((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */unsigned long long int) (~(1586237420)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) var_6);
        arr_2 [i_0] = max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 10944421703610654216ULL)))) : (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((long long int) var_6));
        var_15 = ((/* implicit */unsigned char) var_6);
    }
}
