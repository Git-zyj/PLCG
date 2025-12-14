/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167812
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [1] [1] [1] = ((((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)0)))), (766502248)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) var_11)) : (-4358956670101906565LL))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1360212274225921977LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-1360212274225921974LL) : (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_7) : (-612480396)))) : (((((/* implicit */_Bool) arr_2 [9] [9] [9])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [1LL] [1LL])) : (8678220198342941914ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [(unsigned char)11] [i_1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
    var_21 ^= ((/* implicit */unsigned char) (+((-((+(var_6)))))));
}
