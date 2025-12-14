/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149951
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
    var_17 = ((((min((((/* implicit */long long int) var_6)), (var_12))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((((-237139663) + (((/* implicit */int) (_Bool)0)))) + ((-(var_14)))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) ((signed char) -237139647))), (max((var_1), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [14LL] [i_2 - 1] = ((/* implicit */unsigned char) var_1);
                    arr_11 [i_1] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (arr_5 [i_1] [0] [0])))) ? (((((/* implicit */_Bool) arr_6 [i_1] [12LL] [i_1])) ? (32767LL) : (((/* implicit */long long int) arr_4 [(unsigned short)11] [1ULL] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))))) ^ (max((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [(unsigned short)1] [i_1] [(_Bool)1]))))), (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))))));
                    arr_12 [i_0] [(signed char)2] [i_1] = ((/* implicit */int) var_3);
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0)) * (arr_0 [i_0])))), ((+(var_9))))), (((arr_2 [i_0] [i_0] [i_1]) / (((/* implicit */unsigned long long int) 4294967295U))))));
                }
            } 
        } 
    } 
}
