/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154320
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
    var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_7)) : ((~((~(((/* implicit */int) var_0))))))))));
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)205))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_13 = (-(((((/* implicit */_Bool) ((1734524252) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (var_2) : (((/* implicit */int) var_3)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */unsigned int) -1)) / (2080393489U)));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 2214573806U)) ? (((/* implicit */long long int) arr_0 [i_1])) : (arr_5 [i_0]))));
        }
        var_14 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_8 [i_0] [i_0] = ((((((/* implicit */int) var_3)) & ((~(((/* implicit */int) arr_3 [i_0] [i_0])))))) / ((((((~(((/* implicit */int) (unsigned char)68)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2 + 1]))))) * (var_1)));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((long long int) (+(((/* implicit */int) (unsigned char)65))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2 + 1])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) max((((/* implicit */short) arr_3 [i_2 + 1] [i_2 + 1])), ((short)25))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */signed char) var_7);
        var_18 ^= ((/* implicit */unsigned char) arr_0 [i_3]);
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), ((-((-(min((((/* implicit */unsigned int) -14)), (3211511521U)))))))));
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)20))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((_Bool) var_6))))) : (((long long int) var_9))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [i_4]))));
                    arr_22 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (~(0)));
                }
            } 
        } 
        arr_23 [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_4])), (4074150189U)));
    }
}
