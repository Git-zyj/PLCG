/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188291
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((((~(((/* implicit */int) (unsigned char)225)))) - (((int) (unsigned char)31))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [4] [i_1] = ((/* implicit */unsigned long long int) arr_3 [20] [i_0] [i_0]);
                arr_6 [1] [i_0] = ((/* implicit */int) ((unsigned long long int) (((+(((/* implicit */int) var_14)))) < (arr_4 [i_0] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_9 [i_2 - 1] [i_0])));
                            arr_13 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (var_0))) | (18446744073709551615ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned char) ((((var_10) ^ (((/* implicit */unsigned long long int) var_7)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) << (((((/* implicit */int) var_9)) - (102)))))))));
    var_18 &= ((/* implicit */int) var_1);
    var_19 = (-((-(((/* implicit */int) ((_Bool) var_15))))));
}
