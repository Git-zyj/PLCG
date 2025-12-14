/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14481
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_4 [i_1] [i_0]))));
                var_13 = ((((/* implicit */_Bool) -1864145326496850793LL)) ? (-9223372036854775802LL) : (-7368036994380190784LL));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((580988225031244596ULL), (((/* implicit */unsigned long long int) var_8))))) ? (min((((unsigned long long int) 1864145326496850792LL)), (((((/* implicit */unsigned long long int) var_10)) | (var_7))))) : ((+(2885562333135461782ULL))))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((min((arr_16 [i_2] [i_4] [i_5] [(short)6] [i_6] [i_6]), (arr_16 [i_6 - 1] [i_6] [i_6] [12LL] [i_6] [i_6]))) - (((/* implicit */long long int) min((((/* implicit */int) (short)0)), (var_9)))))))));
                                arr_19 [(short)6] |= ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_2] [i_3] [i_5] [i_6])), (((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) : (120627174)))));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */unsigned short) ((short) var_3));
                    arr_20 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 760153893712574095ULL)) ? (1774528794U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_4]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_8);
}
