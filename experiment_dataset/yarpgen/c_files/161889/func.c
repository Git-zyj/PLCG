/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161889
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
    var_16 |= var_9;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) arr_2 [(short)15] [i_2]))))) >= (((/* implicit */int) arr_4 [i_0] [i_2 + 2]))))), ((~(arr_0 [i_2] [i_2 + 4])))));
                    arr_6 [i_0] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned short) (unsigned char)126)), ((unsigned short)10))));
                    var_18 -= ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)27)))), ((-(((/* implicit */int) (unsigned char)126))))));
                }
            } 
        } 
    } 
}
