/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14976
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4311)) || (((/* implicit */_Bool) max((var_2), (((/* implicit */short) var_13)))))))), ((((((~(((/* implicit */int) var_3)))) + (2147483647))) >> (((((/* implicit */int) ((short) (unsigned short)61440))) + (4124)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (unsigned short)5682)) : (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0]))));
                var_18 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) / (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned short)46054))));
            }
        } 
    } 
}
