/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174335
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
    var_17 ^= ((/* implicit */unsigned int) ((var_9) >= (var_9)));
    var_18 = ((/* implicit */long long int) max((var_18), (var_16)));
    var_19 = ((/* implicit */signed char) var_2);
    var_20 = ((/* implicit */signed char) ((short) var_15));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_8 [(signed char)6] [4ULL] [i_2] [(unsigned short)10] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)154), (max((arr_5 [i_0] [(unsigned char)9] [(unsigned char)9]), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) / ((~(var_16)))));
                            var_21 = ((/* implicit */unsigned short) ((long long int) arr_3 [i_1]));
                            var_22 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_0 [i_3 + 2] [i_2])))) | ((-(((/* implicit */int) arr_0 [i_0] [i_2]))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_23 |= ((/* implicit */unsigned short) (unsigned char)77);
                                var_24 = ((/* implicit */unsigned short) arr_2 [i_1] [(signed char)8] [i_3]);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                            {
                                var_25 = ((/* implicit */int) arr_5 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4]);
                                var_26 |= ((/* implicit */short) max(((unsigned short)49236), ((unsigned short)16300)));
                                var_27 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)16279)) : (((/* implicit */int) ((unsigned short) (unsigned short)49236))))));
                                var_28 -= ((/* implicit */short) (!(((/* implicit */_Bool) max(((unsigned short)49221), ((unsigned short)49236))))));
                                arr_13 [i_5] [i_2] [i_2] [(unsigned short)8] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3 + 4] [i_3 - 1] [i_3 + 4])) ? (((/* implicit */int) max(((unsigned short)47942), (((/* implicit */unsigned short) (short)-590))))) : (((/* implicit */int) var_3))));
                            }
                        }
                    } 
                } 
                arr_14 [5U] [i_0] = ((/* implicit */long long int) var_14);
            }
        } 
    } 
}
