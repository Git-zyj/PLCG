/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174961
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)))))))) : (((var_0) ^ (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((arr_2 [i_0]) >> (((arr_2 [i_1]) - (13293651626860444733ULL))))))))));
                var_12 = ((/* implicit */unsigned char) var_3);
                var_13 = ((/* implicit */signed char) ((((arr_3 [i_0]) || (arr_3 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((7316896589574751560LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58340))))))));
                arr_6 [(unsigned char)5] [8ULL] [(short)8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_1])))) ? (((/* implicit */int) ((var_0) <= (arr_4 [i_0])))) : (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_14 = ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_4))), (var_4))) << (((((var_0) ^ ((-(var_0))))) - (18446744073709551592ULL))));
}
