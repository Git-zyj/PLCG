/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117875
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) var_0);
        var_21 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))));
        arr_3 [i_0] [3LL] = ((/* implicit */unsigned char) max(((+(arr_2 [i_0] [i_0 - 1]))), (((arr_2 [i_0] [i_0 - 1]) ^ (arr_2 [i_0] [i_0 - 1])))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) arr_14 [i_1 - 2] [i_2] [i_3] [i_5] [4U] [i_3]);
                                arr_19 [i_1] [(_Bool)1] [i_3] [i_5] [i_5] = ((/* implicit */signed char) arr_16 [i_1 - 3] [i_1] [i_5]);
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(1640249078U)))), (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)0))))) : ((-(var_17)))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 7269781401129946132LL))) && (((/* implicit */_Bool) ((arr_16 [i_1 - 2] [i_1 - 2] [(unsigned short)14]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (arr_11 [i_1 - 3])))) : (((/* implicit */int) arr_12 [6ULL] [i_2] [i_2] [i_2] [14LL] [i_2])))))));
                }
            } 
        } 
    } 
}
