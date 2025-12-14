/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140567
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
    var_17 = ((/* implicit */unsigned char) ((max((max((var_0), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) var_5)))) % (((/* implicit */long long int) max((((/* implicit */int) var_8)), (((((/* implicit */int) var_9)) & (-108342348))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)19421), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_3))))) ? (((unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_3))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)1]))))));
        var_20 = (-(arr_1 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_0 [i_0])))), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))))), (var_0))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((signed char) arr_2 [12U] [i_1] [i_1]))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 &= ((/* implicit */_Bool) ((min((max((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_0] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (arr_8 [(short)22] [(short)22]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (3223197052U))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [17U] [6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-63)) ? (398163297835844726LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))), (min((arr_13 [9ULL] [i_3] [i_2] [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)65)), (arr_6 [i_0] [i_2] [i_4]))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1793370973U))) ? (((/* implicit */int) arr_0 [i_4 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) 3223197052U)) && (((/* implicit */_Bool) arr_1 [i_0] [i_4])))))))) & (max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (2501596323U) : (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (signed char)-30))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [(signed char)10] &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [(short)21])) < (arr_4 [i_0] [i_2]))));
        }
    }
}
