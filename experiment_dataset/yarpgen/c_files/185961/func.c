/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185961
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
    var_18 = ((/* implicit */_Bool) var_17);
    var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) var_10))) || (((/* implicit */_Bool) ((int) var_9))))) && (((/* implicit */_Bool) var_17))));
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18805)) >> (((((/* implicit */int) (unsigned char)175)) - (144)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_1])), (var_6)))) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_5 [i_1 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_16)))))))));
                    arr_8 [(_Bool)1] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (min((((unsigned int) arr_3 [2U] [2U])), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)80)))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))), (arr_3 [i_1 - 1] [i_1 - 1])))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((+(max((((/* implicit */long long int) arr_6 [i_0])), (8781212873811585696LL))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) : (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))))))));
                }
            } 
        } 
    } 
}
