/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128033
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0]) == (((/* implicit */int) arr_3 [i_0] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                arr_5 [i_0] [1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967293U), (((/* implicit */unsigned int) var_0))))) ? (arr_2 [i_0] [9ULL]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)13])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (-65536))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [11ULL] [i_1])))) ? (((((/* implicit */int) arr_3 [i_0] [i_1])) & (((/* implicit */int) arr_3 [i_1] [i_0])))) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            {
                arr_13 [i_3] [i_3 - 1] = ((/* implicit */signed char) arr_10 [i_2] [i_2] [i_3]);
                arr_14 [i_2] [i_2] [i_2] &= arr_7 [i_2];
            }
        } 
    } 
}
