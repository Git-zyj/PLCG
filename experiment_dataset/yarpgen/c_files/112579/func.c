/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112579
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
    var_10 = ((/* implicit */signed char) (short)7617);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (short)-7617))) <= (((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3 - 2] [1LL] [i_4] [i_4])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)-7618))))));
                                var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) 5614413)))));
                                var_13 += ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1197002495)) ? (((((/* implicit */int) (short)-7629)) % (arr_6 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_9)) ? (-5614414) : (1197002495))))))));
                    var_15 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2]))))));
                    var_16 = ((/* implicit */unsigned char) min((-1197002513), (((/* implicit */int) (short)-7618))));
                }
            } 
        } 
    } 
}
