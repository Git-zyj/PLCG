/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171388
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
    var_19 = ((/* implicit */short) max((((signed char) (-(1731045521U)))), (var_12)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_0] [(_Bool)1] [(signed char)12] [i_1] [(unsigned short)8] [i_3] &= ((/* implicit */unsigned long long int) -2083591688);
                        var_20 = ((/* implicit */_Bool) arr_4 [11U] [(signed char)9]);
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) 29);
                            var_22 = ((/* implicit */unsigned int) arr_0 [i_4]);
                            arr_13 [i_0] [12ULL] [12ULL] [i_3] |= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)-32751))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_16 [0LL] [(short)17] [i_2 - 1] [i_0] [i_2 + 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [15LL] [i_5] [i_2]))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3] [i_5] [(unsigned short)14]))));
                            arr_17 [i_0] [(signed char)0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_1]);
                            arr_18 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((_Bool) (unsigned short)58543));
                            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)107))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)22577))))))) : ((((!(((/* implicit */_Bool) 1993159187)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_6 [i_0] [(signed char)8] [i_5] [i_3])))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2564985244013804902ULL)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (unsigned short)7006))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [15ULL] [i_1] [i_2] [i_2 + 1] [i_6] [1LL] [i_2 + 1]))))) == (((/* implicit */int) (!(((((/* implicit */int) (short)16227)) != (((/* implicit */int) (unsigned short)7006))))))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_0] = ((/* implicit */int) (short)-14612);
                            var_27 = ((/* implicit */unsigned long long int) 1009424524U);
                            arr_24 [i_7] [i_3] [i_2] [4LL] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((unsigned int) 415190942U));
                            var_28 *= ((/* implicit */signed char) (short)-32751);
                        }
                    }
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-3199277725555387948LL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-88)), ((unsigned char)84)))))) || (((/* implicit */_Bool) ((arr_19 [i_2] [(unsigned char)13] [(unsigned char)13]) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) (short)-32738)))) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 3] [i_2 + 2])))))));
                }
            } 
        } 
    } 
}
