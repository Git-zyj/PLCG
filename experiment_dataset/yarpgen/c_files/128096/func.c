/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128096
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] &= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))), (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_12 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20238))))) ? (((((/* implicit */unsigned long long int) var_10)) ^ (((var_6) << (((((/* implicit */int) (unsigned short)5588)) - (5548))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_6))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) var_4))))) ? (var_2) : (((/* implicit */int) var_0))))));
                    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_4)), (2147483635)))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 462178519U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1374025780U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (((unsigned int) var_7))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_2))), ((~(var_2))))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */short) (_Bool)0)))))))) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_8)) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((((_Bool)0) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)16957))))))) : (((/* implicit */long long int) min((((((var_2) + (2147483647))) >> (((/* implicit */int) (short)0)))), (((/* implicit */int) min((var_9), (((/* implicit */short) (unsigned char)165))))))))));
}
