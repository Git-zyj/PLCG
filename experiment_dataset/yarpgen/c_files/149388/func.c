/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149388
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
    var_16 = ((/* implicit */short) var_7);
    var_17 = ((/* implicit */signed char) (unsigned char)111);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((unsigned short) ((signed char) var_1));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((signed char) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) var_5)) == (var_12))));
                }
            } 
        } 
        var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)64)) ? (((/* implicit */int) var_14)) : (-142631971)))) + (arr_5 [i_0] [i_0] [(_Bool)1] [i_0])));
    }
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */_Bool) var_0);
        var_22 *= ((/* implicit */int) var_10);
    }
    for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((min((((/* implicit */int) ((((/* implicit */int) (signed char)-42)) == (((/* implicit */int) (short)-16756))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) var_0)))))) / (min((var_9), (((/* implicit */int) ((unsigned char) (unsigned char)115))))))))));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) (short)32760);
    }
}
