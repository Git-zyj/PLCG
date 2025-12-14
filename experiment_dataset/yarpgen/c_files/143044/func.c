/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143044
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
    var_12 = ((/* implicit */short) var_8);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (min((((/* implicit */unsigned long long int) (short)-28253)), (8418463175069892987ULL)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_0] = ((unsigned short) ((short) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_3 [i_0 - 2] [i_0] [i_0 + 1]))));
                    var_14 = max((((/* implicit */unsigned long long int) var_8)), (min((8418463175069892983ULL), (8418463175069892973ULL))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) var_1)), (8418463175069893000ULL))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                arr_18 [i_3] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (unsigned short)27825)), (10028280898639658622ULL))), ((-(10028280898639658656ULL)))));
                arr_19 [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3]);
            }
        } 
    } 
}
