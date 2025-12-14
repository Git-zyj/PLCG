/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117907
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
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_1 [i_0 - 2]))) || (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)13002)))) ? (((((/* implicit */_Bool) (unsigned short)23935)) ? (((/* implicit */int) (short)-9587)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_1 [i_3]))))))))));
                            var_18 = ((/* implicit */unsigned int) var_11);
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) - (((/* implicit */int) (short)-9578))))) ? (((/* implicit */int) ((short) arr_7 [i_0 - 1] [i_1] [i_0] [i_0] [i_0 - 1]))) : ((+(var_1)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)9727)) ? (33292288U) : (3167715485U))) << (((max((3), (((/* implicit */int) (unsigned char)111)))) - (95))))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-9588))));
                                arr_20 [i_6] [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) 2409714928U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8)))))))) % (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
    var_21 = ((/* implicit */short) var_2);
}
