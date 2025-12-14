/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110703
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((((unsigned long long int) var_2)) << (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1] &= ((/* implicit */long long int) (-(((((/* implicit */int) arr_10 [i_4] [i_4] [i_0] [i_2 - 3] [i_1] [i_0])) ^ (((/* implicit */int) var_8))))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)16)) * (((((/* implicit */_Bool) min((arr_10 [i_2] [(short)0] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (unsigned char)1))))) ? (((/* implicit */int) arr_9 [i_2] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)3))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (short)-20011))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_21 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)16497), ((short)-13044)))), ((~(((/* implicit */int) (unsigned char)13))))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (signed char)113))))) ? ((-(((/* implicit */int) (unsigned char)224)))) : (((((/* implicit */int) (short)32729)) / (((/* implicit */int) (short)-11312)))))) : (((((/* implicit */int) var_6)) / (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-13053))))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) arr_10 [(short)14] [(short)5] [(short)5] [i_8] [(short)5] [(short)8]);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_20 [i_5] [i_5] [i_5] [(short)5]), (((/* implicit */unsigned short) (short)16500))))) % (((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_8])) ? (((/* implicit */int) (short)3210)) : (((/* implicit */int) (short)-3922))))))) ? (((/* implicit */int) min((arr_10 [(short)3] [(short)3] [(short)3] [i_8] [14U] [i_8]), (arr_10 [i_5] [i_6] [i_5] [i_7] [i_8] [i_9])))) : (((/* implicit */int) ((short) (short)-13044)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
