/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156331
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
    var_18 = ((/* implicit */long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), ((!(((/* implicit */_Bool) var_10))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((long long int) arr_7 [(_Bool)1] [8LL] [i_2] [i_2])) == (((/* implicit */long long int) ((arr_7 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))) - ((~(((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1)))))))))));
                    var_20 = ((/* implicit */_Bool) ((((arr_5 [(unsigned char)0] [i_1] [i_1 - 1]) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61827)) ^ (((/* implicit */int) (unsigned short)9241))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -505036404)) + (arr_3 [i_0])))) * (max((var_14), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) (-(min((var_7), (((/* implicit */long long int) (unsigned short)61827)))))))));
                    arr_10 [i_0] [8ULL] [(unsigned short)6] [i_0] = ((/* implicit */long long int) (+(((arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1]))))));
                    var_21 ^= ((/* implicit */unsigned int) (short)8927);
                }
            } 
        } 
    } 
}
