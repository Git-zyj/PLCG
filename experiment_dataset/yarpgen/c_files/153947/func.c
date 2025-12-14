/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153947
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */long long int) ((_Bool) 65280LL));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1]))) && (((/* implicit */_Bool) (+(4095))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19996)) ? (-3876760969781388687LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [12ULL])))))) ? (((unsigned long long int) arr_6 [14] [i_1] [i_0])) : (((var_9) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19996)))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 3; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_21 -= ((/* implicit */unsigned char) var_11);
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-((-(17247500796569644743ULL))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3]))))))))));
                            var_24 = ((/* implicit */short) arr_17 [(_Bool)1] [(_Bool)1] [14ULL] [(unsigned short)17]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_25 = ((/* implicit */int) 0ULL);
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((var_8) <= (((/* implicit */unsigned int) 2062421647)))))));
            var_27 = ((long long int) ((((/* implicit */int) (unsigned short)17903)) >> (((((/* implicit */int) arr_20 [i_3])) - (221)))));
        }
        var_28 |= ((/* implicit */_Bool) (short)-26441);
    }
    var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_11)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6)))) : (var_8)));
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            {
                var_30 -= ((/* implicit */int) (_Bool)1);
                var_31 *= ((/* implicit */long long int) ((((unsigned long long int) arr_25 [11] [i_10] [i_10])) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))))));
            }
        } 
    } 
}
