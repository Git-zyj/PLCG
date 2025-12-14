/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105486
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(arr_0 [i_2 - 1])));
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) (short)-32741)) == (((/* implicit */int) (short)-32741))))));
                    arr_9 [i_1] = (-(((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) max((((/* implicit */short) var_12)), (arr_1 [i_1 - 2])))))));
                    arr_10 [i_1] [(signed char)15] [(short)9] [i_2] = ((/* implicit */unsigned short) min((((arr_4 [i_2 - 2] [i_2 - 1] [i_1 + 1]) + (((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_1 - 3])))), (((/* implicit */int) ((short) 9223372036854775807LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_20 [i_5] = ((/* implicit */short) max((((((/* implicit */int) (signed char)111)) % (((/* implicit */int) (unsigned short)33622)))), (((/* implicit */int) (unsigned short)6))));
                    arr_21 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4]))))) ? (((((/* implicit */int) (unsigned short)33622)) ^ (-1921746686))) : ((~(((/* implicit */int) var_12))))))) ? (((/* implicit */int) arr_2 [i_5])) : (((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_5])))) & (((/* implicit */int) (unsigned short)44738))))));
                    arr_22 [i_3] [1U] [1U] [i_4] = ((/* implicit */unsigned int) var_5);
                    arr_23 [i_5] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_19 [(_Bool)1] [i_4] [i_5] [i_5])), (var_2)))), (max((2U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29371)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    } 
}
