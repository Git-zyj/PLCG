/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119512
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_0 [(signed char)14] [2ULL]), (((/* implicit */unsigned short) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_4 [i_2 - 3] [(unsigned short)10] [i_0])) : (((/* implicit */int) (_Bool)0))))) : ((~(arr_5 [i_2] [(signed char)13] [14] [6U]))))), (((/* implicit */unsigned int) (short)-1))));
                    arr_8 [i_1] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0])))))) - (((/* implicit */int) (unsigned short)29842))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2 + 2] [i_1] [i_1] = ((((/* implicit */int) arr_6 [i_0] [(unsigned short)6] [4U] [i_0])) - (((((/* implicit */int) ((_Bool) (unsigned short)29814))) - ((-(((/* implicit */int) var_4)))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_1 + 1] [i_2] [(signed char)1] [(unsigned short)9])) ? (max((arr_11 [i_0] [(signed char)10] [i_2] [(signed char)4] [(signed char)4]), (((/* implicit */int) (signed char)(-127 - 1))))) : ((+(((/* implicit */int) (_Bool)1))))))) / (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_5 [(_Bool)1] [(signed char)10] [2] [(unsigned short)1]))), (((/* implicit */unsigned int) ((signed char) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */int) var_11)) % (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))));
}
