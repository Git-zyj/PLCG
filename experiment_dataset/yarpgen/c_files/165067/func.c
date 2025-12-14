/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165067
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                        arr_14 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) arr_6 [i_2]))))))));
                        var_12 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_6 [i_1 + 3])))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((_Bool) (~(arr_4 [i_0 + 1] [i_0])))))));
    }
    var_14 = ((/* implicit */unsigned int) 14785947946137288986ULL);
}
