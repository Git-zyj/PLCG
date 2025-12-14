/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116053
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)113))))) ? (var_16) : ((~(-1550556310)))))) ? (((/* implicit */int) (unsigned short)53156)) : (((/* implicit */int) (unsigned short)12376))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [(_Bool)1] [(_Bool)1] [i_1] [1ULL] = ((/* implicit */int) max((((/* implicit */long long int) ((arr_1 [i_1 - 1]) <= (arr_5 [i_0] [(unsigned char)9] [i_1] [(unsigned char)9])))), (min((((((/* implicit */long long int) 1061502857U)) / (arr_1 [(_Bool)1]))), (((/* implicit */long long int) ((arr_1 [i_2]) != (arr_9 [i_0]))))))));
                        var_21 += ((/* implicit */signed char) ((long long int) ((((arr_9 [i_3]) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-24600)) + (24631))) - (30))))));
                        arr_11 [i_3] [i_1] [(_Bool)1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */signed char) arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]);
                    }
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)8192))))))) ^ (var_11))))));
                }
            } 
        } 
    } 
}
