/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146490
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
    var_14 &= ((/* implicit */int) var_5);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1])))), (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [(unsigned short)9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_1 [i_0 - 2])), (max((((/* implicit */unsigned short) arr_1 [i_0 + 1])), (arr_0 [i_0 - 2])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [16ULL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [16]))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) (_Bool)1)))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_15 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_10)))) ? (((arr_8 [i_2] [i_2]) ? (2183223525U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((arr_8 [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))))))));
        arr_10 [(_Bool)0] = ((/* implicit */signed char) ((min((((/* implicit */int) arr_9 [i_2])), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_1)))))) <= (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                for (long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_19 [i_4] [17LL] [i_4] [(short)16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) % (((((/* implicit */int) arr_4 [i_3])) ^ (((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_13 [(_Bool)1] [i_3] [10LL] [i_5 - 1]))))))));
                        var_16 = max((((arr_18 [(_Bool)1] [(_Bool)1] [11LL] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_2]), (((/* implicit */signed char) arr_8 [4] [i_2])))))) : ((+(arr_12 [(_Bool)1] [i_5 - 1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-72057594037927936LL))))))));
                    }
                } 
            } 
        } 
    }
}
