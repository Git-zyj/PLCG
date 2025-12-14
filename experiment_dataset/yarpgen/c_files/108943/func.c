/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108943
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
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) -923823860);
                            var_19 = ((/* implicit */unsigned short) (signed char)-43);
                            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_9)) <= (var_10))))), (((-4400520721208115067LL) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)25)) >> (((/* implicit */int) var_2))))));
                                var_20 = ((/* implicit */unsigned short) max((4011636311U), (4294967292U)));
                                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-18330))));
                            }
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 343713392U))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */short) ((min((((((/* implicit */int) (short)-18330)) | (((/* implicit */int) (signed char)-58)))), (((/* implicit */int) (unsigned char)99)))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)43)), (var_13)))))))));
            }
        } 
    } 
}
