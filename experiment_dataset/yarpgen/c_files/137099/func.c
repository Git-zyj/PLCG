/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137099
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((~(var_8))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_1))))))))));
    var_15 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(var_7)))) ? (((var_4) ? (8289544414122027969LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_13)))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((1129193611U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_4))))))) : ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)38)), ((short)(-32767 - 1))))), (((((/* implicit */int) var_6)) << (((var_0) - (3573761934208400988ULL)))))))) && (((/* implicit */_Bool) ((3794920908691021004ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3]))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (unsigned short)12196))));
            }
        } 
    } 
}
