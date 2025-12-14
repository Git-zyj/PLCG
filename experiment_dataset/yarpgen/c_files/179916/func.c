/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179916
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_8))));
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_6)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) var_2))));
            arr_7 [i_1] = ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */unsigned long long int) 3403982182U)) : (5175592159644492972ULL));
        }
        var_14 = ((/* implicit */unsigned char) var_4);
    }
    var_15 = (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) ^ (-2756182617526341564LL)))) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16900))) : (var_0))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                arr_14 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))) : (((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) arr_12 [i_2])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
}
