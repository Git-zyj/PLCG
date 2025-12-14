/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135731
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
    var_16 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)57027)) * (((/* implicit */int) (unsigned char)0))));
    var_17 = ((/* implicit */int) -5049803759657328982LL);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-101)), ((unsigned char)181)))) < (((/* implicit */int) ((arr_0 [i_0 + 3]) != (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 - 1])))))));
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */signed char) (((~(((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (unsigned char)0)))))) ^ (((/* implicit */int) var_12))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15221)) + (((((/* implicit */_Bool) ((arr_11 [i_1] [i_2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (18446744073709551608ULL)))) ? (((((/* implicit */_Bool) (short)-15222)) ? (((/* implicit */int) arr_14 [i_4] [i_2] [i_3 - 1] [(unsigned short)9] [i_2] [i_1])) : (((/* implicit */int) (signed char)127)))) : ((~(((/* implicit */int) var_13))))))));
                        var_19 ^= ((/* implicit */unsigned long long int) (~(((arr_5 [i_3 - 1] [i_2 + 1]) ? (((/* implicit */int) ((unsigned short) (signed char)127))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24372)) || (((/* implicit */_Bool) (signed char)109)))))))));
                    }
                    arr_18 [i_1] [i_2] = ((/* implicit */short) max(((~(((long long int) var_4)))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 2967437822U)))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64))))))))));
                }
            } 
        } 
    }
}
