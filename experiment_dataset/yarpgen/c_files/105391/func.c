/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105391
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */signed char) max(((unsigned char)163), (((/* implicit */unsigned char) (_Bool)1))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 281474976710655LL)) ? (((/* implicit */int) (short)-8466)) : (((/* implicit */int) (unsigned char)92))));
                }
            } 
        } 
    } 
    var_20 = max(((+(((((/* implicit */int) (short)30743)) ^ (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                {
                    arr_15 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)127)) ? ((+(((((/* implicit */_Bool) 2082395147)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_10 [i_3] [i_4] [17])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)30743)) : (((/* implicit */int) (_Bool)1))));
                    arr_17 [i_3] [i_4] = ((/* implicit */unsigned short) 5380461833132467293ULL);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned char)90))));
                }
            } 
        } 
    } 
}
