/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181206
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = max((min(((+(arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((var_11), ((unsigned short)65535)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)30), (var_10))))))));
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) min(((unsigned short)1), (((/* implicit */unsigned short) ((signed char) (unsigned char)127)))))), (min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1024))));
    }
    var_14 = ((/* implicit */unsigned int) var_3);
    var_15 = ((/* implicit */short) (unsigned short)64514);
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((var_8) << (((((/* implicit */int) (signed char)3)) - (3)))))))), (((long long int) ((6788727153387251726ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20574))))))));
    var_17 = ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (unsigned short)0)));
}
