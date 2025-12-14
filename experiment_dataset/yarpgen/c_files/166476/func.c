/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166476
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
    var_15 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) >> (((9223372036854775804LL) - (9223372036854775775LL)))))), (var_8))), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0])) << (((max((((/* implicit */int) var_10)), (arr_1 [i_0]))) - (505349879)))))), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)218), (((/* implicit */unsigned char) (_Bool)0)))))) ^ (((var_10) ? (5144029653416887287LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))))))) : (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0])) << (((((max((((/* implicit */int) var_10)), (arr_1 [i_0]))) - (505349879))) + (505349894)))))), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)218), (((/* implicit */unsigned char) (_Bool)0)))))) ^ (((var_10) ? (5144029653416887287LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))))))));
                arr_9 [i_0 - 1] [(unsigned char)18] [i_1] |= ((/* implicit */_Bool) (+(arr_5 [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    arr_17 [i_2] [8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 2] [i_3])) == (max((var_6), (var_6))))))) == (((arr_3 [i_2] [i_3 + 1]) ^ (arr_3 [i_2] [i_3 + 1])))));
                    arr_18 [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((_Bool) 0LL)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
}
