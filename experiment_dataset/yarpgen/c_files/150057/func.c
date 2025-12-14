/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150057
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) == (((/* implicit */int) arr_7 [i_3] [i_1] [i_1]))))), (((((/* implicit */int) (unsigned char)248)) - (((/* implicit */int) (unsigned char)248))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_0 + 2] [i_0])) - (((/* implicit */int) arr_7 [i_1] [i_0 + 1] [i_0])))))))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_0 + 2] [i_0 - 1]))))))));
                            arr_10 [i_0] = (~(((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) / (((/* implicit */long long int) (-(416827773)))))));
                            var_17 = ((/* implicit */short) ((var_1) + (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))))), (arr_6 [i_3])))));
                            var_18 -= ((/* implicit */signed char) ((unsigned short) var_0));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2] [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 5257220578303132621ULL)) && (((/* implicit */_Bool) arr_1 [i_1]))))), (((var_5) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_4] [(_Bool)1])))), (((/* implicit */int) arr_9 [17] [i_0 + 2] [i_0] [i_1] [i_4] [i_4]))))) : (min((((unsigned int) arr_3 [i_0 - 1])), (((/* implicit */unsigned int) arr_7 [i_4] [i_1] [i_4]))))));
                    arr_14 [i_0] [(short)9] [i_4] [i_0] = ((signed char) max((arr_8 [3] [8ULL] [i_0 + 1]), (arr_8 [i_0] [i_0] [i_0 + 3])));
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0 + 3])) == (-4542746450905817211LL)))) << (((/* implicit */int) ((arr_2 [i_0 - 1]) <= (((/* implicit */int) (signed char)3)))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((5257220578303132608ULL), (((((/* implicit */_Bool) var_1)) ? (13189523495406418982ULL) : (((/* implicit */unsigned long long int) arr_17 [7] [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((~(((arr_6 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))))));
                                arr_25 [i_0] [7] [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0 + 3])))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (5257220578303132626ULL)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) ((5257220578303132633ULL) <= (((/* implicit */unsigned long long int) var_2)))))))), (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) 1349494878U)) : (arr_6 [i_0 + 3])))));
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_0 + 3])))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)6)), (var_7)))) ? (((13189523495406418972ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [i_5] [(unsigned short)14] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_18 [i_5] [i_1] [i_0])), ((unsigned char)229)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 19; i_8 += 4) 
                    {
                        arr_28 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_8 - 2])) || (((/* implicit */_Bool) arr_4 [i_0 + 2] [i_8 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_6 [i_5])));
                        arr_29 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_3 [i_0]))))) ? (((((var_3) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_5]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_8 - 2] [i_8 - 3] [i_0])) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)60))))))));
                        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_17 [i_0 + 1] [i_0 + 3] [i_1])) - (var_1)))) && (((/* implicit */_Bool) (+(arr_19 [i_0 - 1] [i_1] [i_0 - 1] [i_5] [i_1] [i_8]))))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) : (((((5257220578303132616ULL) != (((/* implicit */unsigned long long int) 6U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25818))) / (5257220578303132621ULL))) : (((/* implicit */unsigned long long int) min((2164801044509292775LL), (((/* implicit */long long int) 722892599))))))))))));
}
