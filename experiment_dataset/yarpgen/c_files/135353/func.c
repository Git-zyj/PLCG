/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135353
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
    for (int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_10 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)47733))));
                    arr_6 [i_1] = ((/* implicit */unsigned short) min((26ULL), (((/* implicit */unsigned long long int) (unsigned short)17806))));
                    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 3] [i_2] [2ULL])), (((var_7) - (((/* implicit */unsigned long long int) -1375972792))))));
                    var_12 = ((/* implicit */unsigned int) var_4);
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)17804)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)47711)) != (((/* implicit */int) (unsigned short)47732))))) : (((/* implicit */int) (unsigned short)60614)))) > (((/* implicit */int) var_1))));
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) 8040673089461218145ULL));
}
