/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107028
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
    var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned short)30720)) << (((/* implicit */int) var_12))))));
    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_1)));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)24))))))) ? (((/* implicit */int) ((signed char) var_1))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3238987658890981521ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29879)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [2ULL] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-29874)) + (((/* implicit */int) var_13))))))))));
                var_18 = ((/* implicit */int) var_2);
                arr_6 [i_0] [i_0] = ((short) ((((/* implicit */_Bool) (short)29879)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((signed char) var_5)))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((unsigned char) var_3));
                            var_20 = min((arr_12 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [(unsigned short)6] [i_0] [i_1] [i_0] [i_0] [i_0])), (arr_12 [i_3] [(_Bool)1] [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_10 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0])))) : (((/* implicit */int) (short)-29881))))));
                            var_21 = ((/* implicit */unsigned char) arr_7 [5U] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
