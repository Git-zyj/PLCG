/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154629
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
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 += (((-(((var_4) ? (var_2) : (((/* implicit */unsigned long long int) var_1)))))) & (((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) | (var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((max((((long long int) -2761108999276753991LL)), (min((((/* implicit */long long int) 2147483637)), (36024398972452864LL))))) + (((min((((/* implicit */long long int) var_14)), (-2761108999276754006LL))) & (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (2147483647)))))));
        var_19 = ((/* implicit */int) var_5);
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -382132740)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((((/* implicit */_Bool) (unsigned short)54381)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])))))) ? ((~(arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (((-(13237228026053344885ULL))) == (((/* implicit */unsigned long long int) arr_2 [(unsigned short)19]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 135480960)) && (((/* implicit */_Bool) -1849917771)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)39713)) != (-382132742)))) : ((~(382132739)))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_9))) ? (-3655670017612081985LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1]))) - (3LL)))));
                arr_13 [i_1] [i_1] |= ((/* implicit */unsigned short) ((arr_10 [i_3] [12]) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_1])) : (1971026850)));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_16 [i_2] [i_2 - 2] = ((((/* implicit */_Bool) 382132739)) || (((/* implicit */_Bool) -1361634938)));
                var_22 = ((/* implicit */long long int) 2147483647);
                var_23 = ((/* implicit */int) ((((unsigned long long int) 4384737193104542033LL)) | (((/* implicit */unsigned long long int) -453124848))));
            }
            var_24 = ((/* implicit */int) var_2);
        }
    }
}
