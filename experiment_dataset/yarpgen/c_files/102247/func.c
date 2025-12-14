/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102247
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
    var_19 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) (-((-(((/* implicit */int) (short)9)))))))));
    var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_12)) << (((((/* implicit */int) var_1)) - (42161))))) == (((/* implicit */int) var_4)))))) >= (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_17))))) : (708974667U)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) >> ((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (7))))) ^ (((((/* implicit */_Bool) 3257231070U)) ? (((/* implicit */int) (unsigned short)33534)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))))) & (((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) arr_1 [i_2] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned short) (+(((int) arr_9 [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = min((((var_17) ? (((/* implicit */unsigned int) arr_13 [i_0] [i_1 + 1] [i_3] [i_4] [i_4] [i_2] [(short)2])) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] [i_4]))), (((/* implicit */unsigned int) (+(arr_13 [i_0] [i_1 + 1] [i_2] [i_0] [i_1 + 1] [i_1] [i_3])))));
                                arr_15 [i_2] [i_0] [(unsigned short)3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2] [i_2])) && (((/* implicit */_Bool) ((unsigned int) var_0))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))) & (min((arr_11 [i_3] [i_1] [i_2] [i_3] [i_4] [i_2]), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [i_2])))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2] [(_Bool)1] [i_2])))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned int) var_0);
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_7 [i_1] [i_4])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1214999775)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)11225))))) ? (((/* implicit */long long int) min((((/* implicit */int) (short)15)), (-1214999760)))) : (((((/* implicit */_Bool) -1214999764)) ? (var_10) : (var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            arr_20 [13U] = ((/* implicit */unsigned char) var_14);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (arr_1 [i_0] [i_5])))))))));
        }
    }
}
