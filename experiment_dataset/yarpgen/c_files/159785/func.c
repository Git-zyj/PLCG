/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159785
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
    var_14 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (-1575511218217857754LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35)))))) ? (var_5) : (((/* implicit */int) (signed char)-32)))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_3) : (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((unsigned int) var_0)))))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) max((((/* implicit */int) var_9)), (var_5))))), (var_13)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) (~(arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))) : (262143LL))) / (arr_4 [i_0] [i_1 - 1])));
            arr_6 [i_0] [0] [0] = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
        }
    }
}
