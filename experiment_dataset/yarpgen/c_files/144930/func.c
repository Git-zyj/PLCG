/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144930
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_18 = min((((int) arr_0 [2])), ((+(503127703))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((-(arr_1 [i_0 - 2]))) != (min((((/* implicit */int) var_11)), (1456059413))))))));
        var_20 = ((/* implicit */int) (unsigned char)186);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_21 = max((((/* implicit */long long int) var_9)), (min((arr_2 [i_1]), (arr_2 [i_1]))));
        var_22 -= ((/* implicit */long long int) arr_3 [i_1]);
        arr_4 [i_1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((-6528628237483290021LL) ^ (arr_2 [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_23 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))));
        arr_9 [5] = ((((/* implicit */_Bool) -1)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            var_24 = (~((-(5350016093620312436LL))));
            arr_12 [i_3] [i_2] [i_2] = (+(((((arr_7 [i_2]) + (2147483647))) >> (((arr_7 [i_2]) + (918136925))))));
        }
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)95), (((/* implicit */unsigned char) ((8388607) <= (((/* implicit */int) (unsigned char)255)))))))) <= (-13)));
}
