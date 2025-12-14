/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174473
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
    var_18 = ((/* implicit */unsigned short) ((var_4) * (max((((/* implicit */unsigned long long int) min(((short)-15306), (((/* implicit */short) var_10))))), (((((/* implicit */_Bool) (short)3427)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    var_19 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)143)))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1]))) : (((((/* implicit */int) arr_5 [i_0 - 3] [i_1])) * (((/* implicit */int) arr_5 [i_0 - 2] [i_1]))))));
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) & (5ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31894)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1225529904852454940ULL)) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_2 [i_1 - 2])))))) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                var_22 += ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_0 - 2])))));
            }
        } 
    } 
}
