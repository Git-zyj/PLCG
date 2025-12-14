/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160238
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
    var_19 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_0] [7] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    arr_8 [i_0] [i_0] [i_2 + 1] [i_2] = ((/* implicit */long long int) ((short) var_3));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18318)) ? (((/* implicit */int) (short)-32005)) : (562140057)));
                    var_21 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) arr_5 [14LL] [i_0 + 3] [i_2 - 1])) + (((((/* implicit */_Bool) var_8)) ? (var_15) : (arr_2 [i_0] [i_0 + 3] [i_0 + 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 562140068)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (562140050))) : (((/* implicit */int) (short)32249)))))));
                }
            } 
        } 
    } 
}
