/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128217
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
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)123))))));
        var_20 *= ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_1 [i_0]));
        arr_2 [(unsigned char)1] = ((/* implicit */signed char) max((min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0 + 3])))), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-6)) >= (arr_0 [i_2]))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_12))))))), ((+(max((var_2), (((/* implicit */unsigned int) var_5))))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_4 [(unsigned char)9] [i_1] [i_2])))), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]))))))))) : (var_2)));
                    arr_9 [20ULL] [i_1] [20ULL] = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 3])), (arr_1 [i_0 - 3])))), (((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */int) var_4))))) ? (var_7) : (((/* implicit */long long int) arr_1 [14U]))))));
                    arr_10 [(unsigned char)8] [i_1] [i_2] = ((/* implicit */long long int) max((max((min((arr_5 [i_0 - 2] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [22] [i_1] [i_0])) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_0 [i_0 + 1])), (arr_1 [i_1]))), (((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_0] [i_0])))))));
                }
            } 
        } 
    }
    for (short i_3 = 4; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_22 *= ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)133)), (264949990)));
        var_23 = max((((/* implicit */unsigned char) arr_12 [(short)10])), (arr_3 [i_3] [i_3] [i_3]));
    }
    var_24 = ((/* implicit */unsigned char) var_3);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (var_1)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_11))))))));
}
