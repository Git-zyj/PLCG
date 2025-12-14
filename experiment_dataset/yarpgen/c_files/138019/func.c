/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138019
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) 312664646);
        arr_3 [i_0] [11ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) ? ((-(arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) max((var_3), (arr_2 [i_0])))) : (((-5644256310025649943LL) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_3])))) ? (arr_0 [i_2 - 1]) : (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (arr_0 [i_1]) : (((/* implicit */long long int) 2147483647))))));
                                var_22 = (!((!(((/* implicit */_Bool) arr_2 [i_4 - 1])))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [11] = (+(-17LL));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((((arr_17 [13] [i_1] [i_1] [i_1] [i_1]) - (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (5644256310025649943LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) : ((+(arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
    }
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 9; i_7 += 4) 
        {
            arr_25 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_7 + 2])) ? (arr_19 [i_6]) : (var_9)));
            var_24 = ((/* implicit */unsigned long long int) arr_24 [1ULL] [i_7] [(unsigned short)3]);
            arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2)))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) arr_13 [i_6] [i_6] [(unsigned short)10] [i_7 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9615999009039815230ULL))))) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_7]))));
            var_25 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_13 [(unsigned short)8] [i_7] [i_7] [(unsigned short)8])), (2147483647)))) : (((((/* implicit */_Bool) arr_1 [i_7])) ? (5787234627322155542LL) : (((/* implicit */long long int) var_1))))))) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [i_7] [5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (7189580801102677820ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_20 [i_7]))))))))));
        }
        var_26 = ((((((18) < (((/* implicit */int) var_14)))) ? (((/* implicit */int) (_Bool)1)) : (min((arr_1 [i_6]), (2))))) % (max((((/* implicit */int) (_Bool)1)), (681675435))));
    }
}
