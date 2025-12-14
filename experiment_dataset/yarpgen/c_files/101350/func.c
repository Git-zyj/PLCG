/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101350
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
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [4U] [4U] [4U] &= ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)47))))) != (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((short) arr_9 [(_Bool)1] [i_2] [i_1] [(_Bool)1]))) : ((~((~(((/* implicit */int) var_10)))))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_1 [i_1]), (((/* implicit */unsigned short) arr_5 [i_3]))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_18 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [8U] [i_2] [8U] [8U])) : (((/* implicit */int) arr_5 [i_4]))))))))));
                                var_19 = (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)));
                            }
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [16U] [i_0] [i_0]);
                var_20 = ((/* implicit */signed char) (short)0);
                var_21 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
}
