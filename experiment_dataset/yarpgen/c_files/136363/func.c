/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136363
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
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) != ((-(arr_3 [i_1] [i_1] [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 7855451756641545351LL);
                    var_19 = ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]);
                    var_20 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_6 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            {
                arr_13 [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)198))));
                var_22 = ((/* implicit */short) arr_9 [i_3]);
                arr_14 [23ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_4 + 3] [i_4] [i_4 + 2])) >= (1401318037U)))) << (((((/* implicit */int) arr_12 [i_4] [i_4 + 3])) << (((/* implicit */int) (_Bool)1))))));
                arr_15 [i_3] [i_4] [i_4] = ((unsigned int) arr_9 [i_4]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            {
                arr_20 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                arr_21 [i_6] [(unsigned char)3] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_2 [i_6 - 1] [i_6 + 1]))))));
            }
        } 
    } 
}
