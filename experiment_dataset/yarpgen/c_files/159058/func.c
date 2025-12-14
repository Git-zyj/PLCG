/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159058
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
    var_10 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) var_8)), (var_9)))));
    var_11 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_6)))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (36350)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_12 = (((+(3312214505961821433ULL))) % (((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_0])))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((max((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)29170)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (arr_3 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)246)), (arr_6 [i_0] [i_1])))) ? ((-(((/* implicit */int) var_5)))) : (var_2))))));
                }
                arr_8 [i_0] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
}
