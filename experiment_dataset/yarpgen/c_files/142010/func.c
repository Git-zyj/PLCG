/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142010
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (-((-(arr_2 [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_3] [i_4]))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17019))) : (4294967276U))))))));
                                var_21 &= ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) (unsigned short)32760))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_1] [i_0])))))) & (max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 649470627U)) : (var_18))), (((/* implicit */unsigned long long int) (_Bool)0))))));
                            arr_21 [i_0] [i_1] [17ULL] [(unsigned char)5] = ((/* implicit */int) var_4);
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                            {
                                var_22 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5 + 1] [(unsigned char)16] [i_7])))))));
                                arr_24 [i_0] [i_1] [i_5] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [10LL] [i_1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (4294967294U)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -932533268)) : (var_3))) : (((/* implicit */unsigned int) -451134042))))));
                                var_23 = ((/* implicit */_Bool) (unsigned short)4095);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_3);
    var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (10198020215709885833ULL) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), ((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)53059)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967284U)))))))));
}
