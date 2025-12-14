/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179201
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */short) (~(((((_Bool) var_1)) ? (((/* implicit */int) (short)13267)) : (((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (var_3)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) var_1))))), (max((17862079548027224533ULL), (arr_0 [i_0 + 2])))));
        var_15 = ((/* implicit */_Bool) var_10);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1] [i_0 - 1])))) : (((unsigned long long int) arr_2 [i_0 - 1]))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_0)))) || ((!(((/* implicit */_Bool) (unsigned short)57359))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1]))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((584664525682327083ULL) << (((var_8) - (3278911732U))))), (((/* implicit */unsigned long long int) ((_Bool) var_2)))))) ? (min((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_6))))), (((17862079548027224554ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31747))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2703)))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))) : (min((((/* implicit */long long int) var_2)), (var_10)))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_1)))))));
                    var_18 *= ((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_2 + 1]);
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned int) ((_Bool) 1738066876U));
        var_19 *= ((/* implicit */long long int) (~(arr_5 [(_Bool)1])));
    }
    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_10)) : ((~(max((5747794789867154863ULL), (((/* implicit */unsigned long long int) (unsigned short)31747))))))));
}
