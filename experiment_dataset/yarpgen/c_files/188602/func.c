/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188602
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
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)25605)) == (((/* implicit */int) (unsigned short)39931)))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((min((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4)))), (var_6))) ? (((/* implicit */int) (unsigned short)39929)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) != (((/* implicit */int) (unsigned short)39929))))));
        arr_5 [i_0 - 1] = ((/* implicit */short) ((long long int) ((((/* implicit */int) (short)21254)) - ((((_Bool)1) ? (((/* implicit */int) var_14)) : (-113712710))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((206430280) / (572155061)))) ? ((+(((long long int) arr_1 [(short)16])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39929)))));
                                var_20 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [22ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))))))) - (((/* implicit */int) arr_12 [i_0] [i_0]))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) || (arr_8 [i_5] [i_5] [i_5] [i_5])));
        arr_20 [i_5] = ((/* implicit */long long int) (unsigned short)8191);
    }
    for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        var_22 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_15))) | (((((/* implicit */long long int) ((/* implicit */int) (short)31656))) & (98875453792646680LL))))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_23 = ((/* implicit */long long int) max((var_23), (var_2)));
    }
    var_24 ^= ((/* implicit */unsigned char) min((var_7), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)12662))))));
    var_25 -= ((/* implicit */unsigned char) min((7940192301080469032LL), (((/* implicit */long long int) var_12))));
}
