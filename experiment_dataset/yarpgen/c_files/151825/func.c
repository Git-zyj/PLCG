/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151825
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
    var_14 = ((/* implicit */unsigned short) ((((min((var_2), (var_5))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)48390)) ? (((/* implicit */int) (signed char)0)) : (var_11)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)17145)) : (((/* implicit */int) (unsigned short)19996))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-7)) / (((/* implicit */int) (signed char)69)))))))))));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [7ULL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-14), ((short)-32760)))))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 1709166991U)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (var_0)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (min((((/* implicit */long long int) ((((/* implicit */int) (short)-7)) / (-2147483633)))), (((((/* implicit */_Bool) 30284825)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-14400))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) 2925219498U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22358))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 117440512U)) != (3283250088454938140LL))))))))));
}
