/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186529
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
    var_18 = ((/* implicit */short) ((var_16) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned long long int) min((458828493), (((/* implicit */int) (unsigned short)4417))))))))));
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_0 [i_0 - 1])))))) >= (min((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) / (var_13))), (((/* implicit */long long int) 2818167059U))))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)8732), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_8)))))))) : (((arr_4 [i_0] [i_1] [i_1]) * (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
                arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) var_5);
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0)))) || (((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_1 [i_0])))))))) >= (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) >= (arr_4 [i_1] [i_1] [i_0]))))))));
                arr_11 [i_1] = ((/* implicit */short) var_8);
            }
        } 
    } 
}
