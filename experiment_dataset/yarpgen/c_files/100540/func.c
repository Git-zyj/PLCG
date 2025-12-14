/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100540
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) (signed char)23)))))))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_4);
                var_18 += ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(signed char)3])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_13 [13ULL] [13ULL] [13ULL] |= ((/* implicit */unsigned char) ((((var_4) ? (var_2) : (((/* implicit */long long int) var_15)))) == (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            arr_14 [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 828342542U)))))));
            var_19 = ((signed char) ((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) arr_10 [i_2] [i_2]))));
        }
        arr_15 [i_2] [4LL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2] [i_2])) >= (((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1]))));
        var_20 = (-(((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) (~(var_10)));
        var_21 += ((/* implicit */unsigned long long int) (~(6U)));
        var_22 ^= ((/* implicit */unsigned int) (~(arr_8 [i_4 + 2])));
        var_23 = ((/* implicit */signed char) (~((~(650019957806260316LL)))));
    }
}
