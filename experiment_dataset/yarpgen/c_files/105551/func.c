/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105551
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (var_8) : (var_0)))), (((unsigned int) 1670884755U)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_11 = (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (3473349682U) : (((/* implicit */unsigned int) (~(var_6)))))));
        arr_2 [2ULL] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 1])));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_2 + 2] [i_2]))))) % (max((((/* implicit */unsigned int) arr_7 [i_4] [i_3] [i_3] [i_2 - 2] [i_1] [i_0 + 1])), (821617613U)))));
                            arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [(signed char)12] &= ((/* implicit */long long int) max((var_2), (((/* implicit */signed char) ((_Bool) arr_8 [i_0] [i_1] [i_2])))));
                            arr_14 [i_0] [i_0] [i_0 - 1] [5U] [i_0 - 1] |= ((/* implicit */_Bool) ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_1] [i_2] [i_3] [i_4])) : (var_7)))));
                            var_12 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))) % (((/* implicit */int) min((var_4), (var_4))))));
                        }
                        for (long long int i_5 = 4; i_5 < 11; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5 + 2] = ((/* implicit */unsigned short) ((int) ((((-1395656109) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)0))))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3473349682U)) ? (((/* implicit */int) (short)-7931)) : (((/* implicit */int) (unsigned short)65535))));
                        }
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(821617613U)))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) var_8)) : (arr_11 [i_0] [i_1] [i_2 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (821617613U))))))));
                        var_14 -= ((/* implicit */int) var_9);
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */_Bool) var_9);
}
