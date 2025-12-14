/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142796
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */long long int) min(((short)-32767), (((/* implicit */short) (signed char)-86))));
                    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-6997698903372258434LL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                arr_16 [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 3] [i_3 + 3] [i_3 + 3])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_5 [i_3 + 3] [i_3] [i_3 + 2]))))), (max((-8029093541573144952LL), (((/* implicit */long long int) min((((/* implicit */int) (short)-1746)), (-8388608))))))));
                var_14 = ((/* implicit */unsigned long long int) arr_12 [7U]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_1);
    var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-118))))) ? (((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_12)), (var_2))), (((/* implicit */unsigned int) max((var_4), (var_5))))))) : (((((-8029093541573144946LL) + (9223372036854775807LL))) >> (((2939437124U) - (2939437103U))))));
    var_17 = ((/* implicit */unsigned short) var_1);
}
