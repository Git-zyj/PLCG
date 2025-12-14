/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142564
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 - 1] [i_1 - 2] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(arr_1 [i_0 + 2])))) / (-5156249855251642596LL)));
                                arr_13 [i_0] [i_0] = var_9;
                                var_15 = ((/* implicit */long long int) min((max((((/* implicit */unsigned char) arr_11 [i_0] [i_2] [2] [i_1 - 1] [i_0 - 1])), (var_2))), (((/* implicit */unsigned char) ((897795116) != (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_16 = var_12;
            }
        } 
    } 
}
