/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163974
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 |= ((/* implicit */short) (((((((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)57)))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) << (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))) : (arr_4 [(_Bool)1] [i_1] [i_2]))) - (118LL)))));
                    var_20 = ((/* implicit */unsigned long long int) (~(((var_3) >> (((((/* implicit */int) arr_2 [i_1] [i_1])) - (71)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1594609268)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 479236610U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) & (((arr_5 [i_4] [i_3] [i_1] [(signed char)11]) >> (((var_11) + (981570052)))))));
                                arr_14 [(short)12] [i_3] [(short)12] [i_1] [(short)12] = ((/* implicit */_Bool) ((((1297538178U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned int) (+(arr_1 [i_1] [i_1]))))));
                                arr_15 [(unsigned char)8] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((17129499988105756933ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */int) var_2);
                                arr_17 [i_2] = ((/* implicit */unsigned char) ((var_4) / (((/* implicit */unsigned long long int) 1266825632))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 ^= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)0)));
}
