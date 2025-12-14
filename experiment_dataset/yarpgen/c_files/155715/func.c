/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155715
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [3LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)10372)) : (-1862216637)));
                var_12 += ((/* implicit */short) ((((/* implicit */_Bool) ((14805945220897514511ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10396)))))) ? (((((/* implicit */_Bool) 14475357133980950055ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (21U))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (min((2069858125U), (((/* implicit */unsigned int) 134217727)))) : (((/* implicit */unsigned int) min((var_1), (var_1))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        {
                            var_14 += ((/* implicit */long long int) var_11);
                            arr_20 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0))))), (arr_18 [i_2])))));
                            arr_21 [i_2] [i_3] [i_4 - 1] [i_5 + 1] = min((((short) var_2)), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (-1862216647))))))));
                            var_15 -= ((/* implicit */unsigned long long int) ((signed char) (unsigned short)10372));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
