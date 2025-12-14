/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134121
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
    var_18 *= ((/* implicit */unsigned long long int) -1541490718341697165LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-643353653585208153LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (unsigned char)240)))))) : ((~(arr_4 [i_1 - 3] [i_1 + 3])))));
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1342969623)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) 1819489697U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24586))) : (-1541490718341697165LL)))));
                var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) var_7)))))))), (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)5198)) && (((/* implicit */_Bool) var_6))))) : ((+(((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
