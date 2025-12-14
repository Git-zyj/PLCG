/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176642
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
    var_18 += ((/* implicit */_Bool) var_11);
    var_19 -= ((/* implicit */unsigned int) var_7);
    var_20 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) 1747173647U);
                            var_22 ^= ((/* implicit */unsigned long long int) (-(-1076538777)));
                            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)27179)));
                        }
                    } 
                } 
                var_24 -= var_1;
                var_25 = ((/* implicit */unsigned char) arr_11 [i_1] [i_1]);
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)42)), ((~(((/* implicit */int) ((_Bool) (unsigned char)128)))))));
}
