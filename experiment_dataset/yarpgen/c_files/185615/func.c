/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185615
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_19 ^= ((((/* implicit */int) max(((signed char)84), ((signed char)84)))) >> (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])));
                    var_20 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) (signed char)84)))) ? (arr_6 [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1 + 2] [i_1 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(arr_1 [(unsigned char)9] [(unsigned char)9])))) << (((-1LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57068))))))))));
                    var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) (signed char)84)), ((+(((/* implicit */int) var_9))))))));
                }
                var_22 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1 + 3] [i_1 + 4] [i_1 + 4]) : (arr_3 [i_1 + 2] [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)84)))))) : ((((+(((/* implicit */int) (signed char)71)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_24 = var_13;
}
