/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109784
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = arr_0 [i_0] [i_0];
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-13))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_5 [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned long long int) ((var_2) & (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) var_10)))) : (-5413522574614118016LL)))));
        var_14 = ((/* implicit */unsigned int) arr_2 [i_1 - 1]);
        arr_6 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(-5413522574614118037LL)))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != ((((-2147483647 - 1)) % (((/* implicit */int) arr_3 [i_1 + 1]))))))) : (((((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (2147483617)))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) % (2303785193U)))) ? (((/* implicit */long long int) max((3439223782U), (((/* implicit */unsigned int) (signed char)-109))))) : ((-(5413522574614118013LL)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    var_15 = ((((/* implicit */long long int) var_10)) % (var_6));
                    arr_14 [i_2] [i_3] = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) 6319053662876673031ULL)) || ((_Bool)1)))) & (((/* implicit */unsigned int) ((((arr_10 [i_1 + 1] [i_2]) & (((/* implicit */int) var_11)))) | (2147483647))))));
                    arr_15 [i_1 - 2] [(signed char)2] [(signed char)3] [i_3] = (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (2490813931U))))));
                    arr_16 [i_1 - 2] [i_2] [i_3 - 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) -1799570942)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_3] [5ULL] [i_2])) << (((((-9111282719579612447LL) + (9111282719579612468LL))) - (8LL)))))) : (var_2)))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) 1799570927);
    var_17 = var_8;
}
