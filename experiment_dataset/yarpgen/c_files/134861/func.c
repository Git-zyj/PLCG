/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134861
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
    var_11 = ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((unsigned char)90), ((unsigned char)101))))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (-21)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_10)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_13 += ((/* implicit */_Bool) var_7);
                        var_14 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) (_Bool)1)));
                        arr_12 [i_0] [i_1] [i_3] [i_3 - 1] = 3670016ULL;
                        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (var_2)))));
                        var_16 = ((/* implicit */_Bool) var_7);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_16 [i_0 + 4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) var_3);
                        var_17 = ((/* implicit */long long int) (unsigned char)89);
                    }
                    /* vectorizable */
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) (short)28908);
                        var_19 = ((/* implicit */int) 18LL);
                    }
                }
            } 
        } 
    } 
}
