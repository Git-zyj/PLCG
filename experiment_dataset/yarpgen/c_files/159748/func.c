/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159748
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = max((((/* implicit */int) max((((arr_5 [(unsigned short)7]) && ((_Bool)0))), ((_Bool)1)))), ((-(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 2])))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */int) (signed char)-19)) >= (((/* implicit */int) (_Bool)1)))), (arr_1 [i_1 + 2] [i_1 - 1])))), (max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (arr_0 [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */int) ((short) ((int) var_6)));
}
