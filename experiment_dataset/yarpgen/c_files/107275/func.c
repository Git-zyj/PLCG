/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107275
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) 2386938281U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_0] [i_0 + 2]) : (arr_4 [(unsigned short)12] [i_0] [i_0 - 2])))) : ((-(0ULL)))));
                    var_12 = ((/* implicit */int) max((((min((var_8), (var_9))) | (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_8 [i_1] [1ULL])) / (((/* implicit */int) var_10))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (unsigned short)49526)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */unsigned long long int) (unsigned short)29265)), (var_6))));
                }
            } 
        } 
    } 
    var_13 = -6065531311816459521LL;
}
