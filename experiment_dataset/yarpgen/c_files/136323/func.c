/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136323
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [1U] [1U] = ((/* implicit */unsigned short) var_0);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (+(arr_1 [4]))))) ? (((/* implicit */int) ((short) arr_1 [i_1]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)44);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((int) (_Bool)1));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1202878529U), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) 1335999724)) : (min((((/* implicit */long long int) ((unsigned char) (unsigned char)44))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20245))) + (-16LL)))))));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-28631))) % (min((((/* implicit */unsigned int) -1686822621)), (3336106212U))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12148)) ? (((/* implicit */int) arr_13 [i_4] [i_3 - 1] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_13 [i_1] [i_3 - 1] [i_3] [i_4])))))));
                    }
                } 
            } 
        } 
    }
    var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)62311))));
}
