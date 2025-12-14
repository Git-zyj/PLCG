/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136828
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
    var_18 = ((/* implicit */unsigned short) ((((int) var_7)) << (((max((((252577125) << (((((/* implicit */int) (unsigned short)15405)) - (15403))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (var_15)))))) - (1010308483)))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_4))));
    var_20 *= ((/* implicit */unsigned long long int) ((short) ((unsigned short) ((((/* implicit */int) (unsigned short)55808)) < (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_13)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)33798))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_22 += ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))) : (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_14))));
                    arr_8 [i_0] = (+(((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)59751)) : (((/* implicit */int) (unsigned char)62)))) << (((((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned char)193)) - (181))))) - (156528632))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) (unsigned char)70);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)155)))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
            {
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_4))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (short)-6138))));
                    arr_18 [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)233)) << (((((/* implicit */int) (short)11673)) - (11664))))))))), ((+(((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    } 
}
