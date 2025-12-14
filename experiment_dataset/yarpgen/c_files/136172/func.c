/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136172
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (~(var_9))));
        arr_2 [4ULL] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [(unsigned char)3]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_1])) * (((/* implicit */int) var_16))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) var_8);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_12)))) ? ((+(((/* implicit */int) (signed char)-71)))) : (((((/* implicit */int) arr_11 [i_1] [i_1] [i_4] [i_1])) % (((/* implicit */int) arr_3 [i_3]))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 20LL))));
                        arr_16 [i_1] [i_2] = ((/* implicit */_Bool) ((var_19) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_1 [i_1] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5])) ? (((unsigned long long int) (signed char)42)) : (((/* implicit */unsigned long long int) ((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5]))))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) (signed char)42);
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) (short)-29534);
    }
    var_22 = 121205104U;
    var_23 = ((/* implicit */unsigned short) var_17);
}
