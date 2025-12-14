/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179511
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
    var_17 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */long long int) var_13)) : (-9223372036854775795LL))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = (+(9223372036854775803LL));
                                arr_11 [i_0] [i_0] [i_0] [(signed char)8] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_19 &= ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-11130)) : (((/* implicit */int) var_8))))) * (((/* implicit */long long int) (+(var_13))))));
                                var_20 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3664557746U)) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) (short)21631))))), (((min((((/* implicit */long long int) var_13)), (9223372036854775804LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-21012)))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((int) (unsigned char)6));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)-84))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2 - 3]))))) : ((+(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0 + 2])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) & (4294967289U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])))))) : (arr_7 [i_0] [i_0] [(unsigned short)2] [i_0]))))))));
                    var_23 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((arr_9 [i_0] [i_1] [i_1] [(short)2]) ? (min((((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_1] [(_Bool)0])), (-91186976))) : (((arr_9 [i_0 + 3] [i_1] [i_1] [2ULL]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 3] [i_1] [0U])))))))));
                }
            } 
        } 
    } 
}
