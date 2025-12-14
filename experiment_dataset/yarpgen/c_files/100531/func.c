/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100531
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
    var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)74)))) == (((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) (((~(2285030076285909274LL))) % (max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54022)) ? (((/* implicit */int) (unsigned short)34070)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])))))))));
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -212858137)) ? (max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)208)))), ((-(0U))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)60631)) ? (((/* implicit */int) (_Bool)0)) : (212858141))))))));
                }
            } 
        } 
    } 
}
