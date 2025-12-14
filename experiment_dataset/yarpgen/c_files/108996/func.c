/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108996
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
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1949818869)) ? (-1949818869) : (1949818868)))));
    var_19 = ((/* implicit */short) 1949818869);
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1949818870)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((+(var_3)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15516))))) : ((-(min((((/* implicit */unsigned long long int) (unsigned short)26898)), (5927048152552782163ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */_Bool) ((unsigned char) max((((unsigned long long int) (unsigned char)0)), (var_3))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned short) 13ULL)))));
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))) ^ (min((((/* implicit */unsigned long long int) ((short) 5927048152552782175ULL))), (max((4355453071521940455ULL), (arr_4 [i_0] [i_0])))))));
                arr_7 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) min((((unsigned long long int) ((arr_4 [(unsigned short)21] [i_1]) >> (((((/* implicit */int) arr_3 [i_0])) + (21503)))))), (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0])))))))))) : (((/* implicit */unsigned char) min((((unsigned long long int) ((arr_4 [(unsigned short)21] [i_1]) >> (((((((/* implicit */int) arr_3 [i_0])) + (21503))) + (96)))))), (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))))))));
            }
        } 
    } 
}
