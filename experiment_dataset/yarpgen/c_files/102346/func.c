/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102346
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
    var_12 = ((short) (short)32767);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */short) ((((int) (-(((/* implicit */int) (unsigned short)1992))))) - (min((((var_10) - (((/* implicit */int) arr_2 [i_2])))), ((-(var_10)))))));
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)63543)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1992))) : (2675329350315541297LL))))));
                }
            } 
        } 
    } 
}
