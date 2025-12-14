/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16132
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))))) - (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) ^ (8879475473929260912ULL))), (((/* implicit */unsigned long long int) var_2))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1 - 3]))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (var_7)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) 16385290001432256282ULL);
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) || (((/* implicit */_Bool) -1)))) ? (min((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_6))))) || ((!(((/* implicit */_Bool) arr_6 [2ULL] [i_2])))))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) : (((arr_7 [i_2] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2])))))));
            arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) ((arr_6 [7ULL] [i_3 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_3]))))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)25)), (2U)));
                arr_17 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_22 [i_2] [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((arr_19 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 2]) << (((((/* implicit */int) arr_8 [i_5])) - (55739)))));
                            arr_23 [i_7 - 1] [i_7] [i_5] [(unsigned short)10] [i_5] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned long long int) min((min((arr_7 [i_4] [i_6]), (arr_7 [i_4] [i_7]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_5] [i_4]))))))));
                            arr_24 [i_2] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_2] [i_2] [i_4 - 1] [i_5] [i_6] [i_7] [i_7]))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_5]))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_19 -= max((max((arr_9 [i_4 + 1] [i_4 - 3] [i_4 - 3]), (arr_9 [i_4 - 2] [i_4 + 2] [i_4 + 1]))), (((_Bool) arr_9 [i_4 - 3] [i_4 - 2] [i_4 + 1])));
                var_20 = arr_19 [i_2] [i_4] [i_8] [i_8] [i_8];
                var_21 = ((/* implicit */unsigned short) arr_13 [i_2] [i_4 - 2] [i_8]);
                arr_28 [i_2] = arr_13 [i_2] [i_2] [i_2];
            }
            var_22 = ((max((var_7), (min((((/* implicit */unsigned long long int) var_3)), (arr_26 [i_2] [i_2] [i_2] [4LL]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4 - 2] [i_2] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 1])) && (((/* implicit */_Bool) arr_20 [i_4 + 2] [i_2] [i_4] [i_4] [i_4 + 2] [i_4] [i_4 - 2])))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) -18))));
            arr_29 [i_2] [10ULL] [i_4] = ((/* implicit */unsigned short) (-((-(arr_7 [i_4 - 3] [i_4 + 1])))));
        }
    }
}
