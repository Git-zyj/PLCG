/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177931
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (15153086334251040294ULL))) : (((/* implicit */unsigned long long int) (+(var_1))))))) ? (((((/* implicit */int) var_5)) % ((((_Bool)1) ? (((/* implicit */int) var_3)) : (var_14))))) : ((~(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [(signed char)3] = ((/* implicit */int) (signed char)59);
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(469926542527733335ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0] [i_1])))))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11519352333751237190ULL)))));
            }
        } 
    } 
}
