/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161770
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)69)) && (((/* implicit */_Bool) (unsigned char)100)))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_13 [i_0] [i_2] [i_4]), (arr_5 [i_3])))) << (((((/* implicit */int) var_3)) - (44)))));
                                var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_16 [i_2] [i_3] [i_2] [i_1] [i_2])))) % (((/* implicit */int) arr_7 [i_3]))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2]))))) & (((/* implicit */int) arr_12 [i_2] [i_3] [i_4])))))));
                                var_18 = min((((/* implicit */unsigned short) var_13)), (((unsigned short) min((var_3), (arr_2 [i_4])))));
                            }
                        } 
                    } 
                    var_19 += var_1;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_11)))));
}
