/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165746
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
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-112))))) >> (((((/* implicit */int) (signed char)-4)) + (4))))))))));
                var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) var_4)))) ? (arr_5 [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((738656727) >= (((((/* implicit */_Bool) (short)-16572)) ? (((/* implicit */int) (signed char)112)) : (-1329874419)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) min((min((var_10), (((/* implicit */unsigned short) var_2)))), (((/* implicit */unsigned short) var_9)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (signed char)-112))))) | (min((11704572541551983947ULL), (((/* implicit */unsigned long long int) (signed char)79)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 9007061815787520LL)))) / ((~(9584275560034579239ULL))))))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_2)) : (var_1)));
}
