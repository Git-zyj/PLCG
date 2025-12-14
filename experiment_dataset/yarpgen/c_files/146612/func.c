/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146612
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) >= (4194303LL))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1610282298)) ? (((/* implicit */int) (short)30821)) : (var_4)));
                    arr_6 [i_0] [6LL] &= -8841209444131281354LL;
                }
            } 
        } 
        var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_17 -= ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) arr_4 [i_3] [i_3] [i_3])), (max((var_5), (((/* implicit */int) (signed char)-14))))))));
        arr_11 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (min((arr_5 [i_3] [(unsigned short)14] [i_3]), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) var_10)))))))));
    }
    var_18 = 3273595313U;
    var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(var_9))))));
    var_20 += ((((/* implicit */_Bool) (+(((unsigned int) var_12))))) ? (max((((/* implicit */int) ((17270207858121936060ULL) < (((/* implicit */unsigned long long int) var_5))))), (var_2))) : (((/* implicit */int) var_7)));
}
