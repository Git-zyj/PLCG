/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169505
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1]))) == (min((((/* implicit */long long int) (short)32767)), (-5304600226291347574LL)))));
                    var_12 &= ((/* implicit */unsigned int) max((((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)69))))))), (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)69))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [24])))))), (max((127ULL), (((/* implicit */unsigned long long int) var_7))))))) ? (((min((((/* implicit */long long int) (unsigned short)18)), (var_8))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_0 [i_0])) : (var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_3))))))), ((-(min((((/* implicit */long long int) -1476494155)), (var_3)))))));
}
