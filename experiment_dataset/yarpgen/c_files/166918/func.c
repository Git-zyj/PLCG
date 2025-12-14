/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166918
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
    var_16 = ((/* implicit */int) ((((unsigned int) max((var_2), (((/* implicit */unsigned int) var_4))))) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)103)))) & (((/* implicit */int) var_10)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_2 [(_Bool)1])) : ((~(((/* implicit */int) arr_2 [24ULL]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_2));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1878748026U)) ? (max((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((signed char) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) arr_2 [i_1])))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))));
        var_20 = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1]));
        var_21 = ((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_1])), (arr_4 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */short) ((unsigned char) arr_5 [i_2]))), (arr_4 [i_2])));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_17 [6ULL] [10LL] [i_4] |= ((/* implicit */_Bool) ((unsigned long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_2]))), (((((/* implicit */_Bool) 1288243119U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3006724176U))))));
                    var_23 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)11240))) & (2825084002U))), (((/* implicit */unsigned int) ((unsigned short) var_14)))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((_Bool) (+((+(((/* implicit */int) arr_4 [9])))))));
        arr_18 [9U] [12U] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_9)))))), (arr_5 [(unsigned char)4]));
    }
    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        var_25 *= ((((/* implicit */_Bool) (-(1288243120U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (572074U));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) arr_1 [i_5])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [3U])) ? (var_3) : (((/* implicit */int) var_5)))))))) ? (min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) ((_Bool) arr_21 [i_5]))))) : (((/* implicit */int) ((short) min((((/* implicit */signed char) var_13)), (arr_2 [(signed char)18]))))))))));
        var_27 |= ((/* implicit */unsigned long long int) ((((_Bool) max(((unsigned short)33055), (((/* implicit */unsigned short) var_10))))) ? (arr_1 [i_5 - 1]) : (min((((/* implicit */unsigned int) var_13)), (min((1288243120U), (3006724163U)))))));
    }
}
