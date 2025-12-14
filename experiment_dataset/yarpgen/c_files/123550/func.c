/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123550
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
    var_14 = ((/* implicit */unsigned int) ((signed char) var_9));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((long long int) ((((-6575765751226955512LL) > (((/* implicit */long long int) arr_3 [(unsigned short)7])))) ? (((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) (short)2)))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)14))))), (max((((/* implicit */long long int) (unsigned short)11)), (-293061469316130446LL)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)3)) != (-631429884))) ? (((/* implicit */int) max(((short)-16384), ((short)1)))) : (((/* implicit */int) arr_4 [i_1 - 1]))))) : (((long long int) var_2))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)10385))));
                                var_16 = ((/* implicit */unsigned short) (short)2680);
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)17] = var_12;
                                arr_16 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_1 + 1] [(unsigned short)3] [i_2] [i_2 - 2])))) > (((((/* implicit */_Bool) 3046670322U)) ? (((/* implicit */int) min((arr_5 [10]), ((short)32759)))) : ((+(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
