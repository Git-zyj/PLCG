/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145939
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
    var_14 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [(unsigned char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967286U)) ? (4194303U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((4294967271U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */unsigned int) var_7)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (arr_0 [i_0] [i_0 + 1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 131071U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)253)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), ((unsigned char)255)))))))) : (min((arr_1 [i_1]), (arr_1 [i_1])))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_3 [i_1]))));
                }
            } 
        } 
        var_18 = (-(((((/* implicit */int) ((_Bool) arr_3 [5LL]))) + ((-(134217727))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_19 |= max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) -1271622714724909087LL))))), (max((((/* implicit */long long int) ((int) 2147483647))), (min((var_8), (((/* implicit */long long int) 39U)))))));
        arr_15 [(signed char)3] = ((((/* implicit */_Bool) ((unsigned long long int) ((arr_1 [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)-70)))));
    }
    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */signed char) (+(((int) var_10))));
        var_22 = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) ^ (4294967295U))), (((/* implicit */unsigned int) (_Bool)1)))))));
}
