/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107393
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((17402672722587892573ULL), (var_9))))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_4)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3810075510613488021ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2100376478)) && (((/* implicit */_Bool) (short)11986))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((13680936132278748569ULL), (14586896705034604707ULL)))))) : ((+(min((14586896705034604707ULL), (3859847368674946908ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [(_Bool)1]);
                        var_14 = ((/* implicit */int) (+(((14586896705034604707ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        arr_12 [i_0] [i_0] [(short)3] [15ULL] = ((/* implicit */int) min((3859847368674946909ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2 - 2])), (716346625U))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0] [i_0]));
        var_16 = ((/* implicit */int) var_6);
    }
}
