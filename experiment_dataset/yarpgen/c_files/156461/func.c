/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156461
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) (unsigned short)16930);
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (short)-11224))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_15 |= ((/* implicit */short) ((signed char) (short)-16756));
                            var_16 = ((max(((+(((/* implicit */int) arr_2 [i_0 + 1] [i_1])))), (((/* implicit */int) (short)-16752)))) + (((/* implicit */int) var_8)));
                            var_17 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (signed char)49)))) + (2147483647))) << ((((((-(((/* implicit */int) (_Bool)1)))) + (3))) - (2)))));
                            arr_11 [i_1] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_9 [i_0 + 2] [i_0 + 2] [i_2] [(unsigned char)23]));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((((arr_10 [i_0]) & (((/* implicit */unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))))))));
            }
        } 
    } 
    var_19 = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-23984292295477778LL))))) << (((/* implicit */int) (_Bool)1)));
    var_20 = ((/* implicit */int) (short)-16752);
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7520563161949266145LL))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16740))) : (var_12)))))));
}
