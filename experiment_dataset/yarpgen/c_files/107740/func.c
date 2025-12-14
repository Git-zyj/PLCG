/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107740
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483392)) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2] [i_3])) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_0 [i_3] [i_2]) : (((/* implicit */int) arr_5 [i_0] [17LL] [i_2] [i_3 + 2]))))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [12] [14])) ? (((/* implicit */long long int) ((/* implicit */int) (short)18347))) : (arr_8 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [(_Bool)1]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)18338)) ? (((/* implicit */int) (short)18334)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))))) : (arr_9 [i_1] [i_2 - 1] [i_3 - 2] [i_3] [i_3 + 2]))))));
                        var_13 ^= ((/* implicit */int) arr_3 [i_0] [i_0]);
                    }
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 1])) : (arr_4 [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */int) 1293327488U);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63146)) ? (((/* implicit */int) (short)6925)) : (((((/* implicit */_Bool) 1293327509U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)63144))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63135)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_6 [i_5 + 1] [i_1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 3001639797U)) : (arr_4 [i_1] [i_2 - 2]))) : (((arr_4 [i_2 - 2] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_5])))))))));
                            }
                        } 
                    } 
                    arr_17 [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */short) (signed char)12);
                    arr_18 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2 + 1] [i_0] [i_2 - 1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */unsigned long long int) var_0);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (67108848)));
    var_17 = var_8;
    var_18 = ((/* implicit */signed char) ((var_10) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1293327488U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : (var_1))))));
}
