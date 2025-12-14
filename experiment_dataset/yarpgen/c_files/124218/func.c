/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124218
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
    var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)27))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                arr_6 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 10308692U)))));
                var_12 -= ((/* implicit */long long int) ((unsigned char) var_8));
                var_13 = ((/* implicit */unsigned char) var_2);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1 + 1] = arr_3 [i_0] [i_0];
                    arr_11 [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) 3791102895U)), (var_2))) == (((((/* implicit */_Bool) (-(arr_7 [i_0])))) ? (((/* implicit */unsigned long long int) arr_7 [i_1 - 1])) : (max((0ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))))));
                }
                for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    arr_15 [i_0] [i_0] [7ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((12ULL), (var_4)))))) ? (((15ULL) % (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)124)), (var_1)))))) : (max((((/* implicit */unsigned long long int) ((_Bool) var_9))), (var_4)))));
                    var_14 = ((/* implicit */unsigned int) (-(18446744073709551600ULL)));
                    arr_16 [i_0] = (-(((((/* implicit */unsigned long long int) var_3)) * (((var_2) / (var_2))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) var_6)) ? (var_3) : (arr_0 [18U] [i_1]))) >> ((((-(arr_1 [i_1]))) - (1587348175617740988ULL))))) : ((+(arr_0 [i_1 + 1] [i_1]))))))));
                    arr_17 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                }
            }
        } 
    } 
    var_16 = min((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551601ULL))))), (var_3));
}
