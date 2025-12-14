/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160348
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 367805894770400760ULL)) ? (min((var_0), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)10955)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60796))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((unsigned short) var_4)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) (unsigned char)255);
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (822485789) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)49379)))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 11)) > (18078938178939150850ULL)))) : (678219323)));
                        var_15 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
                        var_16 *= ((/* implicit */_Bool) (~(((unsigned int) (_Bool)1))));
                        arr_12 [i_2] [i_2] &= ((/* implicit */short) (((_Bool)0) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_1] [i_0]) ? (((/* implicit */int) (signed char)-25)) : (arr_5 [i_0 + 1] [i_0 + 1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) : (((((/* implicit */_Bool) 689350022)) ? (((/* implicit */unsigned long long int) arr_2 [i_2])) : (0ULL)))));
                    }
                } 
            } 
        }
        for (int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2596238728U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
            arr_16 [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4]);
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
            arr_17 [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_4 + 2] [i_0])) <= (-1103696179)))) : (((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((/* implicit */int) (unsigned short)4520)) : (((((/* implicit */_Bool) (-(1640172652)))) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4] [i_4 + 1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_0]) ? (((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_5])))) : (((/* implicit */int) var_11))))) ? (max((((((/* implicit */_Bool) 2629408173U)) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) 1640172652)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_5])), (3896421612093236515ULL)))) ? ((-(((/* implicit */int) (unsigned short)61008)))) : (((/* implicit */int) arr_3 [i_0] [i_5] [i_5])))))));
            var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0])) < (((/* implicit */int) arr_10 [i_5] [i_0 + 1] [i_0])))));
        }
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) (unsigned short)4527)) : ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
        arr_20 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */unsigned long long int) min((((arr_9 [i_0 + 1]) ? (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))), (((int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = (!(((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_6] [i_6])));
        var_23 = ((((/* implicit */int) ((unsigned char) 3822457565U))) / (arr_2 [i_6 + 1]));
        var_24 = ((/* implicit */int) arr_19 [i_6]);
        arr_26 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_6 + 1]))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        var_25 = var_9;
        var_26 = ((/* implicit */int) var_7);
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((int) var_11)))));
}
