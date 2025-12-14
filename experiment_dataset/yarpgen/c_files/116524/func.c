/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116524
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1 - 2] [i_1] = ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3))))))) || (((/* implicit */_Bool) var_8)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_10 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_1] [i_1 - 1] [i_1] [i_1])), (var_0)))), (min((((/* implicit */unsigned long long int) arr_4 [(signed char)0] [i_0 + 2] [(signed char)0])), (5751184615011137130ULL)))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)4))));
                                var_12 = ((((/* implicit */int) ((((/* implicit */int) var_4)) > ((-(((/* implicit */int) arr_2 [i_1 - 3]))))))) != (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_6)))))));
                                arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_12 [i_1 + 4] [i_1 + 4] [i_2] [i_0 + 3]))))) != (min(((~(((/* implicit */int) (unsigned char)223)))), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_8 [i_4] [i_2] [i_1 - 3] [i_0]))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) ((arr_15 [i_0 + 3] [(_Bool)1] [i_1] [i_0 + 1] [i_0 + 3] [i_2] [i_0 + 1]) - (((/* implicit */unsigned long long int) arr_5 [i_1 + 3] [i_0 + 1]))));
                                var_13 ^= ((/* implicit */_Bool) ((unsigned char) (!(var_1))));
                            }
                            for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) max(((signed char)-60), (((/* implicit */signed char) ((_Bool) (unsigned char)223)))))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_13 [i_0 + 2]), (arr_13 [i_0 + 3]))))));
                            }
                            arr_23 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_9)))) ? (((unsigned long long int) arr_22 [i_0 + 3] [i_0 + 3] [i_1 + 2] [(unsigned short)8] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_1] [i_1] [i_1 + 4] [i_2] [i_3]), (arr_22 [i_1] [(_Bool)1] [i_1 - 1] [(unsigned char)21] [i_1 - 1])))))));
                        }
                    } 
                } 
                var_16 *= ((/* implicit */signed char) 1114618070U);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_3)) - (7503)))))))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)180))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_8)), (var_7))))))));
    var_19 |= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))))));
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7]))))) ? ((-(((/* implicit */int) ((_Bool) (_Bool)0))))) : ((-((-(((/* implicit */int) arr_24 [i_7]))))))));
        var_21 = ((/* implicit */_Bool) var_5);
        arr_27 [i_7] = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7))))))), (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)19288)) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-14668))))))));
    }
}
