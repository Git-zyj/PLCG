/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134702
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
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) -1176693134332240978LL)) ? (723193049U) : (3823723033U))), (((2147483648U) - (3571774247U)))));
    var_13 = ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) 3571774246U)) && (((/* implicit */_Bool) (unsigned short)57266)))))) && (((((/* implicit */_Bool) 2731009072U)) || (((/* implicit */_Bool) (short)-3196))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) ((((((/* implicit */_Bool) 3823723033U)) && (((/* implicit */_Bool) (unsigned char)75)))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) 3606093502U)) ? (-2328929111146593264LL) : (((/* implicit */long long int) 247910873U))))));
        arr_2 [(_Bool)1] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2554055885U)) && (((/* implicit */_Bool) (unsigned short)57290))))), (((((/* implicit */_Bool) 3606093476U)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (short)15494)) << (((((/* implicit */int) (unsigned short)12798)) - (12785)))))), ((~(((2328929111146593263LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                        var_15 = ((long long int) 12U);
                    }
                } 
            } 
        } 
    }
}
