/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174721
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
    var_19 = ((((int) ((((/* implicit */int) var_17)) ^ (var_14)))) << (((3304142567U) - (3304142567U))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (+((~(-277533487)))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_1 + 1] [i_1]);
                        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) ((int) min((var_7), (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [0U]))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((long long int) min((max((1479526488U), (var_11))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))))));
    }
    var_23 = ((/* implicit */_Bool) var_15);
}
