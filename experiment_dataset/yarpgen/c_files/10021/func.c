/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10021
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
    var_16 &= ((/* implicit */unsigned long long int) ((int) 3097368690440283832ULL));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_2 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || (((/* implicit */_Bool) arr_2 [i_0 + 1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1])) : (arr_4 [i_1])))) ? (((((/* implicit */_Bool) (short)-16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18)) ? (((/* implicit */int) (short)-43)) : (arr_4 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 1])) && (((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 0LL)))))))));
                arr_9 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_4 [i_0 - 1]))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (short)-5806)) | (224056146)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-39))) : (((((/* implicit */_Bool) (unsigned char)32)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))))))) + (45LL)))));
                var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1182))) - (752257389824424210LL)))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 + 1]))))))));
            }
        } 
    } 
}
