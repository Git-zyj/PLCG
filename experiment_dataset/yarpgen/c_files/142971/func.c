/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142971
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
    var_10 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) (unsigned char)0)) ? (var_1) : (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((unsigned short) (signed char)-106);
                    arr_9 [i_1] [i_0] [8LL] [i_2] = ((/* implicit */short) ((unsigned long long int) (unsigned char)227));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((91571508U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) / (max((var_7), (((/* implicit */unsigned long long int) 862819016U)))))), (((/* implicit */unsigned long long int) (((~(var_3))) % (((/* implicit */long long int) ((/* implicit */int) (short)-14350))))))));
}
