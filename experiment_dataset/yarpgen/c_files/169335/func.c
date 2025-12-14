/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169335
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
    var_11 -= ((/* implicit */unsigned short) var_3);
    var_12 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned short) var_3)), (max((var_6), (((/* implicit */unsigned short) var_4)))))));
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)214))));
    var_14 = ((/* implicit */unsigned short) min(((unsigned char)197), ((unsigned char)255)));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) & ((~(var_8)))));
                    var_16 = ((/* implicit */signed char) (+(((unsigned long long int) (unsigned char)0))));
                    arr_10 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned long long int) (unsigned char)36)), ((~(6663177013503693465ULL)))))));
                }
            } 
        } 
    } 
}
