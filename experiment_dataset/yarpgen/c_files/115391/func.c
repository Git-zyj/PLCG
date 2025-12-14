/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115391
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((int) -1655343877783701330LL)), (((/* implicit */int) (signed char)-59))))) / (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 1] [i_1 - 2])) ? (arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49)))))));
                arr_5 [6LL] [i_0] [5LL] = ((/* implicit */unsigned char) max(((signed char)-65), ((signed char)56)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (1655343877783701322LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 2]))) ^ (arr_2 [i_1 - 2] [(unsigned char)3] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((((1655343877783701294LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)58))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_18 += ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
}
