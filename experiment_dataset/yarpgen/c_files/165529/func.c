/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165529
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) var_7);
                    var_12 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_14 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_5 + 4])) ? (8833423971764889707LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-11054)))))))), (((/* implicit */long long int) ((short) (unsigned char)145)))));
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1] [2U] [i_4]))) - (10586139799754284155ULL)))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_6))) ? ((~(((/* implicit */int) arr_13 [i_3] [i_6] [i_5 + 4] [8U])))) : (((arr_13 [i_3] [i_6] [i_5 + 4] [14LL]) ? (((/* implicit */int) arr_13 [(signed char)10] [i_6] [i_5 + 2] [i_6])) : (((/* implicit */int) arr_13 [i_3] [i_6] [i_5 - 1] [i_6])))))))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (5841590144558105553ULL)));
                    arr_15 [i_3] [(short)6] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_5 + 2] [i_3] [i_3] [i_3])) - (((/* implicit */int) arr_13 [i_3] [i_3] [i_5 + 1] [i_3])))) * (((/* implicit */int) (((-(((/* implicit */int) arr_7 [i_3])))) > ((~(((/* implicit */int) var_5)))))))));
                    var_18 -= ((/* implicit */_Bool) ((arr_13 [i_5 - 1] [i_4] [i_4] [i_3]) ? (max((((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 4] [(unsigned char)7])), (arr_14 [i_4] [i_4] [(signed char)12] [8ULL] [(signed char)2] [i_4]))) : (((/* implicit */int) (unsigned short)45861))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (unsigned char)170))))))));
                }
            } 
        } 
    } 
}
