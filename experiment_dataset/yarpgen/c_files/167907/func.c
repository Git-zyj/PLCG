/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167907
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
    var_18 += ((/* implicit */short) ((long long int) var_9));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((((unsigned int) arr_11 [(signed char)10] [i_1 - 1] [(signed char)10] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2] [i_2] [i_2] [i_2])) ^ (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2])))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_3]))) + (arr_0 [i_3] [i_2]))) + (9223372036854775807LL))) << (((8072194276657013644LL) - (8072194276657013644LL))))));
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [5LL] [i_2 - 3] [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 2] [(unsigned char)7] [i_2])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 + 3] [i_3])) ? (((((/* implicit */int) (signed char)-31)) ^ (arr_4 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(short)12] [i_2])) != (((/* implicit */int) (unsigned short)15138)))))))) : (arr_0 [i_1] [i_3]));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 3496500096U))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) -1530948344690134788LL))))), (((unsigned long long int) (unsigned short)15138))))) ? (min((min((((/* implicit */unsigned int) -622800949)), (arr_10 [i_0 - 2] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) min(((signed char)31), ((signed char)-73)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [11LL])))))) ? (((arr_10 [8LL] [i_1] [i_0] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))) : (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2933464430U)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)50398)))) : (((/* implicit */int) var_4))))), (min((var_13), (((/* implicit */long long int) max(((unsigned short)15143), (((/* implicit */unsigned short) var_0)))))))));
    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned short) 109791348)), (((/* implicit */unsigned short) ((-8072194276657013645LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))))))))) ? (((var_12) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9200331794861144333LL)) ? (((/* implicit */long long int) var_17)) : (-4904730505437082006LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)19), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_8))))));
}
