/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121088
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)-3024)), (var_12)));
    var_21 = ((/* implicit */signed char) max((((unsigned int) var_5)), (((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) (unsigned char)210))), ((~(((/* implicit */int) var_9)))))))));
    var_22 = ((/* implicit */unsigned long long int) (-(((unsigned int) min((var_7), (((/* implicit */short) (unsigned char)64)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned short) 2944452347U);
        var_23 = ((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */int) (unsigned char)179)) == (((/* implicit */int) (unsigned char)202)))));
    }
    var_24 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18))));
}
