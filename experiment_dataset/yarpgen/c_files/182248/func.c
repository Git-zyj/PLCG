/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182248
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
    var_11 = ((/* implicit */_Bool) max((var_11), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_6)) : (var_0)))) ? (((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_10))))) : (var_0))))))));
    var_12 = ((/* implicit */long long int) ((max((((/* implicit */int) min((var_5), (var_5)))), (((var_4) % (var_4))))) >= (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_4 [(short)12] = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_0]);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))) << ((((~(arr_1 [i_0] [i_0]))) + (1323832018)))))) ? (var_3) : (((/* implicit */long long int) ((unsigned int) ((var_0) + (((/* implicit */unsigned int) var_8))))))));
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) * ((+(var_3)))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_7))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 - 2])) && (var_5)));
        var_16 -= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_17 [2ULL] [(unsigned char)13] [i_3] [i_4] &= (!(((/* implicit */_Bool) (~(var_6)))));
                        var_17 = ((/* implicit */long long int) arr_10 [7ULL] [2U] [i_4]);
                    }
                } 
            } 
        } 
    }
    var_18 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
}
