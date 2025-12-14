/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164808
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_0] [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)12] [(_Bool)1] [(signed char)13]))) : (arr_3 [i_0])))));
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_0 [i_1 + 1]) > (arr_0 [i_1 - 1]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)100)))), ((~(((/* implicit */int) arr_9 [i_1 + 1]))))));
                arr_11 [i_0] [i_1] [0LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_2 [i_0]))))) & (((((/* implicit */int) (unsigned char)102)) ^ (((/* implicit */int) var_4))))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))));
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1890161290U)) == (((arr_12 [i_0] [(unsigned short)4] [i_2] [i_3]) >> (((max((var_8), (((/* implicit */long long int) var_5)))) - (8060709044047751315LL)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) -736166976))));
                }
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_9)) ? (arr_13 [18ULL] [i_0] [i_1] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8)))))));
                var_22 = ((/* implicit */int) var_1);
            }
        }
        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5 + 3] [(signed char)11] [i_0] [i_5 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_17 [15LL] [i_5 + 4] [i_5] [i_0])))))) : (((/* implicit */int) (unsigned char)155))));
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5 + 4] [i_5 + 4] [i_5])) ? (arr_13 [i_5 + 3] [i_5] [i_5] [i_5 + 4] [11]) : (arr_13 [i_0] [i_0] [i_5] [i_5 + 1] [i_5 - 1])))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_5 + 3]) >> (((arr_3 [i_5 - 1]) - (2654635002U)))))));
            var_25 = ((/* implicit */int) (-(-5879508137317807359LL)));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(var_13)))) ? (7613151293794834075LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7820325143188786530LL)) ? (((/* implicit */int) arr_23 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)109))))))));
                            arr_30 [i_0] [20U] [i_6] [i_7] [i_7] [20U] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_5] [i_6]))));
                            var_27 = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((unsigned int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (2404806005U) : (2404806004U)))) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -8205418844720260802LL)))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)0)), (var_14)))), (max((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_0])))))));
    }
    var_29 = ((/* implicit */unsigned char) var_11);
}
