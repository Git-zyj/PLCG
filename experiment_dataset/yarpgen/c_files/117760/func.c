/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117760
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)30)) == ((-(var_7))))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))) ? ((~(var_10))) : (min((var_1), (((/* implicit */unsigned int) var_0))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [6U]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (3041965648U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(signed char)10] [(signed char)10] [i_2] [i_0 - 3])))))));
                    var_16 = ((/* implicit */_Bool) (short)9098);
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (min((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) (+((-(var_7)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) 1751931463)) : (16336114410990940652ULL)))));
                    arr_8 [i_0] [i_0 - 2] [i_0] = (-(((/* implicit */int) min((arr_4 [i_0] [(signed char)8] [i_0 - 2]), (arr_4 [i_0] [i_0] [i_0 - 3])))));
                }
            } 
        } 
    } 
}
