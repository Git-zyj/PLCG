/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173258
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((var_9), (((/* implicit */unsigned short) var_8))))))) % ((+(min((arr_1 [i_0]), (((/* implicit */unsigned int) (short)(-32767 - 1))))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2]);
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_2])))) : (4294967295U)));
                    var_14 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45903)) * (((/* implicit */int) (unsigned char)0))))), (arr_7 [i_2] [i_0]))), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */int) 14940304737337713184ULL);
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_16 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                    arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (signed char)-113)));
                    var_16 = ((/* implicit */unsigned short) arr_15 [i_3] [i_4] [i_4]);
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((arr_10 [i_3] [(unsigned short)14]), (((/* implicit */unsigned char) var_7))))), (((unsigned short) arr_14 [i_3] [i_4]))));
                }
            } 
        } 
    } 
}
