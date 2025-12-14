/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139366
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 &= ((/* implicit */short) (~(((((/* implicit */int) arr_6 [(signed char)8] [i_1] [i_1 - 2])) << (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1 - 2])) - (30849)))))));
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26057))) - (arr_7 [i_0] [i_1 - 2])))), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-8)) && (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1]))))))))));
                    var_12 += ((/* implicit */short) ((signed char) (-(((((/* implicit */_Bool) -3125880147041000331LL)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_7 [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_9)))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)-4096)) ? (6592651323477980499LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)89))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-4096))))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)-4080))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)16822))) : (((min((var_8), (((/* implicit */long long int) var_2)))) ^ (((/* implicit */long long int) var_6))))));
}
