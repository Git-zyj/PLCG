/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100823
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
    var_15 = ((/* implicit */short) var_12);
    var_16 ^= ((/* implicit */_Bool) var_13);
    var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)6126)) | (((/* implicit */int) (signed char)120))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */short) arr_0 [i_1]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_3 [i_1])))) + (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) arr_3 [i_3]))))));
                            }
                        } 
                    } 
                } 
                var_21 &= ((/* implicit */short) var_13);
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-116)) <= (((/* implicit */int) (short)-32754))));
}
