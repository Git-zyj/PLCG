/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176390
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) 13870579639904694803ULL);
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-49))))));
        arr_2 [i_0] [(unsigned short)7] = ((((/* implicit */_Bool) ((unsigned short) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6)))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [(_Bool)0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [(short)2] [i_1] = ((/* implicit */long long int) var_16);
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24700)) || (((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)177)))) | (((/* implicit */int) min((arr_4 [i_0] [(signed char)1] [i_1]), (((/* implicit */unsigned char) (_Bool)1))))))))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_1])))) == ((-(((/* implicit */int) (_Bool)1)))))))));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (arr_1 [i_0] [(unsigned short)4])));
        }
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((unsigned long long int) (_Bool)1))))) ? (((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max(((unsigned short)17979), (((/* implicit */unsigned short) (unsigned char)169))))))) : (((var_17) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (unsigned short)51012))))))));
}
