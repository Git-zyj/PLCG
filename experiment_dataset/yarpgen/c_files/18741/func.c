/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18741
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
    var_14 &= ((/* implicit */short) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)76))));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [(short)4] [i_2] [10LL] = ((/* implicit */signed char) (short)-1);
                        var_16 = ((/* implicit */unsigned char) (signed char)-52);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((var_6) ^ (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_6))) : (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))))))));
}
