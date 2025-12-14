/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154374
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_0 + 2]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_14)))))) : (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (var_1))) << (((arr_1 [i_0 - 1] [i_0 - 3]) - (1485457548U)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (_Bool)0)))))));
                var_16 += ((int) (!(((/* implicit */_Bool) max((arr_6 [0ULL] [i_0]), (var_5))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_12 [7U] = ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (~(var_1)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_20 [i_3] [i_4] [(unsigned char)14] [i_3] = ((/* implicit */int) max((4294967295U), (1240878878U)));
                    arr_21 [i_2] [i_3] [i_3] = (~(((/* implicit */int) (unsigned short)16862)));
                }
            } 
        } 
    }
}
