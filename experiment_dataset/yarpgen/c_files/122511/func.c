/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122511
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((5851599697668139801ULL), (((/* implicit */unsigned long long int) (unsigned short)38435))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))) : (6018006756203338882LL)))), (var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) (signed char)(-127 - 1));
                                arr_13 [i_0] [i_3] [i_2] [10LL] [i_0] = ((/* implicit */signed char) ((unsigned int) (-(min((arr_5 [i_1] [(signed char)3]), (((/* implicit */unsigned int) var_13)))))));
                            }
                        } 
                    } 
                } 
                var_17 -= ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) (unsigned short)2967))) + (2147483647))) << (((((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)528))))) - (14834302582793234893ULL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8)))))))))));
    var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14263479086914167327ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))) * (((var_7) / (var_12)))))));
}
