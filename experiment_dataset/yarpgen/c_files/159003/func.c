/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159003
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
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (var_6)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((((((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) | ((+(((/* implicit */int) var_13)))))) == (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_0 + 3])) >= (((int) var_9))))));
                var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_6)))), (((((/* implicit */int) var_10)) << (((((((/* implicit */int) var_7)) + (87))) - (22)))))));
                var_18 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (413591208888163414ULL) : (18033152864821388201ULL))));
                var_19 = ((/* implicit */unsigned char) var_3);
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_7)) != ((+(((/* implicit */int) var_14)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
}
