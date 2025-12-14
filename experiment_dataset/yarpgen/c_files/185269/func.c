/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185269
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
    var_14 = ((/* implicit */signed char) ((int) ((1059134769U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = var_10;
                var_16 = ((unsigned long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_4 [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 7; i_2 += 3) 
    {
        for (unsigned short i_3 = 3; i_3 < 8; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((18446744073709551600ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872))))))));
                    arr_13 [i_3] = ((/* implicit */unsigned short) var_2);
                    var_18 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_16 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((short) (~(7895620153668542077ULL))))), (arr_4 [i_3])));
                        arr_17 [i_5] [i_3] [i_4] [i_3] [i_2] = ((/* implicit */signed char) ((long long int) ((10551123920041009551ULL) + (10551123920041009571ULL))));
                    }
                }
                var_19 = ((/* implicit */unsigned short) var_4);
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned short)16320))));
            }
        } 
    } 
}
