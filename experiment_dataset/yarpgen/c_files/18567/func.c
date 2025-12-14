/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18567
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((arr_3 [i_1] [i_1 + 1]) ? (3765297421U) : (arr_0 [i_1 + 1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [4LL] [i_1] [2ULL] [i_1] [i_1] [i_1] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-2147483636) : (((/* implicit */int) arr_9 [i_1 + 1] [i_2] [8] [i_2] [i_3 + 3] [i_3 + 2]))))) == ((+(3765297396U)))));
                                var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_2] [i_2])) ? (((5887519207442789046ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_0])) ? (529669880U) : (((/* implicit */unsigned int) 252294482)))))));
                                var_11 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (968827930))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] = ((6427042709838822735ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)7213))), (((/* implicit */unsigned short) (unsigned char)255)))))));
                var_12 &= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned int) (-(-422530917)))) : (2032U))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)125))));
    var_14 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65510)) : (1644368133)))))));
}
