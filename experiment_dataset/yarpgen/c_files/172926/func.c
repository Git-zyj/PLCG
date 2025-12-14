/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172926
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 3]);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(2147483647)));
                var_20 -= (-(((/* implicit */int) (unsigned short)65535)));
                arr_8 [i_0] = ((/* implicit */signed char) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 -= ((/* implicit */unsigned char) min((min(((unsigned short)54287), ((unsigned short)65535))), (((/* implicit */unsigned short) (short)22669))));
                    arr_16 [i_3] [i_3 + 2] [i_4] [i_3 + 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                    arr_17 [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)17141)) < (((/* implicit */int) (unsigned short)65535)))))) % ((-(var_11)))))) ? (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_2 - 1] [(unsigned char)6])) : (((/* implicit */int) arr_11 [i_2 - 2] [12LL])))) : (((/* implicit */int) ((unsigned char) min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned int) (signed char)97)))))));
                }
            } 
        } 
    } 
}
