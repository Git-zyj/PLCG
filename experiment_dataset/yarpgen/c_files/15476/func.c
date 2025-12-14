/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15476
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
    var_18 &= var_13;
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(unsigned char)8] [i_2] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [0ULL] [i_2]) : (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [(_Bool)1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) arr_4 [0ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_0 + 3])))))));
                    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? ((~(((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) ? (arr_1 [(signed char)6] [i_1]) : (arr_2 [i_0] [8ULL])))))) && (((/* implicit */_Bool) (+((~(((/* implicit */int) var_2)))))))));
                    var_20 = ((11226132370755386862ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
