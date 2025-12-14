/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149600
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_1 [(_Bool)1]) <= (arr_2 [4U] [1LL])))) / (((arr_1 [(unsigned short)1]) | (arr_2 [i_0] [i_0])))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) | (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) == (18446744073709551597ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_5 [(short)5] [i_1] = ((/* implicit */unsigned int) max(((~((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)2]))))))), (((/* implicit */long long int) (short)(-32767 - 1)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_15 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_1] [i_4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32745))) - (8162094285316642098LL))))))));
                        var_23 = ((/* implicit */unsigned char) (short)19180);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_24 = ((/* implicit */long long int) arr_16 [i_5]);
        var_25 = ((/* implicit */unsigned long long int) arr_17 [i_5] [i_5]);
    }
    var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((max((((/* implicit */unsigned int) (short)32753)), (4294967282U))) - (4294967269U))))))));
}
