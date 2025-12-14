/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160838
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
    var_13 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_8)))), (((((/* implicit */int) var_9)) << (((/* implicit */int) var_7))))));
    var_14 = ((/* implicit */short) ((int) (signed char)-103));
    var_15 = ((/* implicit */int) ((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) max(((_Bool)1), (var_7)))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (var_6))))) : ((~(((unsigned long long int) (short)2625))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_17 = (!(((/* implicit */_Bool) 734531684U)));
                        var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0])) * (((/* implicit */int) (short)-32757)))));
                        arr_12 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-99)) & (-1656708788)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-32753))))));
                        arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        arr_14 [i_0 + 1] = ((/* implicit */short) ((((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 - 1])))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)87))));
        var_19 = ((/* implicit */short) ((long long int) ((long long int) (short)0)));
    }
}
