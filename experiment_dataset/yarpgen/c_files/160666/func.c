/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160666
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_0)))) ? (((unsigned int) (~(((/* implicit */int) (unsigned short)45535))))) : (((/* implicit */unsigned int) var_6)))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) & (((unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
    var_13 = ((/* implicit */int) var_10);
    var_14 = ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)45535))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(arr_8 [i_0])))) : (((int) (unsigned short)20001))));
                    arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) ((_Bool) ((short) ((_Bool) arr_0 [i_1]))));
                }
            } 
        } 
    } 
}
