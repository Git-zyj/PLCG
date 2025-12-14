/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174336
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
    var_20 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 ^= (!(((/* implicit */_Bool) (-((~(arr_0 [i_0] [i_0 + 1])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0 + 1] [2ULL] [i_0 + 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_19), (((/* implicit */unsigned short) (unsigned char)235)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [(signed char)12] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) 3351507320U)))))));
            arr_7 [6LL] [(unsigned char)0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((32767ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49272)))))) ? (var_9) : (max((((/* implicit */unsigned int) (signed char)-112)), (var_2))))));
            arr_8 [i_1 + 1] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))))))))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_4 + 3] [(unsigned short)10] [(unsigned short)10]))))) ? (1527359260U) : (max((((/* implicit */unsigned int) (unsigned short)49278)), (3028981252U))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-2147483647 - 1))))) | (((((/* implicit */_Bool) (unsigned short)49273)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3 + 2] [i_0]))) : (var_7)))))));
                        var_23 = ((/* implicit */unsigned int) var_8);
                    }
                } 
            } 
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_2]);
        }
        for (int i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)57947), (((/* implicit */unsigned short) arr_16 [i_0])))))) & (var_2))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_5] [i_0] [i_0 + 1])))))));
            var_25 = ((/* implicit */unsigned int) arr_11 [i_5] [i_0 + 1] [i_0]);
        }
        arr_22 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [(unsigned char)4] [(unsigned char)4] [i_0])) ? ((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_1)))))) : (((/* implicit */int) (unsigned short)48870))));
        arr_23 [i_0] = ((/* implicit */int) (signed char)96);
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((int) var_11)))));
    var_27 = ((((((/* implicit */_Bool) (unsigned short)7598)) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)6))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65518)))))) <= (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48840))))) % ((~(((/* implicit */int) var_18)))))));
}
