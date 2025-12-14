/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154714
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_3)) : (arr_1 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)9)) < (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 1972666013U)) : (11825401917961408547ULL)))) ? (((/* implicit */int) arr_3 [i_3] [i_1 + 2])) : (((/* implicit */int) ((short) (+(var_7)))))));
                        var_15 &= ((/* implicit */unsigned short) (~((+(arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1])))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) < (arr_1 [i_2])));
                        arr_12 [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((((arr_3 [i_3] [i_1]) ? (arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [(unsigned short)1] [i_1]))))) + (((/* implicit */unsigned long long int) ((arr_3 [i_1 + 2] [i_2 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [3]))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1698131918)) ? (84244610U) : (((/* implicit */unsigned int) var_7))))) ? (arr_6 [i_1 + 2] [i_2 + 1] [9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_0 [i_0]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_15 [i_4] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)16700));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_6 [i_2 + 1] [i_1 + 1] [i_2]))) == (((/* implicit */int) ((_Bool) var_7))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_4] [i_1 + 2] [i_4] [i_4] [i_4] [i_0] [i_4] = ((/* implicit */signed char) (+((~(13111296139128915692ULL)))));
                            var_19 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1277))) <= (arr_0 [i_1 - 1]))))));
                            arr_19 [i_0] [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_5] [i_5] [i_0] &= ((/* implicit */unsigned short) ((((unsigned int) (unsigned char)127)) == (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_8 [(unsigned short)3])))), (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            arr_23 [i_4] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1262)) || (((/* implicit */_Bool) 9059448034785369888ULL))));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) ((short) ((int) arr_10 [i_4] [i_4] [i_4] [i_0])))) <= (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_2 - 1] [i_1] [i_0])) ? (arr_10 [i_6] [i_4] [i_4] [i_4]) : (((/* implicit */int) var_1))))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))));
                        }
                    }
                    arr_24 [i_0] [i_1 + 2] [i_1] [(unsigned char)7] = ((/* implicit */short) var_0);
                    var_22 = ((unsigned char) max((((/* implicit */int) max((((/* implicit */short) var_11)), (arr_8 [i_2])))), (((((/* implicit */int) (unsigned char)69)) ^ (((/* implicit */int) var_4))))));
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned short)56189)))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_1 + 2] [(unsigned short)3] [i_1] [(unsigned short)3]))))))) + (max((((/* implicit */int) ((unsigned short) var_5))), ((~(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) var_3);
    var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (-1190113104))) : (((/* implicit */int) var_11)))))));
    var_26 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)64232))))));
}
