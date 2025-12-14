/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17159
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_6))));
            arr_8 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        }
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 - 3] [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) (short)401))));
        arr_9 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0 + 4]))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    arr_16 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] = (signed char)41;
                    arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0 - 3] [i_0 - 3] [i_0 + 1]);
                    var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-42))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) arr_3 [i_4 - 2] [i_4 + 4] [i_4 - 3]);
        var_19 = ((/* implicit */short) var_14);
    }
    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_15 [i_5 + 4] [i_5 + 4] [i_5 + 1]))))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) arr_24 [i_5]))))) ? (var_9) : (var_9)));
        /* LoopNest 2 */
        for (short i_6 = 4; i_6 < 24; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 24; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) var_3)) ? (3939935143973129650LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-53))))) != (arr_20 [i_5] [i_5]))));
                    arr_30 [i_5] [11LL] [i_6 - 3] [i_5] = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (26098)))))));
                    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((~(min((var_10), (((/* implicit */long long int) (signed char)-60))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_23 [(signed char)14]))));
    }
    var_24 = ((/* implicit */short) var_10);
    var_25 -= ((/* implicit */signed char) (unsigned short)12);
}
