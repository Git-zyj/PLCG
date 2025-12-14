/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104566
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
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-15349))))), (var_8))) <= (((/* implicit */int) var_5))));
    var_19 = (+(var_8));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((long long int) 697085122))))) ? (((((/* implicit */_Bool) (~(-617336811)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)94)) * (((/* implicit */int) (_Bool)0))))) : (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [(_Bool)1])))))) : (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8294652665490107871LL)) ? (((/* implicit */int) (_Bool)1)) : (-1253935141)));
                var_21 = ((/* implicit */int) min((var_21), ((((!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_0 - 1])))) ? (-1500277742) : (-370601185)))));
            }
        } 
    } 
}
