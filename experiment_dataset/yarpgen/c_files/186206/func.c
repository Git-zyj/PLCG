/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186206
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) arr_1 [i_0]);
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))) + (2147483647))) + (2147483647))) << (((((arr_7 [i_0] [22ULL] [i_2]) + (5588068473792177944LL))) - (25LL)))))), (((((/* implicit */_Bool) max((arr_8 [i_4] [8ULL] [8ULL] [8ULL]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned long long int) 4266914842U)), (arr_8 [i_2] [(short)13] [i_2] [(short)13]))) : (arr_2 [i_3] [i_4]))))))));
                                arr_10 [i_1] [i_1] [(unsigned short)14] [i_3] [i_4] = ((/* implicit */short) (~((-(((((/* implicit */unsigned int) (-2147483647 - 1))) * (33554304U)))))));
                                arr_11 [i_4] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (3235839998248247086ULL)))) ? (arr_5 [i_4] [i_1] [(unsigned short)7]) : (arr_8 [i_0] [i_0] [i_0] [(_Bool)1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(727745465U))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) (-2147483647 - 1));
                var_13 = ((/* implicit */signed char) (((+(arr_2 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53816)))));
            }
        } 
    } 
    var_14 &= ((/* implicit */short) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), ((-(33554299U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_6)))))))));
}
