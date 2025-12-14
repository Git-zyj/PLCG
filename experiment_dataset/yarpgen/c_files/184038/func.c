/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184038
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
    var_17 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 215461634157851148ULL)) ? (((((/* implicit */_Bool) 18231282439551700467ULL)) ? (215461634157851148ULL) : (((/* implicit */unsigned long long int) -263400287)))) : (((/* implicit */unsigned long long int) max((-1), (263400286)))))));
    var_18 = ((/* implicit */long long int) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21354)))));
    var_19 = ((/* implicit */unsigned short) (short)13120);
    var_20 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), ((short)-21354)))) ? (((/* implicit */int) (short)13112)) : (((/* implicit */int) max(((signed char)71), ((signed char)71))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_8), (((/* implicit */short) arr_10 [i_2 - 1] [i_1] [i_2] [i_1] [i_3 + 4]))))) != ((+(((/* implicit */int) (signed char)56))))));
                                var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) (unsigned short)58144)), (max((var_15), (((/* implicit */unsigned long long int) var_11))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
