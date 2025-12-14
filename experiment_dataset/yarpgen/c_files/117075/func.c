/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117075
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_4))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (((((/* implicit */_Bool) -680075578)) ? (-4392438791679724863LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (572019332U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 5048194374252450835LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17171))) : (-4470868095248092822LL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1397834676))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_3]))) : (((unsigned long long int) 572019332U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1666)) ? (2867611816U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524)))))) : (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (1125899906842623ULL))))));
                            var_16 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 860833452)) ? (arr_1 [i_0] [i_0]) : (arr_7 [7LL] [(short)3] [i_1] [(unsigned short)4])))) ? (arr_2 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1 + 2] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
