/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189539
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */long long int) (+(arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)0)) * (((635797535) >> (((/* implicit */int) var_1))))))));
                                var_16 = ((/* implicit */unsigned int) (short)-20202);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (short)-17);
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])) == (var_12)))))) ^ (((((/* implicit */_Bool) min((var_0), (10117288938841930604ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (arr_8 [i_0] [i_0] [i_0] [i_2 - 1]))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((short)-1), ((short)-4)))), (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_0] [2])))))))));
        arr_18 [i_0] = (!(max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)6]))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) (short)32767);
        arr_22 [i_5] [i_5] = var_13;
    }
    var_20 = ((/* implicit */unsigned int) (unsigned char)255);
    var_21 = ((/* implicit */unsigned int) var_11);
    var_22 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))));
}
