/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101584
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
    var_19 = (~(((((/* implicit */_Bool) 8372224U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16954))) : (4233625558U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
    var_20 = ((/* implicit */unsigned short) ((18446744073709551605ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_21 = ((/* implicit */short) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) / (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */unsigned long long int) (-(((-1596809292) - (((/* implicit */int) (_Bool)0))))));
                            var_23 -= ((/* implicit */unsigned long long int) ((long long int) (signed char)114));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 -= ((/* implicit */short) (-(((/* implicit */int) var_8))));
}
