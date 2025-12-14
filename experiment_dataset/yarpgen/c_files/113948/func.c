/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113948
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
    var_11 = ((/* implicit */_Bool) min((((var_10) & (((/* implicit */unsigned long long int) ((382259600) ^ (((/* implicit */int) (unsigned char)60))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((var_1) >> (((((/* implicit */int) var_2)) - (29))))) - (1664183U))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) -382259601)) < (arr_4 [i_2 + 1] [i_2 - 2] [i_1]))))));
                        var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -4303298593228410412LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_2 - 2] [i_0] [i_0] [i_0]))))), (((((4035225266123964416ULL) * (((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)6] [i_3])))) / (((arr_3 [i_0] [i_1]) / (((/* implicit */unsigned long long int) arr_4 [(unsigned char)8] [i_1] [i_2 + 1]))))))));
                    }
                    var_14 += ((/* implicit */long long int) -382259601);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (_Bool)1;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) arr_11 [i_6]);
                    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 17; i_7 += 1) 
                {
                    arr_21 [i_5] [i_5] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (535822336) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_11 [i_4])) : (arr_17 [i_4] [i_5] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4035225266123964416ULL))))))));
                    var_17 |= ((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [(_Bool)1]);
                }
                for (signed char i_8 = 4; i_8 < 18; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((-349269607) + (2147483647))) >> (((((/* implicit */int) (signed char)102)) - (77)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_19 [i_4] [i_5] [i_8])) + (2147483647))) << ((((+(arr_17 [i_10] [i_9] [i_5]))) - (3717753699451932091ULL)))));
                                var_20 = ((/* implicit */unsigned short) arr_12 [16U] [i_5 + 1]);
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) arr_15 [i_5] [i_8] [i_8 - 2]);
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_8 + 3] [i_8 - 4] [i_8 - 3] [i_8 - 4])) / (((/* implicit */int) arr_27 [i_8] [i_5] [i_8] [i_5] [i_8 + 3]))))), ((-(arr_14 [i_5 + 1])))));
                }
                arr_30 [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)8192))) <= (arr_11 [i_5])))), (((((((/* implicit */int) arr_15 [i_5] [i_5 + 1] [i_5])) + (2147483647))) << (((((/* implicit */int) var_0)) - (103))))))))));
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_35 [i_4] [i_5] [i_4] = ((/* implicit */int) (~(max((((arr_14 [i_4]) << (((((/* implicit */int) var_9)) - (75))))), (arr_11 [i_5 + 1])))));
                    arr_36 [i_5] [i_5] = ((/* implicit */signed char) var_4);
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 349269607)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_1)))) ? (((((/* implicit */_Bool) -382259601)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_11] [18U] [i_5 + 1] [18U] [i_4])) && ((_Bool)0)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (2864333U)))))) : ((+(((/* implicit */int) ((_Bool) -1LL)))))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    arr_41 [i_5] [i_5 + 1] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) (+(-382259601))))), (max((((/* implicit */unsigned long long int) ((-1742673167) / (((/* implicit */int) var_7))))), ((-(8796093022200ULL)))))));
                    var_23 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)196)), (arr_22 [i_4])));
                    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -382259601)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) > (var_10)))) : (((/* implicit */int) arr_19 [i_4] [i_5 + 1] [i_12]))))));
                }
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            {
                                arr_48 [i_5] [i_14] [i_5] = ((/* implicit */long long int) ((5360215814887082128ULL) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_15] [i_13] [i_5 + 1] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_15] [i_5] [i_13] [i_5] [i_4]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_5 + 1] [7U] [i_14]))) | (1918357904U))) : (((/* implicit */unsigned int) -382259601)))) - (1918357933U)))));
                                arr_49 [i_5] [i_5] [i_14] = ((/* implicit */long long int) ((13086528258822469488ULL) <= (((/* implicit */unsigned long long int) max((-871297292), (-769376399))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 4; i_17 < 19; i_17 += 2) 
                        {
                            {
                                var_25 &= ((/* implicit */short) arr_52 [i_4] [i_5] [i_17] [i_13] [i_16] [i_17]);
                                arr_55 [i_17 + 1] [i_5] [i_13] [i_5] [i_4] = (i_5 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) min((((1740745873U) >> (((((/* implicit */int) arr_15 [i_5] [i_13] [i_17])) + (133))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) (unsigned char)81))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) min((((1740745873U) >> (((((((/* implicit */int) arr_15 [i_5] [i_13] [i_17])) + (133))) - (47))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))))) && (((/* implicit */_Bool) (unsigned char)81)))));
                                var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_5] [1LL] [i_17]))) <= (arr_44 [i_5 + 1] [i_5] [i_13] [i_16]));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) ((unsigned long long int) min((arr_13 [i_4] [i_5 + 1] [i_13]), (arr_13 [i_4] [i_5 + 1] [i_13]))));
                    arr_56 [i_5] [(unsigned short)19] [i_13] = ((unsigned int) (((~(5360215814887082128ULL))) | (((unsigned long long int) (unsigned short)510))));
                }
            }
        } 
    } 
    var_28 = ((int) ((823642120U) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))));
}
