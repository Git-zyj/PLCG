/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154810
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
    var_16 = max(((short)15791), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (0U))))))));
    var_17 += ((/* implicit */long long int) var_14);
    var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(-4371384962413282649LL)))) ? (max((((/* implicit */int) (_Bool)1)), (-1770595719))) : (((/* implicit */int) var_6))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)20140))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-20131)))) ? ((+(((/* implicit */int) (short)20140)))) : (((/* implicit */int) max(((short)20135), ((short)20145)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) max(((_Bool)1), ((_Bool)1)));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) (short)-32744);
}
