/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153416
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) var_4);
        var_20 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-63)))), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_14))))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) 6455044886685575791LL)) || (((/* implicit */_Bool) 5450925874308971619LL)))) ? (max((0LL), (max((((/* implicit */long long int) var_0)), (6455044886685575773LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((int) 0))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((_Bool) -131065629)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((((/* implicit */long long int) -529774591)) ^ (-6455044886685575797LL)))));
        var_22 = ((/* implicit */short) -6455044886685575792LL);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((unsigned char) (signed char)-110)));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -5450925874308971620LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) > (arr_1 [i_1 - 1] [i_1 - 1]))))) : (-6695317067883650321LL)));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_15 [i_1] [i_1] [i_1] = (+(arr_4 [i_1]));
                var_23 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) arr_10 [i_1] [i_1]))));
                var_24 = ((/* implicit */unsigned char) ((arr_13 [i_1 + 1] [i_1 - 1]) > (arr_13 [i_1 - 1] [i_1])));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_19 [(short)10] [i_4] = ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)83))));
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    var_25 *= ((/* implicit */int) -7447561610653215326LL);
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
                for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_26 ^= ((/* implicit */long long int) ((arr_1 [i_1] [i_1 + 1]) >= (arr_21 [i_1] [i_6] [i_1] [i_1] [i_1])));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_2] [i_6])))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) (_Bool)1)) * (var_16))))))));
                }
            }
            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -7321554455229566370LL))));
            arr_25 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)67)) > (((/* implicit */int) arr_5 [i_1 + 1]))));
            arr_26 [i_1] [i_2] |= ((/* implicit */signed char) ((unsigned char) arr_14 [i_1 + 1]));
        }
        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_29 = ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            var_30 = ((/* implicit */long long int) (signed char)127);
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_7])) ? (((/* implicit */int) (signed char)81)) : (((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (unsigned char)0)) : (var_8)))));
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_7]) : (2147483629)))) ? (arr_20 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9))))));
            var_32 |= ((short) arr_2 [i_1] [i_1 + 1]);
        }
        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            arr_34 [i_1] [i_1] [i_1] = (-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_8])) > (arr_29 [i_8])))));
            arr_35 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)83))))));
            var_33 += (-(((/* implicit */int) ((_Bool) var_2))));
            var_34 = ((/* implicit */short) (~(var_15)));
            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) (_Bool)1)))))));
        }
    }
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        for (int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 18; i_11 += 1) 
                {
                    for (short i_12 = 2; i_12 < 14; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                arr_50 [i_9] [i_10] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_4 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (-2618021156729037869LL))), (((/* implicit */long long int) (+(-1425223942)))))), (((((/* implicit */_Bool) arr_45 [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 4])) ? ((+(arr_9 [i_9] [i_9] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
                                arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))))))))));
                                var_36 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (arr_21 [i_9] [i_11] [i_11] [i_11] [i_11]))))))));
                                arr_52 [i_11] [i_12] [i_11] = ((/* implicit */long long int) arr_14 [i_10]);
                            }
                        } 
                    } 
                } 
                arr_53 [i_9] [i_9] [i_10] = max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (short)16098)) : (((/* implicit */int) (unsigned char)0))))), (arr_1 [(signed char)8] [i_9]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_9]))))));
            }
        } 
    } 
}
