/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181872
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
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (_Bool)1))))), ((~(((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_8))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((_Bool) max(((_Bool)0), (max((var_1), ((_Bool)1))))));
        arr_2 [i_0] = ((/* implicit */_Bool) max((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) var_0)) - (((/* implicit */int) var_12))))))));
        var_17 = ((/* implicit */int) ((_Bool) ((int) (((_Bool)1) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                    var_18 += ((/* implicit */unsigned short) ((_Bool) max((var_13), (((/* implicit */int) max((var_1), (arr_0 [i_0] [i_2])))))));
                }
            } 
        } 
    }
}
