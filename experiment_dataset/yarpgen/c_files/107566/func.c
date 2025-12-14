/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107566
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
    var_11 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (min((var_3), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_1)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (-1)))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_7)))), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [(unsigned char)16] [i_1] = ((/* implicit */long long int) ((int) (_Bool)1));
                    var_14 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [(short)3] = ((/* implicit */unsigned int) ((min((691046066U), (((/* implicit */unsigned int) (_Bool)1)))) >= (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13341)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_18 [i_0] [18] [i_0] [18] [i_1] [18] [i_0] = ((/* implicit */unsigned char) ((short) (((+(((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_3])))) << (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1] [i_1])))) + (74))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 -= ((/* implicit */_Bool) (+((+(var_9)))));
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_12 [i_5] [(_Bool)1] [i_5] [i_5] [i_5])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4503599627370495ULL)) ? (21) : (1374641389)))), (var_0)))));
    }
    var_17 = ((/* implicit */unsigned char) var_10);
    var_18 = var_9;
}
