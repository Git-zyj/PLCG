/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18732
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2006)) ^ (var_1)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))) : (var_3))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)148))))))))));
        var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((unsigned int) ((((/* implicit */int) (unsigned short)29696)) >> (((var_1) - (1238674522))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                        var_19 = (unsigned char)148;
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)105))));
                    }
                } 
            } 
        } 
        var_21 = var_9;
        var_22 = ((/* implicit */_Bool) (short)18628);
        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 - 2] [i_1] [i_1]), (((/* implicit */short) arr_2 [i_1 + 1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (13426701487147631527ULL))))));
        var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6703)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) != (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))))))));
    }
    var_25 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -622171889)) + (5020042586561920089ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11332267077773521290ULL)) || (((/* implicit */_Bool) (unsigned short)33990)))))) : (min((var_13), (var_13))))));
    var_26 = ((/* implicit */int) var_13);
}
