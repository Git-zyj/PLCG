/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102437
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
    var_16 = ((/* implicit */int) ((((((((/* implicit */_Bool) -1855830192)) ? (((/* implicit */int) (short)20099)) : (((/* implicit */int) var_3)))) == (((((/* implicit */_Bool) -1855830184)) ? (((/* implicit */int) (unsigned short)65535)) : (0))))) ? ((~(((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
                var_18 &= ((/* implicit */int) (unsigned char)149);
                var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((((/* implicit */int) var_7)) % (arr_2 [i_0] [11])))))));
                var_20 *= ((/* implicit */unsigned long long int) var_0);
                var_21 = (~(arr_1 [i_1]));
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) + (var_2)));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_7)), ((~((~(var_13))))))))));
}
