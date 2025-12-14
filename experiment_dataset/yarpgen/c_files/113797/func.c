/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113797
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
    var_14 = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (min((((/* implicit */long long int) var_10)), (var_2))))));
    var_15 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_16 += ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [2U])) : (((/* implicit */int) (short)32767)));
                    arr_9 [i_0] [i_0] [i_2] = (+(((((/* implicit */int) arr_1 [i_2])) & (-1553358239))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 1] [i_1] [i_3]);
                    arr_13 [(short)14] |= ((((((/* implicit */int) arr_6 [i_0 + 1])) > (((/* implicit */int) (short)32767)))) ? (544169019) : (((/* implicit */int) arr_3 [i_1 + 2] [(short)8])));
                    var_17 -= ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned char)0)));
                }
                for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    var_18 += ((/* implicit */signed char) min((((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_12)))))), (((((/* implicit */_Bool) arr_7 [(unsigned short)10] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)14273)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_1 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (min((arr_17 [i_0] [6U] [i_5] [i_6]), (((/* implicit */unsigned int) ((short) arr_6 [i_0 + 2])))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 2])))) >= (min((((/* implicit */long long int) (short)-32745)), (9223372036854775807LL)))));
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_8 [i_1 - 1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) ((7918688028397911703ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21869))) & (7918688028397911703ULL)))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) min((min((var_8), (((/* implicit */long long int) arr_24 [i_0] [i_0 - 1] [i_0] [i_7] [i_7])))), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) (unsigned char)54)))))));
                            var_23 ^= ((/* implicit */unsigned short) ((_Bool) arr_15 [i_0] [i_1 - 2] [i_7] [i_8]));
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (unsigned short)14275)) : (405568372)))))) % ((+(arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2])))));
                            arr_26 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_25 [i_0] [1] [i_0] [i_1 - 2])) : (((/* implicit */int) arr_25 [i_1] [i_1] [9U] [i_1 + 1]))))), (((unsigned int) arr_25 [i_1] [i_1] [i_1 - 2] [i_1 - 2]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
