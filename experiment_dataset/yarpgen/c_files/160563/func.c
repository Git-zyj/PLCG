/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160563
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) ^ (((/* implicit */int) var_0))))) : ((-(((unsigned long long int) (_Bool)1))))));
    var_14 &= ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((max((var_2), (((/* implicit */unsigned int) ((arr_0 [(_Bool)1] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_2 [(signed char)4] [i_0]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_16 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((-(arr_1 [17LL] [i_0]))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 4; i_2 < 19; i_2 += 4) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_7 [13])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_13 [i_1] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_2 - 4] [i_1])), (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_1 [i_1] [(short)17]) : (((/* implicit */unsigned long long int) 0LL))))))) ? (var_1) : (min((((/* implicit */unsigned long long int) arr_10 [19U] [i_2])), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [17] [i_2]))) : (arr_9 [i_1] [i_2 - 4])))))));
        }
        var_18 = ((/* implicit */long long int) (-(((max((var_2), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [6LL] [i_1])))))));
        arr_14 [i_1] = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_17 [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((((/* implicit */_Bool) (-(arr_5 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_3]))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) arr_2 [i_1] [i_3])))))) : (((/* implicit */int) arr_7 [i_3]))));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_24 [i_3] |= ((/* implicit */unsigned int) arr_21 [i_5] [i_4 - 1] [i_3]);
                        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) (signed char)7)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_3] [i_5])) & (((/* implicit */int) arr_0 [i_3] [i_5])))))))) ? (max((min((arr_9 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_5] [i_3] [i_4])))), (((/* implicit */unsigned long long int) arr_5 [i_5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) arr_7 [18])))))) : (min((3344714965783438178LL), (((/* implicit */long long int) (_Bool)1)))))))));
                    }
                } 
            } 
        }
    }
}
