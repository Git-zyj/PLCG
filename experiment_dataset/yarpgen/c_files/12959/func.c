/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12959
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4088)) ? (((/* implicit */unsigned long long int) -63333750)) : (((((/* implicit */_Bool) 63333753)) ? (var_0) : (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)25)) : (63333753)))))))) : (min((((/* implicit */long long int) (unsigned char)255)), (min((((/* implicit */long long int) var_5)), (var_1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41337))) % (35024461U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) : ((-(1783949648U)))));
        var_21 = ((/* implicit */unsigned short) var_2);
    }
}
