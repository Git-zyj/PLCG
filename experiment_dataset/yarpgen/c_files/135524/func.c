/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135524
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
    var_17 = ((/* implicit */long long int) (-2147483647 - 1));
    var_18 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) 1424158947965101981ULL);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) 1027546513U)) != (17441606856526671596ULL)))));
                            var_20 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_7 [(short)11] [(short)7] [i_2])) ? (((/* implicit */long long int) arr_6 [i_0] [i_1 - 3] [i_2])) : (min((var_6), (((/* implicit */long long int) (unsigned short)7178)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = (~(((/* implicit */int) ((signed char) ((short) var_15)))));
}
