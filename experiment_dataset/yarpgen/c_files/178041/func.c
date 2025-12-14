/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178041
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
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)12288), ((short)-25596))))) : (((var_10) + (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_1)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (short)-25599)) : (((/* implicit */int) (unsigned char)117))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) var_17)) + (13915))))));
    }
    var_21 += ((/* implicit */short) (+(((/* implicit */int) var_0))));
    var_22 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)99))))))), ((!(((/* implicit */_Bool) var_17))))));
    var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) var_13)), (var_6)));
}
