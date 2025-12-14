/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111769
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-17)) || (((/* implicit */_Bool) 446086855708088060LL))));
    var_12 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (_Bool)1)) << (((446086855708088060LL) - (446086855708088045LL))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((arr_2 [i_2]) + (((/* implicit */long long int) 4294967295U))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) -1046151447)) * (1621643723U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_1] [i_0])))));
                            }
                            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                var_15 ^= ((/* implicit */long long int) ((unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_5)) : (-1608165316))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_5]), (arr_5 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1608165323)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned char)191)))))));
                                arr_19 [8U] [8U] [i_2] = ((/* implicit */int) arr_2 [i_0]);
                                var_16 = (~(((((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)64)) : ((~(((/* implicit */int) arr_5 [i_1] [i_1])))))));
                                var_17 = ((/* implicit */signed char) arr_17 [i_0] [i_1] [i_1] [i_3] [6U]);
                            }
                            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                arr_23 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_1] [(unsigned char)1] [i_2] [i_1] [i_1] [(signed char)1])) != (((/* implicit */int) (short)32767)))))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [5ULL] [i_3] [i_6])) ? (arr_9 [i_2] [i_1] [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(signed char)1]))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0])) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_6])))))));
                                var_18 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3924580564U)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2])) <= (-595976256)))) : (((/* implicit */int) arr_8 [(signed char)8] [i_3] [i_2] [i_0]))))));
                            }
                            var_19 = ((/* implicit */long long int) (unsigned short)43003);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)61349)), (-1185093573098651537LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [9] [i_0])))));
                var_21 = ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_1);
}
