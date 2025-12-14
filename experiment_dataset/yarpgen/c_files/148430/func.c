/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148430
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
    var_12 = min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)49152)) | (((/* implicit */int) var_6))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_1))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) var_2);
        var_14 = ((/* implicit */unsigned char) ((arr_1 [i_0]) / (((/* implicit */int) arr_0 [i_0 + 4] [i_0 - 2]))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((4294967287U) + (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : (arr_1 [i_0]));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(1292494591574034343ULL)));
            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [6U]))) : (var_0)))) ? (((int) (unsigned char)35)) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0]))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])));
            var_17 ^= ((/* implicit */short) ((arr_8 [6ULL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 4])))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned short)17724))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)57829))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) ((((arr_14 [i_4] [i_4]) * (((/* implicit */unsigned long long int) 103781800U)))) | (arr_14 [(_Bool)1] [9ULL])));
        arr_17 [i_4] [0ULL] = ((/* implicit */unsigned char) var_0);
    }
}
