/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10365
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)43452), (((/* implicit */unsigned short) max((arr_3 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_0] [i_1]))))))) ? (((((((/* implicit */int) (unsigned short)4842)) & (((/* implicit */int) var_4)))) + (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_8)) != (((/* implicit */int) var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)60694)) : (((/* implicit */int) var_12)))))))) != ((-(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_2 [i_0]))))))));
                arr_4 [(_Bool)1] [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [(signed char)16] [i_1] [i_1])))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_0 [(unsigned char)2])) : (((/* implicit */int) arr_0 [i_0])))))))));
                var_17 = ((/* implicit */signed char) (-(var_14)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-7771264135584275160LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 518055594U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))))) ? (((((/* implicit */int) (!(var_10)))) % (((/* implicit */int) max(((_Bool)1), (var_6)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) var_13)))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (var_2)));
}
