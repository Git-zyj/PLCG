/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115633
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
    var_14 = min((((/* implicit */long long int) var_11)), (((long long int) ((signed char) var_6))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_2)), ((-(65011712U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [8U] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [(short)12])) ? (((/* implicit */long long int) 4039040700U)) : (arr_4 [12LL])))));
                arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_1])))));
                arr_9 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32752)) : ((~(((/* implicit */int) (unsigned char)0))))));
                                arr_17 [i_0] [i_3] [i_4] = min((255926593U), (((/* implicit */unsigned int) (signed char)86)));
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (min((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (255926596U))), ((~(arr_10 [i_4] [i_2] [i_2])))))));
                                arr_19 [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_0]))) : (7276097716246068962LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-27276)) & (((/* implicit */int) arr_2 [i_1] [i_1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [12U]))) ^ (1759407U))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14052)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (short)22244))));
}
