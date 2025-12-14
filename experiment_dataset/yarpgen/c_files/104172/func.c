/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104172
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((((-2147483647 - 1)) & (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) max((var_0), ((unsigned char)104))))))) ? (((/* implicit */int) ((unsigned short) (+(-2147483621))))) : (((/* implicit */int) ((unsigned char) (unsigned char)151)))));
                arr_6 [20U] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((-2147483635) / (((/* implicit */int) var_12))));
                arr_7 [i_1] = ((/* implicit */long long int) var_10);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max(((short)-10928), (((/* implicit */short) var_2))));
                            var_22 = ((/* implicit */long long int) 2147483647);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (((unsigned short) 2147483643))))))))));
}
