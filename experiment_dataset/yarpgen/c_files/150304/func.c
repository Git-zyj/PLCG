/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150304
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
    var_16 = ((/* implicit */signed char) ((_Bool) ((unsigned short) 3154452673077160093ULL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1])) : (3943476512054067977ULL))), (arr_2 [i_0] [i_1])));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_5 [16LL] [16LL] [16LL]))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64770))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0 - 1]) : (arr_3 [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (arr_3 [i_0] [i_0 + 1]) : (arr_3 [i_0] [i_0 + 1])))));
                arr_7 [(short)10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_4 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0] [4ULL])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) var_3))))))) ? ((-(((arr_2 [(unsigned short)10] [(unsigned short)10]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16728))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)62)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (~(((long long int) -13))));
                                var_20 = ((/* implicit */unsigned short) ((short) ((unsigned short) arr_15 [i_2] [i_4 - 1] [i_6 + 1] [i_5] [i_6 + 1] [i_5])));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 959915425)) ? (((/* implicit */int) arr_13 [i_3] [i_3] [0U] [i_3])) : (-1344562372))));
                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64752)) ? (((/* implicit */int) (unsigned short)39929)) : (((/* implicit */int) (signed char)-106))));
            }
        } 
    } 
}
