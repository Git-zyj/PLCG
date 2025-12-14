/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171380
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2]);
        arr_4 [(unsigned char)1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned char) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) ^ (-4401593165911566165LL)));
                        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1 + 1] [i_4] [19] [(unsigned char)9])) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_1] [i_4] [i_1] [i_1]))))))) | (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_14 [i_1 - 1] [i_4] [i_1] [i_1]))))) ? (((arr_12 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_24 [i_5]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-9430))) & (4401593165911566164LL))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) var_10))))))))));
                                var_18 += ((/* implicit */unsigned long long int) ((short) ((unsigned int) arr_9 [i_8] [i_6 + 3])));
                            }
                        } 
                    } 
                    arr_27 [i_6 + 3] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_5] [i_6] [i_1])) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [14] [(unsigned char)6]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((((~(arr_7 [i_1]))) % (((/* implicit */unsigned long long int) arr_8 [i_5] [i_6 + 3])))) : (((unsigned long long int) var_10))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_1 + 1]))));
    }
    for (int i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) arr_22 [i_9] [i_9] [i_9] [i_9]);
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (_Bool)1))));
    }
    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((~(max((((/* implicit */unsigned int) var_8)), (var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
}
