/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135197
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((max((((unsigned int) arr_2 [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [5ULL])) / (((/* implicit */int) (signed char)-7)))))));
                var_15 = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)23614)) == (((/* implicit */int) (short)-28990)))), ((!(((arr_5 [i_1] [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-2)))))))));
                var_16 |= ((/* implicit */_Bool) (~(arr_4 [i_1] [(signed char)10])));
                arr_6 [i_0] [i_0] [i_1 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_9))) < (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) == ((~(((/* implicit */int) (_Bool)1)))))))));
                var_17 = (signed char)28;
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((var_5) - (((((/* implicit */_Bool) var_3)) ? (var_12) : (var_10))))), (max(((-(var_10))), (var_9)))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_7))) <= (min((359504958U), (((/* implicit */unsigned int) (short)28984))))))), ((unsigned short)41930)));
}
