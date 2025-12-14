/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159744
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
    var_20 = ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_5))) - (min((((/* implicit */int) ((signed char) var_1))), (min((var_12), (((/* implicit */int) (signed char)1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        arr_3 [7ULL] = ((/* implicit */long long int) var_7);
        var_23 = ((/* implicit */signed char) ((var_11) > (((((/* implicit */int) (signed char)1)) - (((/* implicit */int) (signed char)10))))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((short) arr_0 [i_0] [5U])))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (signed char)-20)))) && (((/* implicit */_Bool) (signed char)-10)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_25 *= ((/* implicit */signed char) -855960402);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) (-(((var_19) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                        arr_13 [(short)3] [i_1] [(short)3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)31)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3]))) < (var_3))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_18 [(signed char)12] [i_2 - 3] [(signed char)12] [(signed char)6] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_1 - 3] [i_1 - 4] [i_2 - 3] [i_2 - 3])) == (((/* implicit */int) arr_15 [i_1 - 3] [i_1 + 1] [i_2 + 2] [i_2 - 1])))) || (((/* implicit */_Bool) ((signed char) arr_15 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_2 - 1])))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */int) (signed char)1)) << (((((/* implicit */int) (unsigned char)34)) - (22))))) == ((+(((/* implicit */int) (signed char)15)))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) (+(((/* implicit */int) (short)12819))));
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)213))));
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_29 *= (unsigned char)140;
                            var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)112)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 - 4])) & (((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 3] [i_1 - 2]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 1]))) + (arr_10 [(signed char)2] [i_2 - 4] [(unsigned short)5] [i_1 - 2])))));
                            var_31 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)15)), (arr_17 [i_2] [i_2] [i_2 - 3] [i_2 + 2] [i_2])))), (max((((arr_2 [i_0] [i_0]) << (((arr_23 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2] [i_0]) - (16893375516695791876ULL))))), (((/* implicit */unsigned long long int) (~(var_6)))))));
                            var_32 *= ((/* implicit */short) (~(((855960396) / (1179621265)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        arr_29 [i_0] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (2147483647) : (-896596071))))));
                        var_33 = ((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_2 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]));
                    }
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        arr_34 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((268435456), (2147483647))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) var_16))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1]))))) - (((/* implicit */int) ((signed char) var_9)))));
                    }
                    var_35 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (var_12)))) || (((/* implicit */_Bool) (unsigned short)35519)))))));
                    var_36 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))), ((~(17089735906955247551ULL)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_37 *= ((/* implicit */signed char) max((max((arr_8 [i_2 - 4] [i_2 - 4] [i_2 + 2] [i_2 + 2]), (((/* implicit */unsigned long long int) (unsigned short)13205)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2])))))));
                                arr_40 [(signed char)13] = ((/* implicit */unsigned char) ((-268435457) < (((/* implicit */int) (signed char)-4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (max(((+(var_6))), (((/* implicit */long long int) ((signed char) var_6)))))));
}
