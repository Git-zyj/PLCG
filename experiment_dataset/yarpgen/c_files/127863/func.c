/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127863
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((long long int) max((0U), (arr_5 [i_1])))))));
                var_17 = ((_Bool) ((signed char) (unsigned char)17));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_10 [i_3] [i_2] [i_3]);
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) arr_8 [i_2] [(_Bool)1])) ? (max((arr_6 [i_2] [(unsigned short)8]), (((/* implicit */long long int) arr_10 [i_2] [6] [(signed char)16])))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))))))))));
                var_20 *= ((/* implicit */signed char) ((_Bool) (((_Bool)0) || (((/* implicit */_Bool) 4294967286U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    arr_22 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)113)) : (1917168349)));
                    arr_23 [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) == (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)69)), (max((arr_9 [i_6] [(signed char)19]), (((/* implicit */unsigned char) (_Bool)0)))))))));
                }
            } 
        } 
    } 
}
