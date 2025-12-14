/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17694
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_4))));
    var_13 |= ((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((var_4), (((/* implicit */unsigned long long int) var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned long long int) (unsigned char)254);
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) * (((unsigned int) arr_6 [i_0 - 1] [i_0 - 1])))))));
                                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_4 - 1] [i_0 - 1] [i_2 + 1] [i_2] [i_0 - 1] [i_1 + 3]))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (unsigned char)63))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_8 [i_4 + 1]))) ? (((((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4])) - (((/* implicit */int) arr_5 [(short)2] [i_4 + 3] [i_4 - 2])))) : (((((/* implicit */int) arr_8 [i_4 + 2])) - (((/* implicit */int) arr_5 [i_4] [i_4 + 2] [i_4]))))));
                                var_18 |= ((/* implicit */unsigned long long int) max((((_Bool) arr_6 [i_0 + 3] [i_0 + 3])), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)10] [i_0] [(short)10] [(short)4] [i_2] [(short)4]))) == (arr_1 [i_0])))) >= (((/* implicit */int) ((unsigned short) arr_8 [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) ((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 3] [i_1]))) : (274877906912LL))) != (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1]))) / (var_2)))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((+(((/* implicit */int) arr_5 [i_0 + 3] [i_1 + 2] [i_6])))) : (((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_5 - 2] [(short)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_21 = ((/* implicit */_Bool) min((((arr_7 [(short)7] [i_5] [11LL] [5] [i_5] [i_5 + 2]) ? (((/* implicit */int) arr_7 [i_5] [(short)4] [(short)4] [i_5 + 1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 - 1] [(unsigned char)7] [i_5] [i_5 - 2])))), ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_5 - 1] [i_0] [i_5 - 1]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((_Bool) ((((var_2) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                                var_23 = ((/* implicit */_Bool) ((unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_4))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 3] [i_0 + 3] [i_8] [i_9] [i_9 + 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_24 += ((short) ((((/* implicit */_Bool) (unsigned short)13060)) ? (((/* implicit */int) (unsigned short)7976)) : (((/* implicit */int) (_Bool)1))));
                                arr_29 [(unsigned char)2] [2] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [10LL]))));
                                var_25 *= ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */unsigned short) max((var_1), (((/* implicit */long long int) (unsigned char)255))));
                }
            }
        } 
    } 
    var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(min((var_1), (((/* implicit */long long int) var_5)))))) : (max((((/* implicit */long long int) var_7)), (var_2)))));
}
