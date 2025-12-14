/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108206
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) var_18);
        var_21 = ((/* implicit */int) (+(((long long int) (short)-4137))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(short)12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)));
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_22 += ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4147)) ? (((/* implicit */int) (short)16583)) : (((/* implicit */int) (unsigned char)250))))) ? (var_16) : (((/* implicit */int) (short)4136))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) var_3);
                        arr_14 [i_1] [i_1] [7ULL] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_10)) : (var_17))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-4137)) : (var_8))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (var_1)))))) + (2147483647))) >> (((((/* implicit */int) var_6)) + (21751)))));
}
