/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167931
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
    var_20 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_15)) ? (-1571455241) : (((/* implicit */int) var_1)))) & (var_5))), (((1571455240) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (-1020145448339104703LL))))))));
    var_21 = ((/* implicit */unsigned long long int) ((1571455240) == (((/* implicit */int) (signed char)85))));
    var_22 = ((/* implicit */unsigned int) ((-1571455223) >= (var_4)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [(signed char)2] [(_Bool)1] [(signed char)2] |= ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) var_14)) ? (2867478379U) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (var_0)))) ? (-428161386) : (((int) var_15))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_0 [i_0 - 1] [i_0 - 1])))));
                arr_7 [i_0] [i_1] [7ULL] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned long long int) var_5)) - (9632701274938895890ULL))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned short) var_12))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            }
        } 
    } 
}
