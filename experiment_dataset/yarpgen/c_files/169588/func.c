/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169588
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
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (10475975874930661438ULL) : (((/* implicit */unsigned long long int) 0U))))))))));
    var_15 = ((/* implicit */int) ((unsigned short) 4294967276U));
    var_16 = ((/* implicit */signed char) (~(var_1)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0 + 1] [(signed char)14] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [(_Bool)1])))) & (((/* implicit */int) (unsigned char)56))))) ? (min((14407291560493546543ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1378066483U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (((/* implicit */unsigned char) var_4)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((max((((((/* implicit */int) var_5)) % (((/* implicit */int) (signed char)-92)))), ((-(((/* implicit */int) (signed char)-7)))))) * (((/* implicit */int) ((((/* implicit */long long int) 1378066483U)) >= (-3826568463734832101LL))))));
            var_18 &= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) / (((/* implicit */int) var_5))))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)9)) / (((/* implicit */int) (signed char)5))))))) : (-7946849524331134365LL)));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_5 [10] [i_2] [i_0 - 1])), ((signed char)98)))) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */int) var_12)) <= (((/* implicit */int) (_Bool)0)))), (var_11)))))));
            arr_10 [i_0] [(unsigned short)1] [i_2] = (~((-(var_9))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) < (((int) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */int) (signed char)-73)))))));
    }
}
