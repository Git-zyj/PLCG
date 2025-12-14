/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106557
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
    var_17 = ((/* implicit */int) ((max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_5)))) == ((+(((/* implicit */int) (unsigned char)95))))));
    var_18 = ((/* implicit */short) -2042166999);
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 2042167005)) && (((/* implicit */_Bool) 971895864774102789LL))))), ((~(((/* implicit */int) (unsigned short)385))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (var_11))))) : (min(((-(11148806774849783456ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_16))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) var_2)), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-20983)) : (((/* implicit */int) (short)-20951)))) / (((/* implicit */int) var_2))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((min((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1 + 3])), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))), (min((var_10), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 2])))))))));
                var_22 = ((/* implicit */unsigned long long int) (unsigned short)373);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))) ^ (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_3])) - (min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                                var_24 = ((/* implicit */_Bool) var_10);
                                var_25 = ((/* implicit */_Bool) arr_0 [i_1] [i_2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
