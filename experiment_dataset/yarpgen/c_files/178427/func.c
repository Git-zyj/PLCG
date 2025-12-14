/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178427
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (arr_6 [i_0]) : (var_12)))))) ? (((/* implicit */int) ((short) 16448319076233406627ULL))) : ((~((~(arr_7 [i_2])))))));
                            var_14 &= ((/* implicit */unsigned long long int) ((int) arr_1 [i_0 + 1] [i_1 + 3]));
                            arr_11 [i_3] [7ULL] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((1998424997476144974ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8087))))))) ? (((/* implicit */long long int) ((arr_5 [i_0 + 1] [i_1 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 1] [i_3])))))) : (arr_3 [i_3])));
                        }
                    } 
                } 
                var_15 = (+(((/* implicit */int) (short)-8192)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) min(((signed char)73), ((signed char)43)))) << (((((/* implicit */int) var_6)) + (89))))));
    var_17 = ((/* implicit */unsigned short) var_1);
}
