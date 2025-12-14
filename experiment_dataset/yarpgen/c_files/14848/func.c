/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14848
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)54872)) != (((/* implicit */int) (_Bool)1))))))))));
    var_17 |= ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (((~(((/* implicit */int) var_8)))) * (((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)0))))))))));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) 2147483647))));
    var_19 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), ((~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
