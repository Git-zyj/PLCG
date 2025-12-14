/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180560
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
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))) - ((-(((unsigned int) 4294967295U))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_21 *= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_3] [(short)0] [i_1 - 1] [i_0])) : (((/* implicit */int) (_Bool)1))));
                            var_22 = (!(((/* implicit */_Bool) ((short) arr_4 [i_1] [i_2] [i_4]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) (+(arr_7 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2])));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [12ULL])))));
        }
        var_25 += (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 3643522417581477023ULL)) ? (8877884013592305046ULL) : (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
