/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137074
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */long long int) ((signed char) ((unsigned short) (+(((/* implicit */int) arr_4 [i_1] [i_1]))))));
                arr_6 [(unsigned char)7] [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                arr_7 [i_0] [20U] [0U] = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned int) arr_5 [i_0])), (2987434746U))));
                arr_8 [i_0] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1]))), ((+(1307532548U)))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)52522), (((/* implicit */unsigned short) (signed char)30))))) ? (min((1307532540U), (((/* implicit */unsigned int) arr_2 [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (1307532554U)))) ? (((/* implicit */int) min((var_12), (arr_3 [i_0] [(unsigned char)16])))) : (((/* implicit */int) arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((signed char) (+(var_6)))))));
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */int) min((((/* implicit */long long int) 2987434756U)), (4892458733242098080LL)));
}
