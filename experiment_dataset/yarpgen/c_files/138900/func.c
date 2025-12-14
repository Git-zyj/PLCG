/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138900
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_1 [(_Bool)1]))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)78)), (((unsigned long long int) ((var_2) - (((/* implicit */unsigned int) arr_2 [(signed char)4]))))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_5 [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) var_5)))))))), (arr_8 [i_0] [i_1 + 3] [i_2] [i_3])));
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))))) < (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_2] [(unsigned char)5])))))))), (arr_0 [i_0 - 2])));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_0 - 2]) * (arr_4 [i_0 - 1])))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_5 [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) var_12))))) : (arr_6 [i_0] [i_1] [i_1] [i_3]))))));
                        var_23 = ((/* implicit */unsigned int) min((((unsigned short) ((signed char) arr_5 [i_1] [i_0]))), (((/* implicit */unsigned short) var_5))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_8 [(signed char)4] [i_0 - 1] [i_0] [i_0])))));
    }
    var_25 = ((/* implicit */unsigned short) var_8);
}
