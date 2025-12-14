/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154964
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1785616753), (((/* implicit */int) var_11))))) ? (max((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)30381), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (arr_0 [i_0]) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) - (((/* implicit */int) ((unsigned char) arr_10 [i_3] [8] [i_2] [i_1] [i_0 - 1])))));
                        arr_11 [i_0] [i_2] [i_0] [i_0] [21LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1])))) : ((~(((/* implicit */int) (short)9168))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned char)83))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)88)))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0]))));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)75)))))));
                        }
                        var_25 = ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) % (((/* implicit */int) arr_5 [i_0 - 1] [i_1]))));
                    }
                } 
            } 
            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned char)173))))) : ((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))))));
        }
        var_27 ^= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-23))))), ((+(197237965)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)171)) ? (arr_1 [i_5]) : (arr_1 [i_5])));
        var_29 = ((/* implicit */unsigned short) arr_3 [i_5] [i_5] [i_5]);
        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    }
}
