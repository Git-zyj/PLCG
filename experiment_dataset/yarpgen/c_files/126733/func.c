/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126733
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) : (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((var_6) & (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(signed char)10] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0] [20LL] [20LL])))) >= ((~(arr_0 [i_0]))))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-85)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_2 [i_0] [i_1])), ((signed char)42)))) ? (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))))) : (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)-85))))))))));
            }
        } 
    } 
}
