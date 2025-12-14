/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128553
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
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) -8969609902519617647LL)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) ((_Bool) (unsigned char)52))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (unsigned char)194)))))));
                    var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (arr_6 [0LL] [i_1])))) : (((unsigned long long int) (short)-27947))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)56358)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) ((arr_7 [i_1] [i_2] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) 2536415344929535070LL))), (min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_14 = max((var_0), (((/* implicit */long long int) (unsigned char)190)));
}
