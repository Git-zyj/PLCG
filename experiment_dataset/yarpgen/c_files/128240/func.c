/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128240
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
    var_14 = ((/* implicit */signed char) 2664238058U);
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (0U) : (((/* implicit */unsigned int) 1382093130)))));
        var_16 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)17183))))) ? ((-(2701371296U))) : (((unsigned int) -29293790)))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (12570527576797924114ULL) : ((~(6174284527954837719ULL)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) 2606038217U)))) : ((~(((((/* implicit */_Bool) (short)32737)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0U)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (1023U) : (((/* implicit */unsigned int) -1742047469))))) ? (((unsigned int) 2147483647)) : (4294967292U)));
        var_20 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)127)))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)12625)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-5270)))))))));
        var_22 = ((/* implicit */unsigned int) 5876216496911627518ULL);
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 8; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2 - 1] = (-(3808816839U));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            arr_12 [i_2] [i_3] = (!(((/* implicit */_Bool) 4294967295U)));
            arr_13 [i_2] [6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (5876216496911627501ULL)));
            arr_14 [i_2] [i_3] = ((/* implicit */short) 1246555717U);
        }
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1623924126U)) ? (((/* implicit */int) (unsigned short)2497)) : (((/* implicit */int) (unsigned short)0))));
            var_24 = ((/* implicit */unsigned short) ((unsigned long long int) (short)27629));
            arr_17 [i_4] [i_4] [i_2 - 3] = ((/* implicit */short) (+((-(18446744073709551615ULL)))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((((/* implicit */_Bool) 20ULL)) ? (1593595999U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))))));
        }
    }
}
