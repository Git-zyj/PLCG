/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12195
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_2))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned long long int) arr_3 [i_0]);
        var_15 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */long long int) arr_2 [i_0])) : (arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)108)) ? (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))) || (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((int) arr_4 [i_1])), ((~(((/* implicit */int) (unsigned char)111)))))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_3 [i_1])))) ? (max((((/* implicit */unsigned long long int) var_8)), (max((16772139324684060430ULL), (((/* implicit */unsigned long long int) 4294967295U)))))) : ((-(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (16772139324684060425ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65524)), (16772139324684060430ULL)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1674604749025491186ULL)) ? (((/* implicit */int) (short)-13135)) : (((/* implicit */int) (short)-25092)))), ((~(((/* implicit */int) arr_0 [i_1] [i_1]))))))) : (1674604749025491187ULL)))));
        arr_8 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 589503526U)), (5258347677650391717ULL)));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (((_Bool)1) ? (((min((arr_6 [i_1] [i_1]), (arr_6 [i_2] [i_2]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (_Bool)1))))))) : (arr_9 [i_2] [i_1])));
                    var_21 = ((/* implicit */int) ((min((((unsigned int) arr_2 [i_2])), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)95))))))) << (((max((((long long int) arr_11 [i_2] [i_2] [i_2])), (arr_3 [i_1]))) - (4294820494562563582LL)))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13135)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-25101)), (2147483628)))) : (1674604749025491186ULL)))) ? (((/* implicit */int) ((((arr_5 [i_2] [i_1]) && (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_12 [i_1])))))))) : (arr_4 [i_3]));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 2135353407)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (((((/* implicit */unsigned long long int) 1330175400U)) * (min((((/* implicit */unsigned long long int) (unsigned short)3388)), (11347861280370986732ULL)))))));
}
