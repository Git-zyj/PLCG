/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148443
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
    var_14 = ((/* implicit */int) max((max((((2402689487703004250ULL) << (((((/* implicit */int) var_6)) + (30083))))), (16044054586006547370ULL))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) ((arr_5 [i_0 + 4] [12ULL] [i_0] [i_0 + 1]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 16044054586006547348ULL)) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (-1736263442))))));
                    arr_8 [i_0] [9ULL] [(short)5] [i_0] = ((/* implicit */int) ((short) arr_3 [i_0 + 3]));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_3] [i_4])), (max((((/* implicit */int) ((short) arr_7 [i_5] [i_3] [i_3]))), ((+(((/* implicit */int) var_1)))))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) -525885374)) ? (8131666647226605589ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)13)) << (((10644219335103644482ULL) - (10644219335103644458ULL)))))))))));
                    var_18 += ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_17 [i_4 + 1] [(short)12] [i_5]))))));
                }
            } 
        } 
    } 
}
