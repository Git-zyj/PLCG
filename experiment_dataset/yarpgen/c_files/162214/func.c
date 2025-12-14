/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162214
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)2601))))) ? (((/* implicit */int) ((var_1) <= (((((/* implicit */_Bool) 2281267225U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12288))))))) : ((((_Bool)1) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-1)))) : (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2789985152U)));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-4294)) ^ (((/* implicit */int) (_Bool)1))))) ? (((2789985144U) * (((/* implicit */unsigned int) 16777215)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))))));
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) != (((((/* implicit */_Bool) var_14)) ? (1638280743U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) min((1162309599U), (1638280757U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (unsigned short)48539)) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) + (arr_3 [i_1])));
        var_21 *= ((/* implicit */unsigned int) (signed char)-5);
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_10 [i_1] [8U] [i_3] [i_4] [i_2]))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned short)14084))));
                        var_24 = ((/* implicit */short) max((((max((-347896555), (((/* implicit */int) (short)12132)))) ^ (((/* implicit */int) arr_7 [7U] [i_3])))), (((/* implicit */int) arr_8 [i_2] [i_2] [i_3]))));
                        arr_13 [i_1] [i_4] [i_3] [i_4] = ((/* implicit */short) (-(2656686553U)));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) min(((+(536870911U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 172944844U)))))));
    }
    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        arr_18 [i_5] = (~((+(arr_15 [i_5 - 1]))));
        arr_19 [i_5] = (!(((/* implicit */_Bool) ((arr_14 [i_5 + 1]) ? ((((_Bool)1) ? (arr_16 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))) : (((((/* implicit */unsigned int) var_1)) / (arr_16 [i_5 + 1] [i_5])))))));
    }
}
