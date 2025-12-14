/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104709
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5324116)) ? (1637586302) : (((/* implicit */int) ((short) arr_0 [i_0])))));
        var_22 = ((/* implicit */signed char) -5324098);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967290U)) || (((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-32)))), (((/* implicit */int) var_18)))))));
        var_23 = ((/* implicit */int) ((((arr_1 [i_1]) == (((/* implicit */long long int) 5U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))) : ((((_Bool)1) ? (((/* implicit */long long int) 4294967292U)) : (arr_1 [i_1])))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3192484937U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) >> (((((((/* implicit */int) var_9)) | (((/* implicit */int) var_2)))) + (8197)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */long long int) 1517068144)) < (arr_1 [i_1]))))) : (((unsigned long long int) arr_4 [i_1]))));
    }
    var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (((unsigned long long int) 487074751U))))) ? (max((((/* implicit */int) var_10)), (((var_0) ? (var_13) : (((/* implicit */int) var_10)))))) : (max((((/* implicit */int) var_17)), (min((2147483647), (((/* implicit */int) var_17))))))));
}
