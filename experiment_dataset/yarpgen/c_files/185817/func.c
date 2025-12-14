/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185817
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned short)56503)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))));
        var_18 = ((((((/* implicit */int) (signed char)-4)) + (2147483647))) << (((((/* implicit */int) ((_Bool) 8569793015430621599ULL))) - (1))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((arr_6 [i_2 - 4] [i_1 + 1] [i_0]) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_3 [i_2] [i_2] [i_2]))));
                        }
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_16 [i_0] [i_1 + 1] [i_1] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 3] [i_3]))));
                        }
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_2] [i_1] [i_6] [i_2 - 4] [i_1 + 1]);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8200926871864321249LL))));
                            var_22 &= ((/* implicit */int) arr_15 [i_2 - 2] [i_1 - 1] [i_0]);
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 + 1] [i_1 + 1])) ? ((-(((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))));
                        arr_20 [i_0] [i_1 + 1] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (signed char)115)))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned int) var_10);
        arr_22 [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)28415))));
    }
    var_24 |= ((/* implicit */signed char) (-(((/* implicit */int) ((var_3) <= (((((/* implicit */_Bool) (short)-28421)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-8200926871864321249LL))))))));
    var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) > (((var_9) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(var_16)))) : ((+(8200926871864321249LL))))) : (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32754)))))))));
}
