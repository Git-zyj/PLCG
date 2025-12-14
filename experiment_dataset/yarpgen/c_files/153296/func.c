/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153296
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_9)), (2147483647))) - (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)214))))) : (((unsigned long long int) max((((/* implicit */int) var_11)), (var_1))))));
    var_14 |= (!(((/* implicit */_Bool) var_7)));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) ? (min((var_4), (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-3269)) / (var_0)))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)3279)) ? (((/* implicit */unsigned int) var_0)) : (var_2)))))))))));
    var_16 |= ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32753))) : (var_2))), (((/* implicit */unsigned int) ((unsigned char) -1822334487))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (-(arr_10 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_0])))) : ((+(min((arr_11 [i_0 + 1] [i_1] [i_1] [i_0 + 1]), (((/* implicit */unsigned int) (short)-32765))))))));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [(short)10] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (((unsigned long long int) (unsigned short)65535)) : (((/* implicit */unsigned long long int) max((arr_8 [(_Bool)1] [i_4] [(short)15]), (((/* implicit */long long int) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [16] [i_3] [i_2 - 1])) && (((/* implicit */_Bool) (short)-32761))))) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((arr_12 [(short)10]), (max((((/* implicit */unsigned int) arr_13 [(unsigned short)16] [i_1] [i_0 - 1] [i_0] [(unsigned short)16])), (((((/* implicit */_Bool) (signed char)-46)) ? (var_2) : (arr_5 [i_0] [9ULL])))))));
            }
        } 
    } 
}
