/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111579
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (max((((/* implicit */int) ((_Bool) (_Bool)0))), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [(_Bool)1] = (short)30905;
                                arr_16 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) min(((unsigned char)192), (((/* implicit */unsigned char) (_Bool)1))))))));
                                arr_17 [i_1] [i_1] = arr_6 [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] [i_0] [i_1] = ((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_1])) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) < (((/* implicit */int) (unsigned char)64))))));
                                arr_24 [i_0] [i_6 - 1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)57);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (unsigned char)224))));
                }
            } 
        } 
    } 
    var_12 = var_8;
    var_13 -= ((/* implicit */unsigned char) var_8);
}
