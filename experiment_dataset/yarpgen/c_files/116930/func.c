/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116930
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
    var_19 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = (+(((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))));
                    arr_6 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) var_11);
                    var_21 = ((/* implicit */long long int) (signed char)99);
                    arr_7 [i_1] [(unsigned char)1] = ((/* implicit */signed char) var_18);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (-1448253379) : (var_8)))) < (max((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)1)))))))));
                        var_22 = ((/* implicit */unsigned long long int) min(((~(arr_4 [i_0 + 1] [13LL] [i_2]))), ((+(arr_4 [i_0 - 1] [i_0 - 1] [i_2])))));
                    }
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) (~(3993032172U)));
    }
    var_23 = ((/* implicit */unsigned long long int) var_7);
}
