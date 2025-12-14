/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11862
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (max((((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)67)))), (((arr_0 [i_0] [i_0]) * (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)10921))));
                var_20 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) max(((unsigned short)65504), (((/* implicit */unsigned short) (_Bool)1))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((1058710120), (((/* implicit */int) var_15))))) ? (max((9223372036854775796LL), (((/* implicit */long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)102)) >> (((((/* implicit */int) arr_1 [i_0])) - (116)))))))) : (-9223372036854775788LL)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((11188809826197699312ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (min((((/* implicit */int) (unsigned char)152)), (2101076906))))) < (((/* implicit */int) var_6))));
    var_22 = ((_Bool) ((((/* implicit */_Bool) var_10)) ? (4294967295LL) : (((/* implicit */long long int) max((1812424618U), (((/* implicit */unsigned int) var_10)))))));
}
