/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166844
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) (!(var_7)))) <= (((/* implicit */int) (unsigned short)15617)))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(max((((/* implicit */int) ((unsigned char) (unsigned char)0))), (((arr_3 [i_1]) ^ (((/* implicit */int) (unsigned short)49902))))))));
                arr_9 [i_0] &= ((/* implicit */_Bool) var_6);
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((~(var_8))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((var_3), (((/* implicit */unsigned long long int) (unsigned short)8344)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))));
                var_12 ^= ((/* implicit */unsigned char) (-(arr_1 [i_0 - 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((/* implicit */int) ((short) min(((short)5283), (((/* implicit */short) (unsigned char)127)))))))))));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (2147483647)));
}
