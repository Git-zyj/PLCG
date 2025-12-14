/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175933
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
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_17 = (-(((((/* implicit */_Bool) arr_7 [i_1] [i_2 - 1] [i_3])) ? (arr_7 [i_0] [i_2 + 3] [i_0]) : (arr_7 [i_1] [i_2 + 1] [i_1]))));
                            arr_11 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] = (-(((long long int) arr_5 [i_0])));
                            var_18 = ((/* implicit */unsigned short) (short)7168);
                        }
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) ((long long int) arr_4 [i_0]))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0]))), (3147770177698863806ULL))) : ((+(3147770177698863807ULL))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))));
}
