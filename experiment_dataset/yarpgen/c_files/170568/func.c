/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170568
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
    var_15 = var_14;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_2 + 1]))));
                    arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((var_10) == (((/* implicit */int) arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = min((((((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_2 [i_1] [11])) - (11245))))) | (((/* implicit */int) ((arr_11 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]) <= (arr_11 [i_0] [i_1] [i_2] [i_3] [10] [i_4])))))), ((+(((-1779691009) & (1779690996))))));
                                arr_13 [3LL] = ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_3])) & (arr_7 [i_1] [i_1] [i_2 + 1] [i_2] [i_1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
        {
            {
                var_17 = -1918361744;
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        for (int i_9 = 4; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_18 = arr_23 [i_6 + 1] [i_6] [i_6 + 2] [i_9];
                                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_14 [i_5] [i_8]);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) min((-1437483549), (-1437483546)));
                var_20 += ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(min((6742938100400255410LL), (((/* implicit */long long int) 1779691009)))))))));
    var_22 = 1779691020;
}
