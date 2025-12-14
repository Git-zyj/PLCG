/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120704
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
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1371203339)) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) (signed char)-88)), (var_6))), (((/* implicit */long long int) ((unsigned short) var_1))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (((int) arr_3 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (+((~(((((/* implicit */_Bool) 502064491U)) ? (((/* implicit */int) arr_8 [i_3] [17U] [(signed char)24] [17U])) : (arr_5 [i_0])))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) max((arr_8 [i_0] [19] [i_2] [i_3]), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
}
