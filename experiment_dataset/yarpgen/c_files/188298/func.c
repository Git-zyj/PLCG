/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188298
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned char) var_3))))), ((unsigned short)59792)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */short) max(((+(((((/* implicit */int) (unsigned short)65535)) % (((/* implicit */int) var_2)))))), (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [5LL] [i_1] [i_2] [i_1] [(unsigned short)6] = var_14;
                                var_20 = ((/* implicit */unsigned short) 4294967283U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_21 [3LL] [i_1] [i_5] [i_6] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned short)17213)) : (((/* implicit */int) (unsigned short)48327))))), (max((((/* implicit */unsigned int) var_1)), (var_16))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) var_6)))))))));
                            var_21 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [(unsigned short)3] [i_6]))))), (var_5))));
                        }
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned short) ((arr_20 [(short)11] [0ULL] [(unsigned short)13] [(unsigned short)14] [i_1] [i_1]) ? (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_14)))) | (((/* implicit */int) var_3)))) : (((/* implicit */int) max((arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]), (arr_11 [i_0 - 1] [i_0 + 1] [6] [(short)3]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(29U)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (short)-11820)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_15)))) != (((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)11808)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_11)) : (((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))));
}
