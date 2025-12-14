/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173706
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_1] [i_2] = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) >= ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37969))) : (arr_8 [i_0] [i_1] [i_2] [(_Bool)1])))))));
                    var_18 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (min(((((_Bool)1) ? (((/* implicit */int) arr_5 [4ULL] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */signed char) ((((((arr_0 [i_0] [i_0]) - (2147483647))) + (2147483647))) << (min(((((_Bool)1) ? (((/* implicit */int) arr_5 [4ULL] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17422)) ? (11318506252440557540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35)))));
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (unsigned short)35589)))) * ((+(((/* implicit */int) arr_2 [i_3] [i_3]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (-(var_10)))), (-8649691082575563881LL))), (((/* implicit */long long int) (signed char)64))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */long long int) (-(arr_6 [(_Bool)1] [i_4] [i_5] [i_6])))) != (max((((((/* implicit */_Bool) 7128237821268994074ULL)) ? (8649691082575563891LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6810))))), (((/* implicit */long long int) arr_7 [6U] [i_4] [(unsigned char)1])))))))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)119))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
