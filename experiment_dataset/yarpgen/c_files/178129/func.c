/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178129
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_1] [(unsigned char)4] [i_1] [i_4] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) 4811385540859365307ULL)) && (((/* implicit */_Bool) 4811385540859365315ULL)))))));
                                arr_15 [i_0] [(_Bool)1] [15ULL] [i_1] [i_3 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((var_7) % (var_7))) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) arr_7 [(unsigned char)2] [(unsigned char)2] [i_2])) : (((/* implicit */int) arr_1 [i_2])))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((arr_13 [13ULL] [i_1 - 3] [i_1 - 1] [i_1 + 1] [i_1 - 3]) ? (((/* implicit */int) arr_13 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_13 [i_1] [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 - 3])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) (unsigned short)7);
                                arr_23 [i_6] [i_5] [i_1] [i_1] [1ULL] [1ULL] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 3] [i_1] [i_1 - 3]))) < (var_7))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_6])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((var_3) || (var_1))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) - (14ULL))))))));
    var_12 = var_2;
}
