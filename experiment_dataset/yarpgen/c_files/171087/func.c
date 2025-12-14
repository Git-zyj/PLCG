/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171087
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_16)))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_0 + 1]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 3204009352734949154ULL)))))))) : (((/* implicit */int) min((arr_0 [i_0 + 1] [(unsigned short)18]), (arr_2 [i_0 - 1] [i_0]))))));
        var_18 |= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) ((short) var_16))), (var_10))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [6ULL] [i_1])), (var_2)))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_2 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)23)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_8 [i_3] [i_1] [i_1 + 2] [i_3]))))));
                                var_22 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1] [i_3] [i_1]);
                                var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_4] [(unsigned short)14] [i_3])), (arr_6 [i_1] [i_3])))) ? (((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_4])))) : (((/* implicit */int) min((arr_9 [i_1 - 1] [i_1 - 1] [i_3] [i_5]), (((/* implicit */unsigned short) var_13))))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)6))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)56853))) : (((/* implicit */int) var_8))))) - (var_4)));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
    var_27 = ((/* implicit */unsigned short) var_7);
}
