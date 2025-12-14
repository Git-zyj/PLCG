/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120602
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
    var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) -8274958295418183167LL)) ? (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16)))))) : ((~((~(((/* implicit */int) var_17))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_2]);
                    var_20 = ((/* implicit */long long int) var_13);
                    var_21 ^= ((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned short)54815)))), ((~(((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_7 [11ULL] [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((min((var_12), (var_12))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-72)))))))))));
    var_23 ^= ((/* implicit */long long int) ((_Bool) (short)-32763));
}
