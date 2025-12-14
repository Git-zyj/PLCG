/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15089
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (signed char)-60);
                    arr_8 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((signed char) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_8)))))) ? (((((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) arr_5 [(short)17] [(short)17] [(short)17])) : (((/* implicit */int) var_2)))) % ((~(var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) ((arr_4 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))) : (((arr_0 [i_1] [i_0]) << (((arr_3 [1LL] [i_0]) + (1379511538))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_1))));
    var_21 = ((/* implicit */long long int) ((signed char) var_16));
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            {
                var_22 *= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_11 [i_3] [i_4])) == (((unsigned int) var_14))))), (((long long int) (-(var_8))))));
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((31741320U) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_12 [15] [i_4] [(unsigned short)9]))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_4])), (-5LL)))) || (((/* implicit */_Bool) ((long long int) arr_9 [i_3]))))))))));
                arr_15 [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5LL)) ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 2]))) > (((/* implicit */int) ((_Bool) ((_Bool) (signed char)-119))))));
            }
        } 
    } 
}
