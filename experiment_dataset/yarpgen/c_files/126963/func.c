/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126963
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */unsigned char) arr_0 [i_1]);
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_0]))));
                    arr_6 [i_0] [i_1] = ((/* implicit */short) 18445180440104350044ULL);
                    var_18 = ((/* implicit */unsigned short) 1125914890192048122ULL);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_5 [i_2]);
                        var_20 = ((/* implicit */signed char) (unsigned char)234);
                    }
                    for (unsigned short i_4 = 4; i_4 < 9; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)49);
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)88);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_7);
}
