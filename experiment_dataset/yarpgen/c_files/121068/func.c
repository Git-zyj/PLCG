/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121068
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
    var_14 = ((/* implicit */long long int) (((+(max((((/* implicit */unsigned long long int) var_5)), (var_10))))) < (((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (unsigned short)20844))))));
    var_15 = ((/* implicit */short) var_2);
    var_16 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((unsigned long long int) (unsigned char)1)) | (((/* implicit */unsigned long long int) -1LL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (+(4260410540U)));
                                var_18 ^= ((/* implicit */unsigned char) min(((~(903928228924094269LL))), (((/* implicit */long long int) var_9))));
                                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [(unsigned short)2] [i_3] [i_4]))))));
                                arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4147679714U)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (11918940934796068006ULL))))));
                                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))) <= ((-(arr_5 [i_2])))))) ^ ((-(((/* implicit */int) min(((unsigned short)22131), (((/* implicit */unsigned short) (short)-19055)))))))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */int) 4U);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (((-(var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)143)))))));
}
