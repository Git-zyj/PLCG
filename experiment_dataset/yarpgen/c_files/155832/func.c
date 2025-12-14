/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155832
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((signed char) ((signed char) (unsigned short)27915))))));
                                arr_14 [i_0] [i_1 - 1] [i_4] [i_0] [i_4] [i_3] &= ((/* implicit */unsigned char) ((int) max((((/* implicit */long long int) (unsigned short)37621)), (-5588168257522618596LL))));
                                var_14 = min((((long long int) min(((-2147483647 - 1)), (-3)))), (((/* implicit */long long int) ((unsigned short) (signed char)107))));
                                var_15 -= min((((/* implicit */short) ((signed char) ((int) (signed char)2)))), (((short) (-2147483647 - 1))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((int) 2147483622));
                    arr_15 [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */signed char) max((((short) -5057781948846505850LL)), (((/* implicit */short) ((signed char) max((2147483647), (-625762779)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) (signed char)6))), ((unsigned char)244))))));
}
