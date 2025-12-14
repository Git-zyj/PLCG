/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138443
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
    var_10 += ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16514529035370414471ULL))));
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)248)) >= (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_2))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33903))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)63124)))) : ((-(var_4))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = var_2;
                    var_13 -= ((/* implicit */long long int) arr_7 [i_2]);
                    var_14 = ((/* implicit */signed char) arr_3 [i_0 + 1] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
