/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169641
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((max((arr_2 [i_2 - 2] [i_1 + 1]), (arr_2 [i_2 - 2] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)27111)) : (((/* implicit */int) (_Bool)1)))))));
                        var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0 - 1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) * (arr_4 [i_1] [i_1] [i_1])))))))));
                        var_15 *= ((/* implicit */unsigned long long int) var_4);
                    }
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (signed char)92);
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_4 - 3])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (4158002684U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) 7259751263022116101ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (11186992810687435525ULL)))));
                        var_18 = ((/* implicit */signed char) (-((((-(473817800099415475LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65513))))))))));
                    }
                    var_19 |= ((/* implicit */unsigned char) max((-473817800099415486LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 1015128350921960694ULL)) ? (((/* implicit */int) (unsigned short)4064)) : (((/* implicit */int) var_6)))))));
                    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((((_Bool)0) ? (((/* implicit */long long int) var_3)) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -3602644197006629344LL)) ? (var_12) : (-792987791)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1])) / (arr_9 [i_0] [4] [i_2] [(unsigned short)7] [i_2] [(unsigned short)16])))) ? ((+(arr_12 [i_1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                    var_21 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (+(arr_6 [i_1])))) - ((-(arr_1 [(short)17]))))), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */_Bool) var_7);
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((arr_9 [i_0 + 1] [(unsigned short)9] [i_2] [i_5] [i_6] [i_6 + 2]), (((/* implicit */unsigned long long int) -473817800099415475LL))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_4)) >= (arr_1 [i_1]))))) : ((~(((/* implicit */int) arr_11 [i_0 + 1] [i_5] [i_5])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_0)))));
}
