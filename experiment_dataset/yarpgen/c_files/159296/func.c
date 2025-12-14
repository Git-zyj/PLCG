/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159296
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
    var_20 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (4294967289U)));
                arr_7 [0ULL] |= ((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((4446187188983660487LL) >= (49858274120671266LL))) || (((/* implicit */_Bool) (~(var_4)))))))));
                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((+(((/* implicit */int) ((short) var_16))))) : (((/* implicit */int) (signed char)-117))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [(short)5] [i_1] = ((/* implicit */unsigned short) ((2964342703399893110LL) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) | (1253829166U))))));
                                arr_15 [i_4] [i_1] [(short)1] [i_2] [i_1] [i_0] = 8529581140448148609LL;
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) ((arr_13 [(signed char)11] [i_1 - 3] [i_3]) % (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) 809241887U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23582))) : (4294967265U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1 - 2])) != (arr_8 [i_1] [i_4] [i_3]))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_4] [(unsigned short)10] [i_3])))), (((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_1 [i_0] [i_3])) + (123)))))))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [0U] |= ((/* implicit */_Bool) ((signed char) -969251443));
            }
        } 
    } 
}
