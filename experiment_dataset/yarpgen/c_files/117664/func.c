/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117664
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((+(((((/* implicit */long long int) ((/* implicit */int) var_11))) / (-517880614668028438LL))))) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_4 + 3] = ((/* implicit */unsigned short) max(((signed char)(-127 - 1)), ((signed char)117)));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)21] [i_4] [i_1] [i_3] [i_3] [i_4 + 3])) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max(((short)31), (((/* implicit */short) (_Bool)1))))))) ^ (arr_10 [i_0] [i_0] [i_0] [i_4])));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)192)) >> (((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])) || (((/* implicit */_Bool) -6702440003200102396LL)))))) ^ (min((((/* implicit */long long int) (unsigned char)192)), (var_16))))) + (1209065509898913148LL)))));
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_1 [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 767159697)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (_Bool)0))))) ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_1]))))))));
                    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(short)20]))) * (min((1330219783U), (((/* implicit */unsigned int) (signed char)104))))))) ? (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_4 [(short)0] [(short)0])) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned char) var_4))))) : (min(((+(((/* implicit */int) arr_12 [(unsigned char)12] [i_2] [(unsigned char)12] [(unsigned char)12] [i_2])))), (((((/* implicit */int) arr_5 [i_0] [i_0])) - (((/* implicit */int) (unsigned char)80))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) var_14);
}
