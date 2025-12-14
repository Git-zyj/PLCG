/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125307
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (var_6))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))));
        var_12 ^= ((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_0 [(short)0] [(short)0])), (arr_1 [i_0] [i_0 - 2]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */short) min((((/* implicit */unsigned short) ((short) min((arr_1 [i_1] [i_1]), (var_9))))), (min(((unsigned short)0), (((/* implicit */unsigned short) (short)-28437))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3 + 1] [i_4] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(-2492204179031392962LL))) : (((/* implicit */long long int) var_6)))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) arr_13 [i_0] [13U] [i_0] [i_0] [i_0 + 1] [i_3 - 1] [i_2]))))) ? (((/* implicit */int) ((unsigned short) arr_10 [(short)10] [i_0 + 2] [i_0] [i_2]))) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 2] [i_0] [i_1]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [5LL] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-28437))))) % (((((((/* implicit */_Bool) (short)28926)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_4)))) & (((/* implicit */int) min((((/* implicit */unsigned short) (short)-7287)), (arr_1 [i_1] [i_2]))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_2] = (~((-(min((((/* implicit */long long int) var_4)), (arr_11 [i_0] [i_0] [(signed char)13] [i_0] [2LL] [i_0]))))));
                    var_15 *= ((_Bool) (short)-32763);
                }
            } 
        } 
    }
    var_16 = ((/* implicit */short) ((((int) var_0)) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) (short)-28430)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))))))));
}
