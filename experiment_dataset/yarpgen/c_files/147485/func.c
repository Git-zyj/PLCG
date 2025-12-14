/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147485
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)181)) >= ((+(((/* implicit */int) (short)32767))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) (short)-15))));
                                arr_14 [i_0] [i_0] [i_0] [(short)6] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 876293690U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (1295984760U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 3262632522U)) ? (3262632522U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))))));
}
