/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157082
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */int) (signed char)111)), (arr_9 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */int) arr_6 [i_2] [i_3]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_1 - 4] [i_0])))) : (((/* implicit */int) arr_1 [i_2]))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned int) 160401477)) : (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 3]))) : (max((((/* implicit */unsigned int) min((arr_9 [i_0] [i_1 - 3] [i_2] [i_3]), (1287111269)))), (arr_4 [i_3] [i_1 + 1] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((-160401478) & (((/* implicit */int) (signed char)-16))))) ? (arr_3 [i_0] [i_2]) : (((((/* implicit */_Bool) ((int) -1672991891))) ? (((((/* implicit */_Bool) 160401477)) ? (((/* implicit */int) arr_5 [i_4] [i_3] [i_0])) : (arr_3 [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (160401450) : (160401455)))))));
                            var_18 = ((/* implicit */_Bool) (((~(arr_2 [i_3]))) * (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)18769)) <= (arr_3 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_2]))))))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (unsigned short)39911))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((_Bool) (~(((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_2]))))));
                            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-160401461)))) ? (((((/* implicit */_Bool) arr_6 [i_4 + 2] [i_1 - 4])) ? (((/* implicit */int) arr_6 [i_4 - 3] [i_1 - 4])) : (((/* implicit */int) arr_6 [i_4 - 1] [i_1 - 1])))) : (((/* implicit */int) (unsigned short)10311))));
                        }
                    }
                    arr_12 [i_2] [i_1 - 4] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((arr_9 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */int) arr_8 [i_2] [12] [i_1] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (arr_4 [i_0] [i_1 - 1] [i_2]))) : (((/* implicit */unsigned int) max((-160401453), (1287111247)))))), (((/* implicit */unsigned int) ((((-1287111269) + (2147483647))) << (((((((/* implicit */int) (signed char)-92)) + (121))) - (29))))))));
                    var_22 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        var_24 = min((min((arr_2 [i_6 + 2]), (((/* implicit */int) ((short) arr_13 [(signed char)3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [(signed char)16] [(signed char)16] [i_8] [i_8] [i_5])) ? (arr_10 [i_7 - 1] [i_6]) : (((/* implicit */int) (unsigned char)175))))) ? (((/* implicit */int) min(((signed char)-110), (arr_6 [i_8] [i_6 + 1])))) : (min((((/* implicit */int) arr_15 [i_5] [i_8])), (160401481))))));
                        var_25 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_8 + 1])) ? (((arr_7 [(unsigned short)10] [i_6 + 1]) ? (((/* implicit */int) arr_5 [i_6] [(unsigned char)0] [i_8])) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_6] [(unsigned char)15] [i_5] [i_6])))) : (((/* implicit */int) arr_15 [i_6] [i_7 + 2])))));
                    }
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_5] [i_5] [(unsigned char)10] [i_7 + 1]), (((/* implicit */int) arr_7 [i_6] [i_7]))))) ? (max((((/* implicit */unsigned int) arr_6 [i_6] [i_7 + 1])), (arr_4 [i_7 + 1] [i_6] [i_5]))) : (((/* implicit */unsigned int) max((1152956689), (((/* implicit */int) (unsigned char)175)))))))) ? (arr_2 [i_5]) : (((/* implicit */int) max((((/* implicit */short) arr_11 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 + 2] [i_5])), (((short) arr_1 [i_5])))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_27 [i_5] [i_9] [i_7] [i_6] [i_10] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-112))) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_7 - 1])) : (arr_9 [i_5] [i_6] [i_6 - 1] [i_5])))), (((((/* implicit */_Bool) arr_3 [i_5] [i_10])) ? (arr_4 [i_6] [i_10] [i_7]) : (((/* implicit */unsigned int) ((arr_7 [i_5] [i_7]) ? (2036558911) : (((/* implicit */int) arr_11 [i_6] [6] [i_5] [i_6] [(_Bool)1] [i_6])))))))));
                                arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_13 [i_9]), ((signed char)-1)))) ? (min((-160401486), (((/* implicit */int) (unsigned char)177)))) : ((+(160401452))))) - (((((/* implicit */int) min((arr_6 [i_5] [(signed char)0]), (arr_13 [i_9])))) / (((/* implicit */int) ((_Bool) -160401477)))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)-92)) ^ (((/* implicit */int) arr_7 [(unsigned short)4] [i_6])))))) ? (((min((arr_21 [i_6] [i_6]), (((/* implicit */int) (_Bool)0)))) & (((((/* implicit */int) (signed char)92)) - (((/* implicit */int) arr_0 [i_7 - 1])))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_22 [i_5] [i_6] [i_9] [i_10]))) < (((((/* implicit */_Bool) 2147483647)) ? (160401486) : (((/* implicit */int) (unsigned char)255)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
