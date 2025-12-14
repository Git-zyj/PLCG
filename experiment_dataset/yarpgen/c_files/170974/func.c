/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170974
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_3])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2]))))))) ? ((~(arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (var_18) : (((/* implicit */int) arr_1 [i_2 - 1]))))))))));
                                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) <= (var_12))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((var_16), (((/* implicit */unsigned char) arr_10 [i_0] [i_3] [i_4])))), (((/* implicit */unsigned char) arr_0 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_8)))))) : ((~(var_9)))))));
                                var_21 = ((((/* implicit */_Bool) min((arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2])))) ? (((((arr_10 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (340019756966613504LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) : (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]));
                            }
                        } 
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max(((unsigned char)131), (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))), (((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_0]))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2266044544U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31395)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_16);
    var_23 = ((/* implicit */_Bool) min((var_23), ((!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_15)), ((unsigned char)142))))))))));
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) * ((+(((/* implicit */int) (_Bool)0))))))), (min((((/* implicit */long long int) var_0)), ((((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
    var_25 = ((/* implicit */unsigned int) var_16);
}
