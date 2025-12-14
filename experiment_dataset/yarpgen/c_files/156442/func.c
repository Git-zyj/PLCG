/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156442
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
    var_16 = ((/* implicit */int) 6063375197449807228LL);
    var_17 = ((unsigned long long int) min((var_12), (var_13)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = 6063375197449807228LL;
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -6063375197449807228LL))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_6))))))), (min((((/* implicit */unsigned long long int) min((var_4), (arr_3 [i_1] [i_0 - 3])))), (min((var_14), (((/* implicit */unsigned long long int) (short)-28794)))))))))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) -1152865933))), (((((/* implicit */_Bool) -6063375197449807228LL)) ? (((/* implicit */long long int) -1152865958)) : (2019343485658637142LL)))))) ? (min((-6063375197449807228LL), (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0 + 1])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_4);
    var_20 = ((/* implicit */int) ((((((/* implicit */int) (unsigned short)9208)) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_9)) ? (4294836224U) : (((/* implicit */unsigned int) -1152865913))))));
}
