/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132576
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((short) (_Bool)1));
        var_16 = ((/* implicit */short) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) max((max(((_Bool)1), ((_Bool)1))), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) && (max(((_Bool)1), (arr_0 [i_0] [(signed char)4]))))))));
        var_17 *= ((/* implicit */signed char) ((_Bool) (signed char)-123));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535)))));
        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((short) max((arr_0 [i_0] [i_0 + 1]), ((_Bool)1)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_20 -= ((signed char) (_Bool)1);
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) arr_2 [8U]);
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) && (((/* implicit */_Bool) arr_1 [i_1 + 1]))));
        var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) var_13);
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_18 [i_5] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_16 [(short)1] [i_4 + 1] [i_4 - 1] [i_5 + 2]))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_5 - 1])), ((signed char)-14)))) : (((((/* implicit */int) arr_16 [i_3] [i_4 - 1] [i_4 + 2] [i_5 - 3])) << (((/* implicit */int) var_10))))));
                        var_23 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_6 [i_4] [i_4])))));
                        arr_19 [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((unsigned int) (signed char)78))) || (arr_7 [i_2] [i_2])))));
                        arr_20 [i_5] [i_4 - 1] [i_3] [i_2] = ((/* implicit */short) (_Bool)1);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_9)), (arr_15 [i_3]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        var_25 = (((+(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) < (((var_4) << (((2653906854U) - (2653906831U)))))))));
        arr_23 [(unsigned char)16] |= ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)13165))));
}
