/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173730
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((835921757), (835921757)))) ? (44401634) : (((/* implicit */int) ((((/* implicit */int) (short)14396)) == (835921757)))))), (max((((((/* implicit */_Bool) arr_6 [i_0] [3LL] [3LL])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (signed char)-108))))));
                    var_19 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2]))))));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned char)0))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (signed char)42)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1087722000U)))) : ((-(0U)))))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14407)) ? (((/* implicit */int) (unsigned short)60024)) : (2097151)))) : ((~(1827589838U)))))))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((signed char) (_Bool)1)))));
}
