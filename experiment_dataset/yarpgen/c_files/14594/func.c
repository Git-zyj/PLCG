/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14594
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
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) * (((/* implicit */int) var_9)))) <= (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) - (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) var_16);
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_1] [i_2])) >= (arr_0 [14ULL] [i_2])))) & (arr_1 [i_1] [i_2])));
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)0)), (0U)));
            arr_6 [i_1] [i_1] = ((/* implicit */int) var_8);
        }
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -6379942384308718825LL))) ? (((((/* implicit */_Bool) 1274061282U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) arr_3 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */int) ((signed char) arr_1 [i_1] [i_1]));
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_5 [i_1])))) < (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (arr_1 [i_1] [i_1]))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_24 = var_3;
        var_25 = ((/* implicit */_Bool) arr_2 [i_3]);
        var_26 = arr_3 [i_3];
    }
    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)255))));
}
