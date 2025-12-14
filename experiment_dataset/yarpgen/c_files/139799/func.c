/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139799
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((((((/* implicit */_Bool) 1600624960)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1600624960))))) : (1600624983))), (((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) var_1);
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (!(arr_2 [2] [i_0]))))))), (max((((long long int) var_9)), (((/* implicit */long long int) arr_2 [i_0] [i_0 + 2]))))));
        arr_3 [i_0 + 1] = arr_0 [i_0 + 2];
    }
    for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */short) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)217))));
        arr_8 [4LL] [9] = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)38)))) < (((/* implicit */int) (unsigned short)40376))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_0 [i_1]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned short) var_6);
                    arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(arr_14 [i_1] [i_1] [i_1])));
                }
            } 
        } 
    }
}
