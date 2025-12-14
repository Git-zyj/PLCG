/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176286
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_0 [(signed char)2]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-103))))) : (((((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)65523))))))));
                var_19 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [(signed char)4])) > (((/* implicit */int) (unsigned char)108))))), (((short) arr_0 [(signed char)16]))))), (((((((/* implicit */int) arr_0 [4])) << (((arr_3 [(unsigned short)5] [i_1]) + (5638266914984743949LL))))) >> (((((/* implicit */int) arr_2 [i_0])) - (170)))))));
                var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_0]) : (-2945231163136903562LL))), (max((max((((/* implicit */long long int) (unsigned char)148)), (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) arr_2 [i_0]))))));
                arr_5 [i_0] [i_1] = max(((((+(((/* implicit */int) (unsigned char)48)))) <= (((/* implicit */int) max(((signed char)39), ((signed char)-118)))))), (arr_0 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((var_3) ? (((((/* implicit */int) ((signed char) var_12))) | (((/* implicit */int) var_4)))) : (min((((/* implicit */int) ((signed char) var_4))), ((~(((/* implicit */int) var_17))))))));
    var_22 -= ((/* implicit */signed char) var_14);
}
