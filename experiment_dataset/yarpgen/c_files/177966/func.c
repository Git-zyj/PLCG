/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177966
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            {
                arr_5 [i_1 - 1] [i_0] [i_0] = arr_3 [i_0 + 1] [i_1];
                var_17 = ((/* implicit */unsigned long long int) (unsigned short)4970);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_18 = min((arr_8 [i_2]), (((/* implicit */unsigned long long int) min((max((arr_2 [i_1 + 4] [i_0 + 2]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) max(((signed char)15), (((/* implicit */signed char) arr_3 [i_0] [5U])))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_3])) == (arr_0 [i_0] [i_0]))));
                        arr_11 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)230)))) <= (((int) arr_1 [i_0]))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */int) arr_8 [i_0]);
                        var_21 = ((/* implicit */int) arr_13 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1]);
                    }
                }
                var_22 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) var_15)), (arr_0 [i_1] [i_0])))));
                var_23 = ((/* implicit */unsigned long long int) ((signed char) (~(arr_13 [i_0 - 1] [i_0] [i_0] [i_0 - 1]))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_6);
}
