/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142230
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) 207422250U);
                arr_4 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_1]);
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (((((((_Bool)1) && (((/* implicit */_Bool) (short)13403)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 985318164U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_0 [i_1]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1930872163U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (0ULL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38213))) : (4294967295U))) : (((((/* implicit */_Bool) arr_9 [18U] [i_1] [i_1] [i_1] [16])) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_13 [i_0] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (arr_5 [i_2 - 3])));
                                var_14 = ((((arr_10 [i_0] [i_4] [i_2] [(unsigned short)0] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)6] [i_1] [i_1] [i_1] [i_1] [i_1]))))) + (((/* implicit */unsigned long long int) 1023U)));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_5 [i_0 - 1])) : (4294967295U)));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
                                var_16 = ((/* implicit */unsigned int) ((unsigned char) 61440U));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8; i_7 += 4) 
    {
        for (short i_8 = 4; i_8 < 10; i_8 += 2) 
        {
            {
                arr_26 [i_7] [i_8 + 1] = ((/* implicit */unsigned short) 3589489784U);
                var_17 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_24 [i_7 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7955795418037892613LL)) ? (((/* implicit */int) (unsigned short)33830)) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) var_6))))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) 4294967295U))))) : (arr_3 [i_7])))));
                arr_27 [i_7] [i_7 + 3] = ((((/* implicit */_Bool) ((705477511U) + (max((705477512U), (((/* implicit */unsigned int) (short)-25273))))))) ? (((((/* implicit */_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3309649131U))) : (705477511U));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 14; i_9 += 3) 
    {
        for (int i_10 = 3; i_10 < 13; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned char) (+(arr_17 [i_10 - 1] [i_10 + 1] [i_9 - 1])));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)18996)) | (var_0))) - (((/* implicit */int) ((_Bool) arr_11 [i_12])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 795087478)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
                arr_39 [(short)14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 3589489802U))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_8 [i_9] [13] [i_10 - 2] [13])) : (((/* implicit */int) (short)25273)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_3 [i_9])))))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3589489783U)) ? (((/* implicit */int) arr_38 [10U] [10U])) : (((/* implicit */int) arr_38 [i_10 + 2] [10U]))))), (((long long int) (short)8191)))))));
                var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) 3589489784U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))))));
            }
        } 
    } 
}
