/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175325
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) 2862160248U);
                    arr_9 [i_0] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (short)2040))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)65535);
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (((((/* implicit */_Bool) 0U)) ? (8126416551045318984LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [(short)9] [i_0] [i_4] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14044032128124282815ULL)) ? (((((/* implicit */_Bool) -7376433732361375664LL)) ? (3506437765406344345ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13446))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)90))) : (arr_14 [(unsigned char)9] [i_1 + 1] [8U])))) ? (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) (unsigned char)255)))))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(max((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)0)))), (-2147483635))))))));
                                arr_17 [(unsigned char)0] [5] [i_2] &= ((/* implicit */unsigned char) var_1);
                                arr_18 [i_4] [i_4] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4 - 1] [i_3] [i_1 - 1]))))) ? (((/* implicit */int) arr_2 [(unsigned char)0])) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned char)0))))) > (max((((/* implicit */long long int) (unsigned char)251)), (var_5))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_2)), (var_1))), (((/* implicit */unsigned int) ((short) var_11)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) - (var_7)))) ? (((/* implicit */int) min(((short)17), (((/* implicit */short) (unsigned char)90))))) : (((((/* implicit */_Bool) (short)10811)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_13))))))) : (var_7)));
}
