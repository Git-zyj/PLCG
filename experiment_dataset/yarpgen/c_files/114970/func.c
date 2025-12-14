/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114970
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
    var_15 = ((/* implicit */unsigned char) var_14);
    var_16 = ((/* implicit */unsigned short) var_9);
    var_17 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((72293988395660318ULL), (1152921487426977792ULL)));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [2])) ? (arr_0 [14LL]) : (((/* implicit */int) var_2)))))))));
                var_19 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_6)), (var_12)))));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (1152921487426977792ULL) : (arr_2 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [0] [0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [4] [4])) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [10])) && (((/* implicit */_Bool) arr_1 [4ULL] [4ULL])))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_6);
}
