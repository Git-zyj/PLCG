/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151353
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] = ((((/* implicit */int) (unsigned char)118)) % (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3 - 1] [i_2 - 3])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 1] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3 + 1] [i_2 + 1])))));
                        arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [6ULL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-19954)))) && (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1]))))))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3]))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (int i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */int) -8620002243736067611LL);
        var_18 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_16 [i_4] [i_4])), (18108168774562845457ULL)));
        arr_18 [i_4] = ((/* implicit */_Bool) arr_16 [i_4] [4ULL]);
    }
    var_19 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) var_10))))) - (((((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_3))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-5107669708635997707LL))))));
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    var_21 = ((/* implicit */_Bool) var_17);
}
