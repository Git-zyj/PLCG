/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162237
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7829))) : (arr_1 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)14))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
        var_12 *= ((/* implicit */unsigned char) -1133645448);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1156736398654087738LL)) ? (-1156736398654087723LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_2 - 2] [i_3] [i_1] [i_5] [i_4 + 1] [i_1])))));
                            arr_19 [i_1] [i_2] [i_1] [i_4 + 1] [i_5] = ((/* implicit */_Bool) (unsigned char)243);
                            var_13 = ((/* implicit */unsigned long long int) 1156736398654087716LL);
                            var_14 = ((/* implicit */unsigned char) arr_15 [(unsigned short)16] [i_4] [i_3] [i_1] [i_1] [i_1] [i_1]);
                        }
                        arr_20 [i_4] [(_Bool)1] [(_Bool)1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 5730350281606010932ULL)) ? (4294967271U) : (4294967286U)));
                    }
                } 
            } 
        } 
        var_15 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))));
        arr_21 [i_1] = ((/* implicit */int) (short)-22521);
        arr_22 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)61))));
        arr_23 [i_1] = ((/* implicit */unsigned char) (signed char)31);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_16 += ((/* implicit */long long int) (_Bool)1);
        var_17 = ((/* implicit */signed char) min(((~(1336312863U))), (((/* implicit */unsigned int) (short)-22535))));
        arr_26 [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_9 [16]))))));
    }
    var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
}
