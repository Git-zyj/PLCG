/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115847
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
    var_20 &= ((/* implicit */unsigned char) ((int) ((signed char) var_17)));
    var_21 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53991))) : (894538954U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65533)) > (((/* implicit */int) var_5))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) max((var_12), ((unsigned short)11530))))) && (((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 + 2] [i_1 + 2])))));
                var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1850218184)) ? (((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (unsigned short)11539)) : (((/* implicit */int) var_7)))) : (((int) 420192544))))));
                arr_6 [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2642927665U)) ? (((/* implicit */int) ((signed char) arr_0 [i_1 + 1]))) : (((/* implicit */int) (signed char)55))))) ? (((((/* implicit */_Bool) ((short) (unsigned char)125))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)34)) <= (((/* implicit */int) arr_5 [i_1])))))) : (max((4294967281U), (((/* implicit */unsigned int) (signed char)-114)))))) : ((~((-(1652039630U))))));
            }
        } 
    } 
    var_24 ^= ((/* implicit */short) var_14);
}
