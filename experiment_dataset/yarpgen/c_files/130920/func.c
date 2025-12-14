/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130920
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
    var_15 = ((/* implicit */short) ((signed char) var_10));
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) var_5)) - (((long long int) var_2))))));
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) ((min((((arr_2 [(unsigned char)19]) / (4294967232LL))), (max((var_7), (((/* implicit */long long int) var_10)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) ((_Bool) (signed char)122))) : (((((/* implicit */_Bool) (short)3966)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (short)-3975)))))))));
                                arr_11 [i_4] [i_0] [i_0] [i_1] [i_0] = var_11;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_16 [(signed char)19] [(unsigned char)16] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_5] [i_5 - 2] [(short)18] [i_5 + 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5] [i_5 - 1] [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1])))) == (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)3967))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5] [i_2] [i_5 + 1] [i_6 + 1]))) >= (var_7)))) * (max((((((/* implicit */_Bool) 995955711405905759LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-1)))), (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_6 [i_0] [i_6]))))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */unsigned char) min((max((((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_5 [i_2] [(_Bool)1]))))), (var_8))), (max((((/* implicit */long long int) ((short) var_11))), (((((/* implicit */_Bool) (short)3965)) ? (-4387398280660872247LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))))))));
                }
            } 
        } 
    } 
}
