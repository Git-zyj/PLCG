/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143850
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
    var_12 *= (unsigned char)155;
    var_13 = var_0;
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_14 &= arr_8 [i_4];
                                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)135)) ^ (((/* implicit */int) (unsigned char)155))));
                                arr_13 [i_0 + 1] [(unsigned char)3] [i_2] [i_4] [i_4] = max(((unsigned char)155), ((unsigned char)155));
                            }
                        } 
                    } 
                } 
                var_16 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_7 [i_0] [i_1 + 1])) | (((/* implicit */int) (unsigned char)16))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 2; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0 - 1] [i_5 - 2] [i_0 - 1] [i_7])) <= (((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : ((-(((/* implicit */int) (unsigned char)248))))))));
                                arr_22 [i_5] [i_5] = arr_16 [i_0] [i_5] [i_6] [i_7];
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_6 [i_0 - 3] [i_0 - 2] [i_1 - 2]), (arr_8 [i_0 - 1]))))));
                arr_23 [i_0] [i_1 - 1] [i_0] = var_5;
            }
        } 
    } 
}
