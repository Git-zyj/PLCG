/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176300
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_1))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) | (((/* implicit */long long int) ((((/* implicit */int) (short)496)) & (var_7))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] &= ((/* implicit */unsigned short) var_4);
                        arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [(unsigned char)10] = ((var_2) << (((/* implicit */int) (!(((arr_5 [i_3] [i_1] [i_2]) < (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_2] [i_2]))))))));
                    }
                } 
            } 
            var_13 -= ((/* implicit */_Bool) var_5);
        }
        arr_15 [i_0] [i_0] = ((/* implicit */int) var_2);
        arr_16 [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)496)) == (((/* implicit */int) (unsigned short)60290)))) ? (1499555020) : (1499555020)));
    }
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        var_14 = ((/* implicit */signed char) var_6);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_19 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60294))) == (var_4)))) : (var_8))) >> (((/* implicit */int) (!((_Bool)1)))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_5);
}
