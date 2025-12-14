/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1803
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
    var_18 = ((/* implicit */short) (unsigned short)1099);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = (-(((((((/* implicit */_Bool) 4294967275U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55150))))) << (((((/* implicit */int) (unsigned short)64424)) - (64397))))));
                var_19 = ((/* implicit */_Bool) ((long long int) min(((unsigned short)1137), (((/* implicit */unsigned short) (unsigned char)15)))));
                var_20 = ((/* implicit */int) var_3);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) var_0))), ((~(((((/* implicit */_Bool) var_15)) ? (5518911987065160152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned char) var_4)), (var_6)))) ? (((/* implicit */int) (unsigned char)255)) : (max((((/* implicit */int) var_10)), (-1)))));
}
