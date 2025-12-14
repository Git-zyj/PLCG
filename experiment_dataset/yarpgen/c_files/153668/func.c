/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153668
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-32766))));
        arr_5 [i_0] [i_0] = (-((-(0ULL))));
    }
    var_14 &= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_6)), (18446744073709551612ULL))) - (((/* implicit */unsigned long long int) var_3))));
    var_15 = ((unsigned short) ((((/* implicit */_Bool) min((3978328600U), (((/* implicit */unsigned int) (signed char)-95))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (short)-1))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) max((18112400741859748923ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) % (((/* implicit */int) ((_Bool) ((signed char) 18446744073709551606ULL))))));
    var_17 = (short)12;
}
