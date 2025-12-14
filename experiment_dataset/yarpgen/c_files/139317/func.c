/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139317
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
    var_12 = ((/* implicit */int) ((((min((2102467881U), (2192499419U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_13 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 2192499435U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) (+(((/* implicit */int) min((min((arr_2 [i_1] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned short) (_Bool)0)))), ((unsigned short)13))))));
                arr_5 [i_1] [i_1] [4U] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2])) : ((-2147483647 - 1))))), (min((2192499402U), (((/* implicit */unsigned int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 2])))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((arr_1 [i_0 - 2] [i_0 - 2]) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_1]) : (((/* implicit */long long int) (-2147483647 - 1)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50663)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)85))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))) : ((~(3227111079508865767LL)))))));
                var_16 = ((((/* implicit */unsigned long long int) ((int) 2102467861U))) == (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)4)), (3227111079508865784LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41746))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2192499414U)))))));
            }
        } 
    } 
}
