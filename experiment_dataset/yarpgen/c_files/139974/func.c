/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139974
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (!((_Bool)0))))))) ? ((~(995174738U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [i_2]), (((/* implicit */unsigned int) (short)-4)))))))))));
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (-(arr_2 [i_2])))) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)19220)) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)32))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_1))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_6 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                }
            } 
        } 
    } 
    var_13 -= min((((((/* implicit */_Bool) ((16269564536144032899ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned int) var_7)), (3123764489U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_9)));
    var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-53))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -3997151448346369850LL)))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (3997151448346369847LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_5))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_4)))))))));
}
