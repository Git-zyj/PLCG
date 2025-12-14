/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119049
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((((var_1) != (((/* implicit */long long int) var_3)))), (var_12)));
        var_17 -= ((/* implicit */unsigned long long int) (-(2312105442U)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_8 [i_2] [i_2] [(short)7] = ((/* implicit */long long int) ((arr_7 [i_1] [i_2]) ? (var_3) : (min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned int) (signed char)77))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                arr_11 [i_1] [i_1] = ((/* implicit */int) ((short) ((((arr_7 [0ULL] [i_2]) || (((/* implicit */_Bool) arr_2 [i_1])))) && (((/* implicit */_Bool) arr_5 [i_2])))));
                var_18 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_7 [i_1] [i_2])), (var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                arr_12 [i_3] [i_2] [i_1] = (!(((/* implicit */_Bool) 1987240202193688262ULL)));
                arr_13 [i_2] [i_2] [14U] = ((/* implicit */short) min(((-(var_9))), ((~(((/* implicit */int) var_4))))));
                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12127)) <= (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12127))))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_18 [15LL] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-24175))));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_1])))) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_1]))));
            arr_20 [i_1] [(unsigned char)12] [i_1] = ((/* implicit */unsigned char) ((int) arr_2 [i_4]));
            var_19 = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_4]));
            arr_21 [(unsigned char)8] [i_1] [(unsigned char)6] = ((/* implicit */unsigned long long int) ((short) arr_3 [i_4] [i_1]));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            arr_31 [i_6] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned int) ((((_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_27 [i_1] [i_5] [i_8]), ((short)768)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-114)))))) : ((~(arr_6 [i_1] [i_1])))))) : (((arr_15 [i_5 - 1]) | (arr_15 [i_5 + 1])))));
                            var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-769))) : (arr_3 [i_5 - 1] [i_5 + 1])))) && (((/* implicit */_Bool) ((int) arr_6 [i_5 - 1] [i_5 + 1]))));
                            arr_32 [i_1] [i_5 + 1] [(unsigned char)0] [i_7] [i_7] |= ((/* implicit */unsigned int) ((arr_7 [i_5 + 1] [i_5 + 1]) ? (-5734266884624320414LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)57364), (((/* implicit */unsigned short) (_Bool)1))))))));
                            var_21 = ((unsigned char) var_6);
                        }
                        for (long long int i_9 = 1; i_9 < 15; i_9 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1])))) - (((/* implicit */int) max((arr_7 [i_5 - 1] [i_5 + 1]), (arr_7 [i_5 + 1] [i_5 - 1]))))));
                            var_23 *= ((/* implicit */_Bool) arr_2 [i_6]);
                        }
                        arr_36 [i_6] [i_6] = max((((/* implicit */long long int) min((min((arr_23 [i_1] [i_5] [i_6]), (((/* implicit */short) var_14)))), (((/* implicit */short) arr_4 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))), (max((arr_26 [i_6]), (((/* implicit */long long int) arr_5 [i_5 + 1])))));
                        arr_37 [i_1] [i_5] [i_5] [i_6] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((int) var_4))))) ? (min((min((10211785645618560010ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_26 [i_6]) : (arr_26 [i_6])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_29 [i_1] [i_5] [(_Bool)1] [(_Bool)1])), ((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                    {
                        arr_40 [i_1] [i_5 + 1] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_24 [i_5 + 1]);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (signed char)-106))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_5 + 1] [i_1]))) || (((/* implicit */_Bool) var_1))))), (((short) arr_33 [(_Bool)1] [i_5 + 1] [i_10] [i_10] [i_5 + 1] [i_5 - 1])))))));
                        arr_41 [i_6] [i_10] [i_10] [i_10] = ((/* implicit */int) var_4);
                    }
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (unsigned short)41005))));
                    var_27 = ((/* implicit */unsigned char) arr_33 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) 1414142137375450602ULL);
        arr_45 [(signed char)10] [i_11] = ((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) var_6))));
    }
    var_28 = ((/* implicit */long long int) 3345149464U);
    var_29 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_1)))) ? (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (short)778))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (var_14))))))));
}
