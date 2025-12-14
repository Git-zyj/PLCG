/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126636
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
    var_19 *= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */int) ((short) var_8));
                        }
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_18 [i_1] [i_1] [i_1] [i_1] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53269))) != (4294967295U)));
                        }
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)12689)) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_22 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)12266)))));
                            arr_22 [i_3] [2ULL] [11ULL] [i_3] [i_6] [i_6] = (+(((/* implicit */int) var_0)));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3289076382U))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                        {
                            var_24 = (-(18369128336718416400ULL));
                            arr_27 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12266))) & (((unsigned int) var_5))));
                            arr_28 [i_0] [i_1] [4U] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        }
                        arr_29 [(unsigned short)8] [(signed char)4] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                    }
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (((_Bool)1) ? ((-(((/* implicit */int) (unsigned char)114)))) : (((/* implicit */int) var_0)))))));
                }
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3289076382U)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_9 [i_0] [i_1] [i_0 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) : (var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (var_15) : (33554431U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : (max((3979383511U), (var_5)))))));
            }
        } 
    } 
}
