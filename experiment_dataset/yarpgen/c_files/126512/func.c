/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126512
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [13ULL] [i_1] [i_0] = ((/* implicit */unsigned int) var_0);
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0] [i_0])), (var_4)))) : (min(((+(1693733049))), (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_0 - 1]))))));
                        arr_11 [i_0] [i_0] [i_0] [3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (short)0))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [i_0])))))));
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)44314))));
                        var_16 *= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    arr_20 [i_4] [i_5] [i_6] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 + 2] [i_5 + 3] [i_4 - 1]))) : (arr_6 [i_4 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), (var_8)))) ? (1792725545) : (((((/* implicit */int) (short)0)) >> (((var_12) - (14685207888515125577ULL))))))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4416678226683374368LL))))) : (((/* implicit */int) var_5)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_18 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
                        var_19 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) var_7)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            arr_28 [i_7] [i_7] [i_6 + 3] |= ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) arr_10 [i_5] [i_5] [i_5]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_21 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31787)) || (((/* implicit */_Bool) (unsigned short)31773))))) + (((/* implicit */int) (signed char)-36)));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-7))))) ? (1729350743) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)31770)) < (((/* implicit */int) var_11)))))));
                        }
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            arr_33 [i_4] [i_5] [i_5] [i_7] [i_7 + 3] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(15191843732375629461ULL))))));
                            arr_34 [i_4] [(_Bool)1] [i_5] [(_Bool)0] [i_6] [i_4] [i_4] = arr_24 [i_4] [i_4];
                        }
                    }
                }
                var_23 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_31 [i_4] [i_4 + 3])))) ^ ((~(((/* implicit */int) arr_29 [i_4 - 2] [i_5] [i_5 - 1] [i_4 - 1] [i_4] [19]))))));
                var_24 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_14 [i_4 - 1]))))));
            }
        } 
    } 
}
