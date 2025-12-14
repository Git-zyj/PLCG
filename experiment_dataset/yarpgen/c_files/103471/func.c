/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103471
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) var_11)))));
    var_21 = ((/* implicit */unsigned char) ((unsigned int) var_10));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((960) % (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_23 = ((/* implicit */short) arr_1 [(_Bool)1]);
        var_24 = ((/* implicit */_Bool) arr_2 [2LL] [i_0]);
        var_25 = ((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5)))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_17)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((1286572380019444216ULL) >> (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_5 [i_1]))));
        /* LoopNest 3 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((/* implicit */long long int) var_6)) % (arr_13 [i_2]))) == (arr_13 [i_1]))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((var_2) != (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 - 2]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))));
        var_29 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (_Bool)1))))) : (var_7)));
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        var_30 -= ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) (short)-6))), (arr_16 [i_5]))));
        arr_17 [i_5] = ((/* implicit */unsigned long long int) ((-9215775935944694204LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5]) : (arr_15 [i_5]))))));
    }
}
