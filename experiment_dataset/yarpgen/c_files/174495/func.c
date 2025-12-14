/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174495
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [(signed char)23] = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
                arr_6 [i_1] = ((/* implicit */int) ((signed char) ((_Bool) (~(var_3)))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (+(var_3)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    var_10 = ((/* implicit */int) 18446744073709551615ULL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [(unsigned short)23] [i_2 + 3] [i_2 + 3] [i_3 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_2 + 2] [i_2 - 2] [i_3 + 3]))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                        var_12 = var_2;
                        arr_15 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                    }
                    arr_16 [i_1] [(unsigned short)20] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 3] [i_2] [i_2 + 4] [i_1]))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)65535))) ? (((/* implicit */int) arr_3 [i_5 - 1] [i_5 - 1] [i_5 - 2])) : (((/* implicit */int) var_9))));
                                arr_25 [i_0] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) arr_18 [i_4]);
                }
                var_15 = ((/* implicit */unsigned char) ((max((var_3), (1ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_0] [i_1] [23])) : (((((/* implicit */_Bool) 55016672)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_16 = var_0;
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-121))))))) ? (var_6) : ((((!(((/* implicit */_Bool) var_0)))) ? (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    var_18 = ((/* implicit */unsigned short) 267911168);
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
    {
        for (signed char i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_20 [i_7]), (((/* implicit */unsigned short) var_1))))) ^ (((/* implicit */int) (signed char)6)))) + (((/* implicit */int) arr_22 [i_7] [i_7] [i_9] [i_8] [i_7]))));
                            var_20 -= ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                arr_35 [2LL] [i_7] = var_9;
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_7] [i_7] [i_8]))))))) ? (310422872737775539ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [18U]))))))));
            }
        } 
    } 
}
