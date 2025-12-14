/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154083
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
    var_11 = ((/* implicit */unsigned int) var_10);
    var_12 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((int) var_2)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_13 *= ((/* implicit */_Bool) var_9);
        var_14 = ((/* implicit */_Bool) ((unsigned int) ((long long int) (-(((/* implicit */int) var_9))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1637939237U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4698))) : (10597974955918772367ULL)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((int) var_9)))));
        var_16 = ((/* implicit */signed char) (_Bool)1);
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1112682868922407084LL)) ? (((/* implicit */int) (short)16786)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1]))))) : (((unsigned long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((unsigned short) arr_10 [i_2 + 4]));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15))) | (arr_17 [i_4 + 1] [i_3] [i_4 + 1] [(unsigned char)0]))))));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_2 + 2] [i_2 + 3] [i_2 + 2]))));
                    arr_18 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14640799971574292986ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 700856811U)))) : (arr_4 [i_2 + 2])));
                }
            } 
        } 
    }
}
