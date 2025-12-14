/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143485
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
    var_16 = ((/* implicit */short) ((unsigned short) var_2));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                    var_17 -= ((/* implicit */_Bool) (((~(max((((/* implicit */int) (unsigned short)53947)), (-657469115))))) & (((/* implicit */int) (short)-993))));
                    var_18 = ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) var_6)), (2771902051U))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) var_1);
                    arr_11 [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned char i_4 = 4; i_4 < 24; i_4 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_5 [i_1] [i_4 - 3]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_17 [i_0] [i_0])));
                                arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 10474703233818518571ULL)) ? (2771902051U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109)))))));
                                arr_20 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7935844211774886867ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_16 [i_0] [i_1] [i_4 + 1] [5] [i_0 + 1])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((arr_0 [i_0 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                    var_22 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62195))) : (3799250198U))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((3560850707U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)0)))))));
                                var_23 += ((/* implicit */unsigned char) (+(((unsigned int) (signed char)24))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_7 [(short)4] [i_4 - 4] [i_4 - 4]))));
                                var_25 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                                arr_29 [i_0 - 1] [i_7] [i_0] [i_0] [i_0 - 1] |= (!(((/* implicit */_Bool) var_5)));
                            }
                        } 
                    } 
                }
                var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
            }
        } 
    } 
}
