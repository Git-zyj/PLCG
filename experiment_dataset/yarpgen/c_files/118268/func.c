/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118268
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
    var_10 = ((/* implicit */signed char) ((3326992048560388335LL) >= (3326992048560388335LL)));
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((short) var_6));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_0 [i_2 - 3]))));
                }
            } 
        } 
    } 
}
