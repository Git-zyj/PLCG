/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130457
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_1] [1ULL] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) < ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1))))))));
                arr_7 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1521835986)) && (((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0]))))), (min((((/* implicit */unsigned int) (short)13037)), (2016164912U)))));
                var_11 = ((/* implicit */signed char) (-((-(8387584U)))));
                arr_8 [i_0] [(short)2] = ((/* implicit */unsigned char) min((min((((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28312))))), ((!(((/* implicit */_Bool) arr_2 [(unsigned char)3])))))), (((4286579698U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))))));
                arr_9 [i_1] = ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) % (arr_1 [i_1] [i_0])))) ? ((+(((/* implicit */int) arr_2 [17ULL])))) : (((((/* implicit */int) (signed char)1)) << (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_9)), (var_3))))) * (((((/* implicit */_Bool) (unsigned char)153)) ? (15677722939211224013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) * (var_7))) - (((/* implicit */unsigned long long int) ((2229258647U) >> (((4286579687U) - (4286579683U))))))))));
}
