/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17332
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
    var_20 = var_4;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_2 - 2] [i_1 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((((/* implicit */_Bool) 17260675412570423790ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)3)))))), (((/* implicit */int) ((short) arr_2 [i_1 + 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) min((6637169074054158783ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned char)63)))))));
                    var_22 = (short)29452;
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)239)) && (((/* implicit */_Bool) arr_4 [i_1 - 1])))))) > (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & (-5560026704638430744LL)))) ? (16583017239544335170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_13))))))))));
                }
            } 
        } 
    } 
}
