/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140366
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1]), (((/* implicit */short) arr_2 [i_0]))))) ? (((4294967295U) << (((var_0) - (4207531771U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 737027281U))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_0] [(unsigned char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967278U)) ? (4019004303670993065LL) : (((/* implicit */long long int) 0U))));
                            /* LoopSeq 4 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) ((4019004303670993086LL) << (((4019004303670993041LL) - (4019004303670993041LL)))));
                                arr_18 [i_2 - 1] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (((var_6) - (((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_1])) ? (arr_12 [i_4] [i_1] [8U] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_0])))))))));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_3]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((var_0) - (4207531743U)))))) ? (min((-1LL), (((/* implicit */long long int) 3557940014U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4019004303670993041LL)))))))))))));
                                var_13 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_0 [i_0])), (8820385207810962641LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1])))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                            {
                                arr_22 [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2 - 2] [i_3])))))) & (min((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_5]))) & (var_3))), (((((/* implicit */_Bool) -8899669887107707462LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_5] [i_1] [(signed char)0])))))));
                                arr_23 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 2] [i_0] [i_2 - 2]))))), (arr_15 [i_2 + 1] [i_2 - 2] [i_2 - 2])));
                            }
                            for (unsigned int i_6 = 4; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned char) (~(min((arr_14 [i_1] [i_1] [i_1]), (arr_14 [i_0] [i_1] [i_6 - 1])))));
                                var_15 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 465705330U))))), (max((arr_2 [i_0]), (arr_2 [i_0]))));
                            }
                            for (unsigned int i_7 = 4; i_7 < 18; i_7 += 3) /* same iter space */
                            {
                                arr_28 [(short)13] [i_0] [i_3] [i_2 - 2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_20 [i_0] [i_1])), (arr_0 [i_0])))), ((+(arr_9 [3LL] [i_1] [i_0]))))) + (max((-4019004303670993071LL), (((((/* implicit */_Bool) 0U)) ? (4019004303670993049LL) : (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_7]))))))));
                                arr_29 [i_0] [i_3] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-9888))) ^ (25U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_1])) >> (((/* implicit */int) arr_3 [i_1] [i_2] [i_0]))))))))));
                                arr_30 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned char) (-(1783620848410716720LL)));
                            }
                        }
                    } 
                } 
                arr_31 [(_Bool)0] |= ((/* implicit */unsigned char) 18446744073709551615ULL);
                arr_32 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned char)17] [i_1]))))) ? (((unsigned long long int) -4019004303670993028LL)) : (((/* implicit */unsigned long long int) (-(-4019004303670993066LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (465705315U)))) ? (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)126))))))));
                arr_33 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) var_10)))))) ^ (arr_0 [i_0]))) <= (((((/* implicit */_Bool) min((arr_24 [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned char) arr_8 [i_0]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)231))))) : (min((arr_27 [i_0]), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [7U] [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_8 = 2; i_8 < 22; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_38 [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3829261980U)) ? (-4019004303670993049LL) : (((/* implicit */long long int) 4294967272U))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 22; i_10 += 3) 
                {
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))));
                            var_18 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_41 [i_11 - 1] [(signed char)9])))), (((/* implicit */int) ((((/* implicit */_Bool) -8899669887107707462LL)) || ((!(var_1))))))));
                        }
                    } 
                } 
                arr_44 [i_8 - 1] [i_9] [i_8 + 1] = ((/* implicit */long long int) arr_41 [i_8 + 1] [i_9]);
            }
        } 
    } 
}
