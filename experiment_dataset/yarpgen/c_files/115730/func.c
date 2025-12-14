/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115730
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
    var_13 ^= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) var_12)), (var_10))), (0ULL))) >> (((/* implicit */int) ((unsigned char) arr_2 [i_0 - 2])))));
        var_14 ^= ((/* implicit */int) (!((!((!(((/* implicit */_Bool) 31LL))))))));
        var_15 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_0 [i_0 - 3])))), (max((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) 0ULL))))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_5 [i_1])))) && ((!(((/* implicit */_Bool) -1926326673))))));
        var_17 &= ((/* implicit */long long int) max((18446744073709551602ULL), (((/* implicit */unsigned long long int) (unsigned char)32))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] &= ((/* implicit */unsigned short) ((18446744073709551595ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_12 [i_2] [i_3] [i_3]))))));
            arr_15 [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_8))))))))));
            var_18 = ((/* implicit */long long int) min((var_18), ((~((-(5061630211457425862LL)))))));
            arr_16 [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) min((7ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -8987456958995425932LL))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_19 [i_4] = ((/* implicit */long long int) (~(max((arr_17 [i_4]), (((/* implicit */unsigned int) arr_9 [i_2]))))));
            var_20 = ((/* implicit */int) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))), (arr_17 [i_2]))), (((/* implicit */unsigned int) (_Bool)0))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) arr_12 [i_2] [i_5] [i_5]);
            var_22 *= ((/* implicit */unsigned char) (signed char)14);
        }
        var_23 = ((/* implicit */int) max((max((18446744073709551579ULL), (((/* implicit */unsigned long long int) arr_13 [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))));
    }
}
