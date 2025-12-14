/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183326
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1071644672U)) ? (((/* implicit */unsigned int) 0)) : (0U)));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    var_13 |= ((/* implicit */unsigned long long int) 585341102);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_8));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_1]) : (arr_2 [i_2 + 1] [i_0]))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_14 ^= ((/* implicit */unsigned short) (-(((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((var_9), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (arr_2 [i_1] [i_3]))) - (4294967295U))))));
                }
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_2)) ? (((max((var_9), (var_9))) | (((/* implicit */long long int) (~(var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned char i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18014398509477888ULL))))), (min((arr_20 [i_5 + 1] [i_4 - 4] [i_4 - 1]), (arr_20 [i_5 + 1] [i_4 - 4] [i_4 - 3])))));
                    arr_23 [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -621305799)))))));
                }
            } 
        } 
    } 
}
