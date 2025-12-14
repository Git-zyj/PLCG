/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143978
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
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_3 [23LL] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_0 + 1] [7U])) && (((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)124))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((7ULL), (((/* implicit */unsigned long long int) (unsigned char)136))))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (3151256500U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))));
        arr_4 [(short)19] |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (arr_2 [5] [i_0 - 3]))))));
        var_14 |= ((/* implicit */signed char) arr_0 [i_0 - 3]);
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))), (arr_2 [i_0] [i_0 + 1])))))))));
    }
    for (int i_1 = 4; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) (unsigned char)27);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_0))));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                for (unsigned char i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) (+((+(min((2518232119U), (var_8)))))));
                            var_18 = ((/* implicit */unsigned char) arr_11 [i_2] [i_4] [i_1]);
                        }
                    } 
                } 
            } 
            arr_18 [(unsigned short)20] [4U] |= ((/* implicit */signed char) (-((+(max((var_8), (arr_2 [23] [0ULL])))))));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)219)), (var_8))))));
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5)) ? (var_6) : (((/* implicit */unsigned long long int) arr_9 [(signed char)18] [12U]))));
        var_21 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_6] [(signed char)20] [(_Bool)1] [(unsigned short)14] [22U])))))));
        var_22 = ((/* implicit */unsigned long long int) ((arr_15 [i_6] [i_6] [(unsigned char)1] [(_Bool)1] [7]) / (arr_15 [i_6 - 3] [(short)20] [(signed char)2] [i_6] [(unsigned short)16])));
    }
    for (int i_7 = 4; i_7 < 21; i_7 += 3) /* same iter space */
    {
        arr_23 [(unsigned char)15] &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)18)) / (min((arr_9 [4] [(_Bool)1]), (((/* implicit */int) arr_11 [4LL] [18] [(unsigned char)0]))))));
        arr_24 [(unsigned short)10] [(_Bool)1] = 8323072;
    }
    var_23 = ((/* implicit */unsigned short) var_11);
    var_24 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))))) * (min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)8)))))));
}
