/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1220
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))))) ? (((/* implicit */int) arr_13 [(signed char)2] [i_1])) : (((/* implicit */int) arr_12 [i_1 + 2] [i_2 - 1] [i_3 - 3] [(unsigned char)2] [i_4 + 1] [i_4 - 1])))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (((unsigned long long int) var_15))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) ? (((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 1443155828U)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max((var_21), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) var_0);
                                arr_18 [i_0] [i_1 - 3] [2] [i_5] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (1443155828U) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2]))));
                                var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((2239649761U), (((/* implicit */unsigned int) (_Bool)0))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))))), (min((((/* implicit */long long int) (_Bool)0)), (0LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_11))));
    var_25 = ((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)31))))) ? (var_5) : (((((/* implicit */_Bool) var_5)) ? (4177920U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_14)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_13)) : (8719094042674919865ULL)))))));
}
