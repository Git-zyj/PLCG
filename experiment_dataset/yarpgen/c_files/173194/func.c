/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173194
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(4294967282U)))) ? (((((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (var_4))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14))))) : ((~(((var_4) + (var_14)))))));
    var_18 = ((/* implicit */unsigned long long int) ((var_7) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_2] [i_1] [i_0]))));
                    arr_7 [i_0] [6U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)177)) - (170))))), (((((/* implicit */int) arr_2 [(_Bool)1] [i_1] [(_Bool)1])) << (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)3])) : ((+((-(((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)1]))))))));
                }
            } 
        } 
    } 
}
