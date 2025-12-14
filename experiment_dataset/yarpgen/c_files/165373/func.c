/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165373
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_2)))))))))));
    var_19 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_1] [i_2 - 1] [i_0] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_1 - 1])) ? (arr_5 [i_0] [i_2 - 1] [i_1 + 1]) : (arr_5 [i_0] [i_2 - 1] [i_1 - 1])))) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_5 [i_0] [i_2 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_1 - 1])) ? (arr_5 [i_0] [i_2 - 1] [i_1 + 1]) : (arr_5 [i_0] [i_2 - 1] [i_1 + 1])))));
                                var_20 = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_0])) == (((((/* implicit */unsigned long long int) ((long long int) var_3))) + (arr_8 [i_2] [i_2] [i_2] [i_1 + 1] [i_0])))));
                                arr_12 [i_0] [13LL] [13LL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_5)))));
                            }
                            for (unsigned char i_5 = 4; i_5 < 22; i_5 += 2) /* same iter space */
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_1 + 1] [i_0] [i_5 - 4] [i_0] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_5 + 1] [i_0] [i_3])) ? (arr_7 [i_1 - 1] [i_1] [i_5 - 1] [i_0] [i_5]) : (arr_7 [i_1 + 1] [i_1 - 1] [i_5 - 3] [i_0] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (var_16)))))) <= (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)29)) & (((/* implicit */int) arr_2 [i_0]))))), (var_12)))));
                                arr_18 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68)))))) || (var_6))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((((/* implicit */_Bool) 36027697507336192LL)) ? (1U) : (var_10))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83)))))))))));
                                var_22 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_3])) ? (0) : (((/* implicit */int) arr_2 [i_0])))) / (((/* implicit */int) var_0)))), ((~(((/* implicit */int) max(((signed char)82), (var_9))))))));
                            }
                            for (unsigned char i_6 = 4; i_6 < 22; i_6 += 2) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) (~(((arr_5 [i_0] [i_2 - 1] [i_6 - 2]) - (arr_5 [i_0] [i_2 - 1] [i_6 - 3])))));
                                var_24 = ((/* implicit */int) (~(min((arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1]), (((/* implicit */unsigned int) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_0]))))));
                                var_25 = ((/* implicit */short) 4776488);
                            }
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((short) var_3)), (((/* implicit */short) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) & (2308527630U))))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_1] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))) ? ((-(((arr_3 [i_0] [i_1] [i_0]) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_1 + 1] [i_1 + 1])) : (4177865827U))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) | (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((signed char) var_7)))))), (((((((/* implicit */_Bool) 4081040821U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
}
