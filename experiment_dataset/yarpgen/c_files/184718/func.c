/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184718
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
    var_11 &= ((/* implicit */unsigned char) ((short) ((unsigned long long int) (-(((/* implicit */int) var_6))))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-12917))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_1 - 3])))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                arr_12 [i_0] [6LL] [i_1] [i_2 + 1] [i_1] [(_Bool)1] [i_4] &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])))))));
                                var_14 = ((/* implicit */int) min((var_14), ((-(((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) (short)-12917)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8)))) : ((+(arr_7 [i_2] [i_3] [i_3])))))))));
                            }
                            var_15 = ((/* implicit */unsigned char) max(((short)-12914), ((short)-12917)));
                            arr_13 [i_2] [i_1] [(short)16] [i_1] [i_1] [(short)16] = min((((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0 + 1] [i_1] [i_1] [i_3]) : (arr_6 [i_2 - 1] [i_2 - 1] [i_1] [i_3]))), (min((((/* implicit */unsigned int) var_4)), (arr_6 [i_2 + 1] [i_2 + 1] [i_1] [i_3]))));
                            arr_14 [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) 806555993558653149LL)) ? (max((max((((/* implicit */long long int) var_1)), (arr_11 [i_1] [3LL] [i_2] [10] [i_3]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_0)))))) : (((/* implicit */long long int) var_0))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (+(((unsigned long long int) arr_8 [16LL] [i_0 + 1] [i_1] [i_0 + 1]))));
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) var_5)), (var_7))));
}
