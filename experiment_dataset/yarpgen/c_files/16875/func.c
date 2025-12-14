/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16875
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62953)) ? (576040042442552687ULL) : (((/* implicit */unsigned long long int) 3488123497U))));
    var_16 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (_Bool)1))))))) + (((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65532)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (!((_Bool)1)));
                    var_18 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_2 [18] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) | (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)132)) != (((/* implicit */int) (unsigned char)27)))) ? (((/* implicit */int) (unsigned short)8256)) : (((/* implicit */int) (unsigned char)166)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_13 [i_3] [7LL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)27)) >> (16LL)));
                    arr_14 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_15 [i_3] [i_4] [i_5] &= (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51422))))));
                }
            } 
        } 
    } 
}
