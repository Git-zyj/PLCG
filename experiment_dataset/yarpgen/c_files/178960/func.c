/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178960
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (330888359) : (arr_3 [i_2])))) ? ((-(((/* implicit */int) arr_1 [i_1])))) : ((+(arr_3 [i_1 - 2])))));
                    var_12 = ((/* implicit */int) min((var_12), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((arr_2 [i_0] [i_1 - 1]), (((/* implicit */short) var_4)))))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((var_1), (((/* implicit */unsigned long long int) var_10)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3302163334029654024ULL)))) ? (max((2147483647), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_5 [i_0])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_8);
    var_14 = ((/* implicit */unsigned short) var_1);
}
