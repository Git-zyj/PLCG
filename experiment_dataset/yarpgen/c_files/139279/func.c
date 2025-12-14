/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139279
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
    var_17 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) 2198956146688ULL))))), (var_9)));
    var_18 = ((/* implicit */unsigned int) (short)24312);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */unsigned long long int) (unsigned char)60)), (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((min((2965999827986442699ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((_Bool) 17315003124216333457ULL)))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((-(-862806891))) < (-1821323856)));
        var_20 = ((/* implicit */unsigned short) (~((+(((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_22 *= ((/* implicit */unsigned char) arr_2 [i_2] [i_3]);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5] [(short)10] = ((/* implicit */_Bool) 1315147723);
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_4] [i_3] [i_4] [i_1] [i_3])) ? (((/* implicit */unsigned int) 1074999754)) : (arr_12 [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_17 [i_1] = ((/* implicit */short) ((unsigned short) arr_9 [i_1]));
    }
}
