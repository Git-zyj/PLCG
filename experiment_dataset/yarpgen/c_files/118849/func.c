/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118849
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (576460752303419392LL))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (8370761973111491499LL) : (((/* implicit */long long int) 4193081493U)))))), (((/* implicit */long long int) 101885790U)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (signed char)124)) ? (3151813506U) : (arr_2 [i_1]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_2 [i_1]))))) ? (max((((/* implicit */unsigned int) arr_3 [i_1])), (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_13 &= ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (arr_1 [(unsigned char)12] [i_0]) : (((/* implicit */int) (unsigned char)244))))))));
                            var_14 = ((/* implicit */unsigned long long int) (~(4193081506U)));
                        }
                    } 
                } 
                var_15 = ((((/* implicit */unsigned long long int) arr_7 [i_1] [i_0] [i_0])) - (((unsigned long long int) ((((/* implicit */_Bool) 3738811871U)) ? (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_0] [i_1] [14ULL])) : (arr_5 [i_1])))));
            }
        } 
    } 
}
