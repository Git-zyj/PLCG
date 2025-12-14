/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107607
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) var_6);
                var_15 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_1])) <= (((/* implicit */int) arr_0 [i_0])))) || (((/* implicit */_Bool) ((short) -9104199638490980379LL)))));
                var_16 = ((/* implicit */unsigned int) arr_0 [(unsigned short)0]);
                var_17 = max((arr_4 [i_1] [i_0] [i_1]), (((/* implicit */int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)88))))) == (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */short) (+(((long long int) arr_15 [i_0] [i_4] [i_2]))));
                                arr_16 [i_3] [16] [i_1] [i_3] [i_0] [i_4] = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1] [i_3]);
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) min((((/* implicit */int) max((arr_14 [i_0] [i_3] [i_2] [(unsigned char)19]), (arr_14 [(_Bool)1] [i_2] [(_Bool)1] [i_0])))), (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) (short)-18952)))))) : (((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14319))) : (var_10))) << (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    var_20 = ((/* implicit */short) min((var_20), (((short) 3464800350U))));
}
