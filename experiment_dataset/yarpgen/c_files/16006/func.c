/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16006
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
    var_13 = var_12;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [4LL] [i_0] = ((/* implicit */unsigned short) min((((unsigned int) arr_4 [i_0])), (((/* implicit */unsigned int) var_2))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_2 [i_0] [i_0]))) * (((/* implicit */int) arr_2 [i_0] [i_1]))));
                arr_8 [i_0] = ((/* implicit */short) 3710481059U);
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [(signed char)12])) ? (3710481056U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3529))))))) - ((-(max((((/* implicit */unsigned int) 851404934)), (arr_4 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_14 |= arr_16 [i_3 + 1] [i_2] [13];
                    arr_17 [i_2] [i_3] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (arr_16 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) var_11)) : (arr_16 [i_2] [i_2] [i_2]))), (((((/* implicit */_Bool) (unsigned short)16237)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned short)49306))))));
                }
            } 
        } 
    } 
}
