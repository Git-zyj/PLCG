/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103939
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) -1241983109476773386LL))));
    var_16 = ((/* implicit */unsigned char) max((var_5), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) ((unsigned short) (((~(-1241983109476773406LL))) % (((/* implicit */long long int) ((((/* implicit */int) (short)-3601)) - (((/* implicit */int) (unsigned short)17005))))))));
                    arr_8 [i_1] &= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (((3047624224U) >> (((((/* implicit */int) (short)-19179)) + (19196))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-19177)) ? (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (var_14)))))) : (min((((/* implicit */int) (short)19178)), (((int) (_Bool)1))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19177))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((+(var_14))) : (var_14)))));
}
