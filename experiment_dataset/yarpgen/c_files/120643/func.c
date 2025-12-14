/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120643
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (unsigned short)54611);
                arr_6 [i_0] [i_0] = (!(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (arr_1 [i_1]))) != ((~(arr_1 [(unsigned short)4]))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)25901), (((/* implicit */short) (unsigned char)228))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (signed char)-94))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (2047ULL))) : (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_5)))) | (((/* implicit */int) min(((unsigned short)65532), (((/* implicit */unsigned short) var_10))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_6)))) >> ((((+(var_0))) - (14897373729726174613ULL))))));
}
