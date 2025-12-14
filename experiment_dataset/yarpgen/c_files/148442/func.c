/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148442
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_8))))), (min((((/* implicit */unsigned char) (signed char)5)), ((unsigned char)91)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [(unsigned char)10])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) -2147483629))))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)57355)))) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [(unsigned char)0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_12 = min((max((var_2), (var_2))), (var_4));
    var_13 = ((/* implicit */unsigned char) ((min(((~(var_7))), ((~(var_8))))) & (var_10)));
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_11 [(signed char)4] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_9 [i_3 - 2] [i_2 - 1] [i_1]))), (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 3])) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1]))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_9))));
                    arr_12 [i_1] [i_1] [i_1] [(unsigned char)21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2 + 1])) ? (min((17010479881019634248ULL), (((/* implicit */unsigned long long int) (unsigned short)8165)))) : (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1])) ? (var_10) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [(unsigned char)17])))))))));
                }
            } 
        } 
    } 
}
