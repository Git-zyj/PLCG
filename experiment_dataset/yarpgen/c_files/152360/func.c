/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152360
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */int) ((min((((((var_3) + (9223372036854775807LL))) >> (((/* implicit */int) var_6)))), (var_4))) / (((/* implicit */long long int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) var_9)))))));
                        arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (((((~((~(var_3))))) + (9223372036854775807LL))) >> ((((-((~(4194304U))))) - (4194267U)))));
                        arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 1900010334))))) - (((((var_5) + (2147483647))) >> (((((/* implicit */int) var_8)) - (87))))))) <= ((~(((/* implicit */int) max(((unsigned char)199), ((unsigned char)53))))))));
                        var_11 = ((/* implicit */unsigned int) var_2);
                        var_12 = ((/* implicit */unsigned int) ((var_0) - (((((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) var_7))))) | (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_1)))))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((9111885503638741791LL) - (((/* implicit */long long int) 4194295U))))))))));
    }
    var_13 = ((/* implicit */long long int) var_5);
}
