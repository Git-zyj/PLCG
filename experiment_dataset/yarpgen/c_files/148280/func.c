/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148280
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), ((-(((unsigned int) (+(var_3))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_19)))) ? (max((((/* implicit */unsigned int) var_17)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) && (((((/* implicit */_Bool) max(((short)-26714), (((/* implicit */short) (unsigned char)217))))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_19)))))))));
        var_22 = ((/* implicit */short) max(((~(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_13)) - (32143))))))), (((/* implicit */int) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_4)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    }
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_15))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))))));
}
