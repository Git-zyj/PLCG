/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135757
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) var_7);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_19 = arr_4 [i_0];
                        arr_13 [i_2] [i_1] [i_2] [i_3] = ((short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)17]))))), (max((2360074019U), (((/* implicit */unsigned int) (unsigned char)226))))));
                        var_20 = ((short) max((((/* implicit */unsigned int) arr_2 [i_3])), (arr_5 [i_0])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 4) 
    {
        var_21 *= ((/* implicit */unsigned int) var_1);
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            var_22 = var_16;
            arr_19 [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) || (((/* implicit */_Bool) arr_2 [i_4])))))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_23 += ((/* implicit */long long int) ((((unsigned int) var_17)) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_6])))))));
            arr_24 [i_4] [i_4] = arr_11 [i_6] [i_6] [i_6] [i_6];
            var_24 *= ((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 - 2] [i_4 + 1]);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)223)))))));
            var_26 = ((/* implicit */short) (+((+(2046U)))));
        }
        arr_25 [i_4] = ((/* implicit */short) var_3);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_27 += ((/* implicit */_Bool) arr_1 [i_7]);
        arr_28 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) != (((/* implicit */int) min((var_8), (((/* implicit */short) var_16)))))));
}
