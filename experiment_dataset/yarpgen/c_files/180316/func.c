/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180316
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
    for (int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), ((-(((/* implicit */int) (signed char)119)))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] = (!(((/* implicit */_Bool) ((signed char) arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))));
                                var_17 &= ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [4LL] [6LL] [i_0 - 1]))) : (var_10))))), (((/* implicit */unsigned long long int) arr_1 [13LL]))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */long long int) min((7165168456433888726ULL), (7165168456433888724ULL)));
            }
        } 
    } 
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((11281575617275662894ULL), (7165168456433888741ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)9535)), ((unsigned short)22971)))) : (((/* implicit */int) var_2))))) : ((+(((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) -784966309))))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 4095U)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)32)), ((unsigned short)12))))) : ((+(((((/* implicit */_Bool) 1272267080)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : ((-9223372036854775807LL - 1LL)))))))))));
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)250))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-17993))))), (var_10)))));
}
