/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186011
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) (unsigned short)45226);
                    arr_9 [i_0] [(unsigned char)2] [i_2] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)10] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)93))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)20291)))) : ((((_Bool)1) ? (var_5) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)20310))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_1);
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) | (max((((/* implicit */int) (unsigned short)45226)), (var_5)))))) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)45226)) - (45221))))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)29651))))))) : (((int) (-(0U))))));
}
