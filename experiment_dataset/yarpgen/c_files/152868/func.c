/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152868
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) (signed char)56);
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((/* implicit */short) var_0);
                                var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-34)), (var_5)))))) || (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_9 [i_3 - 3] [i_2 - 1] [i_1] [i_1 + 1] [i_0 + 2]))))));
                                var_19 = ((/* implicit */unsigned char) ((3967981817U) < ((-(94252532U)))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)97))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (arr_8 [i_0 + 2] [i_4] [i_0 + 2] [i_3])))))) ? (((/* implicit */unsigned int) (+(-914714462)))) : ((+((~(var_3)))))));
                            }
                            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) - (604901300U)))));
                                var_22 -= ((/* implicit */_Bool) (+((~(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)10396))))))));
                                arr_18 [i_5 + 1] [i_5] [i_0] [i_2 + 1] [i_0] [i_1] [i_0] = min((0U), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-115)), (arr_3 [i_0 - 1])))));
                            }
                            for (short i_6 = 1; i_6 < 10; i_6 += 3) 
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)63), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_19 [i_6 + 4] [i_6] [i_6] [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1])) ? (2875037860U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 1]))))));
                                var_23 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? ((-(var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 3] [i_3 - 3] [i_2 - 1] [i_3] [i_6 - 1] [i_1] [i_6 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_8 [i_6] [i_6] [i_6] [i_6 - 1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44827)) ^ (((/* implicit */int) (signed char)45))))) ? (((/* implicit */int) max(((signed char)5), ((signed char)-44)))) : (((/* implicit */int) (unsigned short)21400)))))));
                                arr_23 [(signed char)13] [i_1 + 1] [i_2 - 1] [i_3 - 3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? ((-(((/* implicit */int) (unsigned char)73)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0])))))))));
                            }
                            var_24 = ((/* implicit */unsigned short) max((arr_8 [i_0 + 1] [i_3] [i_3] [i_0 + 2]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0 - 2] [i_0 - 2]))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)182))))) ? (arr_5 [(signed char)4]) : (max((arr_17 [i_0 + 1] [i_0 + 1]), (var_11)))));
                var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((-1150699863), (((/* implicit */int) (signed char)-71))))) ? (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) : (2780412248U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3184439386U)) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_1])) : (-1693633236))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (signed char)0);
    var_28 = max(((-(var_3))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-47))))) : (var_3))));
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) ^ (((((/* implicit */_Bool) (unsigned short)64715)) ? (0U) : (0U))))))));
}
