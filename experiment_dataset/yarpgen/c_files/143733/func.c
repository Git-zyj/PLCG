/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143733
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 -= ((/* implicit */_Bool) (+(arr_1 [i_0] [i_0 + 4])));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1])) ? (var_3) : (var_4)));
        }
        var_15 = ((/* implicit */short) arr_5 [i_0] [i_0 - 2]);
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)84))))));
        arr_9 [i_2] [2LL] = ((/* implicit */unsigned long long int) ((7798491566835599142ULL) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-20)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        var_17 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -2044118076)) ? (10648252506873952465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 1])))))));
        arr_14 [i_3] [i_3 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 + 1])) ? (arr_12 [i_3]) : (arr_12 [i_3])));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_3 - 2] [i_3] [i_3 - 2]))));
        var_19 = ((/* implicit */short) arr_1 [i_3] [i_3]);
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_16 [i_4]);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (arr_15 [i_4]) : (((/* implicit */int) arr_16 [i_4]))))) ? (min((((((/* implicit */int) (unsigned short)14937)) & (153197717))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4]))))))) : (((/* implicit */int) ((unsigned char) arr_15 [i_4])))));
        var_22 = ((/* implicit */_Bool) (-(min((10522707942527411087ULL), (((/* implicit */unsigned long long int) var_10))))));
        var_23 = ((/* implicit */int) (signed char)10);
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [0] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [i_5] [i_5])));
        arr_19 [i_5] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_10))))));
    }
    var_25 = ((/* implicit */_Bool) var_0);
}
