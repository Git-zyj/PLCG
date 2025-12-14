/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16488
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_5 [i_0] [i_0] [i_1] [i_2])))) * (((((/* implicit */long long int) var_7)) / (6799999368649952425LL)))))) - (((((5198817465086432549ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [7U] [i_0]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)119)) * (((/* implicit */int) (unsigned short)36160)))))))));
                    var_11 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) / (((/* implicit */int) var_6)))) * (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) / (((/* implicit */int) var_2))))))) * (((((5198817465086432549ULL) * (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [3U] [i_1] [i_2] [3U]))) / (var_7))))))));
                    var_12 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_8)) << (((/* implicit */int) arr_3 [i_0])))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-29035)) > (((/* implicit */int) (unsigned short)29376))))))) >= (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29375)) && (((/* implicit */_Bool) var_7))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)85)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) - (var_5)))))))) | (((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)254))))))));
}
