/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112059
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
    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (unsigned short)3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)27750)) : (((/* implicit */int) (unsigned short)27760)))))), (((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) (unsigned short)27750)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27))) : (var_0))))))))));
                arr_6 [i_1] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_11);
    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))), (((/* implicit */unsigned long long int) var_12)))))));
}
