/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181897
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) 3160153659U))));
    var_15 ^= ((/* implicit */unsigned int) (+(((18446744073709551615ULL) + (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) var_3)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)40))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [14U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 17703657379815101474ULL)) || ((_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 13621907676193650522ULL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (signed char)30))))) ? (((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))))) : (((/* implicit */unsigned long long int) (+(528482304))))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) / (max((arr_3 [i_1 - 1] [i_0] [i_1 - 1]), (arr_3 [i_1 - 1] [i_0] [i_1 - 1]))))))));
                }
            } 
        } 
    } 
    var_17 &= (-(((((/* implicit */_Bool) ((unsigned char) var_11))) ? (743086693894450165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) (signed char)33)))))))));
}
