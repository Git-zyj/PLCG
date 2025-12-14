/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137673
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((signed char) (-((-(((/* implicit */int) (short)-20973)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1]) % (arr_2 [i_1] [i_1])))) ? (arr_2 [i_1] [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-20973)) ? (((/* implicit */int) (unsigned short)12728)) : (((/* implicit */int) (short)22095))))));
                        var_21 = ((/* implicit */long long int) max((var_21), (0LL)));
                        var_22 += ((/* implicit */long long int) (unsigned char)155);
                    }
                    arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (-1LL) : (((/* implicit */long long int) arr_6 [i_0] [(unsigned short)6] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)33))) == (arr_0 [i_0])))) : ((+(((/* implicit */int) var_8))))));
                    arr_12 [i_0 + 1] [i_2] [i_2] &= (((~(((/* implicit */int) (short)-23401)))) & ((~(((/* implicit */int) var_10)))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((signed char) arr_10 [i_0] [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */int) arr_9 [i_6] [i_5] [(short)8] [i_0]);
                                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_5 [i_4] [i_6])))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    var_26 = ((/* implicit */long long int) var_16);
                    var_27 *= ((/* implicit */short) ((unsigned short) var_15));
                }
                /* vectorizable */
                for (short i_8 = 1; i_8 < 18; i_8 += 1) 
                {
                    arr_25 [i_0 - 1] [i_0 - 1] [i_8 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (signed char)0))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 9; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            {
                arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (short)-19460)) ? (-1678904328944707320LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1024))))));
                arr_32 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) ^ (((/* implicit */int) (signed char)-94))));
            }
        } 
    } 
    var_29 ^= ((/* implicit */int) 0LL);
    var_30 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)100))))) : (((/* implicit */int) var_0)))));
    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (-(3638057057104030787ULL))))))))));
}
