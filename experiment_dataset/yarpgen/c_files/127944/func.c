/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127944
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
    var_11 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (max((var_9), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [(signed char)4] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0LL))));
                    var_12 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1594172024U)), (2005783865127351260ULL)))) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? ((-(-8LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)28737)) ? (2005783865127351268ULL) : (((/* implicit */unsigned long long int) 1594172047U))))))) ? ((((!(((/* implicit */_Bool) arr_4 [4LL] [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1] [(signed char)0])) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2])) : (arr_2 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_0 + 2]))))) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_2]))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_4 [i_0] [i_1] [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) : (max((16440960208582200354ULL), (((/* implicit */unsigned long long int) 8245561956806134843LL))))))));
                }
            } 
        } 
    } 
}
