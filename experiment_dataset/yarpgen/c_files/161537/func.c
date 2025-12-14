/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161537
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned char) min(((unsigned short)43886), (((/* implicit */unsigned short) (_Bool)0))));
                                arr_17 [i_1] [i_3] [4] [(_Bool)1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned char)138))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 -= ((/* implicit */int) var_2);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)43886)) ? (((/* implicit */int) (unsigned short)21649)) : (((/* implicit */int) (unsigned short)43886))))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_1))))));
    var_20 -= ((/* implicit */int) var_13);
}
