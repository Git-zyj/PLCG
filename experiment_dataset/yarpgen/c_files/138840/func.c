/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138840
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (max((arr_1 [i_2 - 1] [i_1 + 2]), (((/* implicit */long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (short)24))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */int) arr_8 [i_1])) >= (1695649610))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned char) min(((short)-32175), (((/* implicit */short) (_Bool)1))));
                                var_13 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) min((arr_7 [i_1 + 1] [i_3] [i_4]), (arr_10 [i_0] [i_0] [(unsigned char)7] [i_4 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-7493)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((~((~(3159627130U))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (short)7051)))) : (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)0)))))))))))));
}
