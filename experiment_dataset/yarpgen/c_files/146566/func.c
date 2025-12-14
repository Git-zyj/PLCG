/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146566
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) (short)29645)) - (((/* implicit */int) (unsigned short)46500)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 11169315804860869542ULL)))))))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)29636)) || (((/* implicit */_Bool) (~(1146318016425449862LL)))))))));
                                var_17 = ((/* implicit */long long int) (((((~(arr_11 [1] [i_3] [i_2 - 1] [(short)8] [i_0] [1ULL]))) + (2147483647))) >> (((((((/* implicit */_Bool) -757633369)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10948))) : (14088281261271265019ULL))) - (10923ULL)))));
                                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_2 - 1])) / (arr_3 [i_1] [i_2 - 2] [i_3 - 1]))) / (((min((arr_3 [0LL] [i_1] [i_0]), (((/* implicit */int) var_9)))) / ((-(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [3] [3] [3] = (((+(((/* implicit */int) var_5)))) * (((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_8))), ((!(((/* implicit */_Bool) var_13))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */short) var_5))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (var_14)))) : (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_20 *= ((/* implicit */unsigned int) var_11);
}
