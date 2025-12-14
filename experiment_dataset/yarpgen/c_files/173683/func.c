/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173683
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)63)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    var_21 = ((/* implicit */int) var_6);
    var_22 = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -3501551003813958149LL)) && ((_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) var_8)) >= (-3780827067427967582LL))) ? (((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) <= ((+(1872971487)))))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) arr_0 [(signed char)3] [6LL]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-63))));
}
