/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1692
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
    var_14 = ((/* implicit */signed char) ((((min((var_8), (max((((/* implicit */long long int) (signed char)-35)), (2736447920088556274LL))))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)127))), (max((var_1), (var_0))))) - (127ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) 8803185493901546239LL)) % (407008182610093015ULL))))) | (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))))));
                    var_15 &= ((/* implicit */signed char) ((unsigned char) 4294967295U));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_0]))))) % (8803185493901546228LL)));
                }
            } 
        } 
    } 
    var_17 &= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8803185493901546248LL)) ? (10784835853930061158ULL) : (16747433845285578745ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-35))) + (var_8))))));
}
