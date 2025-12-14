/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152207
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) var_14);
        var_17 = ((/* implicit */short) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        var_18 = ((/* implicit */long long int) arr_4 [i_1]);
        var_19 = ((/* implicit */int) max((var_19), ((-(((/* implicit */int) min((arr_1 [i_1] [i_1]), (arr_1 [i_1] [18ULL]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(arr_8 [i_2]))))));
                arr_11 [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((int) var_3));
                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_2] [i_3])), (((int) (+(((/* implicit */int) arr_7 [i_2] [i_2])))))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_8 [i_2]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_5);
}
