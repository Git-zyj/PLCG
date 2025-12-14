/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127045
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
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_11 [i_1] [i_1] [5U] [i_1] [3LL] = max((max((max((var_9), (((/* implicit */unsigned long long int) var_3)))), (max((var_14), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((268435455), (((/* implicit */int) arr_1 [i_0 - 1] [i_2]))))), (min((4294967293U), (((/* implicit */unsigned int) (unsigned char)142))))))));
                                var_17 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (var_5)))), (max((18446744073709551606ULL), (((/* implicit */unsigned long long int) -7681911022777988420LL)))))), (max((max((((/* implicit */unsigned long long int) (signed char)-48)), (4571090837876590663ULL))), (((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_7)))))))));
                                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_2 + 3] [1LL] [i_4] [(short)10] [i_2])), (arr_4 [5U] [i_1] [i_1])))), (max((63U), (((/* implicit */unsigned int) var_3))))))), (max((((/* implicit */unsigned long long int) min((var_3), (-739667935)))), (max((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_0] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_17 [(_Bool)1] [i_1] [i_2] [(short)8] [i_5] [i_6] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((min((arr_8 [0LL]), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_5)), (arr_5 [8U] [2ULL] [6LL]))))))), (max((max((((/* implicit */unsigned int) (unsigned char)158)), (3683153381U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_4 [i_0] [(unsigned char)4] [(short)10])), (arr_6 [4U] [4U]))))))));
                                arr_18 [i_1] [i_1 - 3] [7U] [i_1 - 3] [i_1] = ((/* implicit */signed char) max((max((((/* implicit */unsigned short) max((((/* implicit */short) arr_9 [i_6] [i_1] [i_2] [i_5 + 1] [1U] [i_2] [i_5])), (arr_16 [i_0] [(signed char)0] [(short)1] [i_0] [i_2 + 3])))), (max((((/* implicit */unsigned short) (short)0)), ((unsigned short)30622))))), (((/* implicit */unsigned short) min((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [8U] [i_1] [i_1])))), (min((arr_14 [8] [i_1] [i_2 + 3] [8] [5LL] [i_5] [i_6]), (((/* implicit */short) var_13)))))))));
                                var_19 = ((/* implicit */int) min((max((min((var_11), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_5), (var_13)))), (max((1359344893U), (((/* implicit */unsigned int) arr_5 [i_5] [i_1] [i_0])))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (unsigned char)239)), (min((((/* implicit */unsigned long long int) (unsigned short)16)), (1675415805749843137ULL))))), (min((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) var_3))))), (max((var_11), (((/* implicit */unsigned long long int) 4294967293U)))))))))));
                                arr_19 [i_1] [5LL] [i_1] = ((/* implicit */short) max((min((max((var_9), (((/* implicit */unsigned long long int) arr_14 [(unsigned short)10] [i_1] [11ULL] [i_1] [i_1] [i_1 + 1] [i_1])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_3)))))), (min((max((((/* implicit */unsigned long long int) -52157833522521017LL)), (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [(short)4] [i_1] [(short)4] [i_5 - 1] [(unsigned char)4] [i_6] [(signed char)11])), (-1395207614684474213LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (int i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max(((short)1974), (((/* implicit */short) min(((_Bool)0), ((_Bool)1))))));
                                arr_26 [i_0] [i_1] [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) -739667935))))), (min((1395207614684474213LL), (var_0)))))), (max((max((arr_7 [10U] [i_1] [i_7] [i_8]), (((/* implicit */unsigned long long int) var_10)))), (min((((/* implicit */unsigned long long int) arr_22 [i_7] [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_2 + 2] [i_7])))))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_1] [i_0 + 1] [i_1] = ((/* implicit */signed char) min((max((min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_1 - 2])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-1)), (arr_6 [i_0] [i_1])))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) arr_9 [i_0] [i_1] [i_1] [i_2 - 1] [i_2] [i_2] [7U])), (arr_16 [3] [6LL] [(short)8] [i_0 + 1] [i_0 + 1])))), (min((2388983130U), (((/* implicit */unsigned int) (signed char)116)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            {
                var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) max((((/* implicit */signed char) var_2)), (var_13)))), (min((((/* implicit */short) arr_30 [(unsigned char)11])), ((short)20081)))))), (max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) var_5))))), (min((((/* implicit */unsigned long long int) var_10)), (var_11)))))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (int i_12 = 2; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) min((min((min((((/* implicit */unsigned long long int) (unsigned short)18898)), (arr_36 [i_9 + 1] [(unsigned char)1] [i_11] [i_12 - 1]))), (max((var_14), (((/* implicit */unsigned long long int) arr_28 [i_9] [i_9])))))), (((/* implicit */unsigned long long int) min((max((-1395207614684474213LL), (((/* implicit */long long int) arr_31 [i_9 + 1] [i_10] [i_10])))), (((/* implicit */long long int) max((771592004U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                            arr_39 [(short)5] [i_10] [i_11] [(unsigned char)12] = ((/* implicit */int) min((max((min((var_14), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_38 [i_10] [i_11])), (var_8)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)3)), (4294967293U)))), (max((arr_36 [i_9 + 1] [13U] [13U] [i_9 + 1]), (((/* implicit */unsigned long long int) -1744792289))))))));
                            var_24 = ((/* implicit */short) max((((/* implicit */unsigned int) max((min((arr_37 [i_12 - 2] [i_11] [i_10] [i_9]), (((/* implicit */int) (unsigned short)40068)))), (((/* implicit */int) max((arr_38 [i_10] [(signed char)6]), (((/* implicit */signed char) arr_30 [i_9])))))))), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_7)), (var_4)))), (min((arr_34 [(unsigned char)8] [19U] [1U]), (((/* implicit */unsigned int) 2147483622))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = min((min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_6)))), (max((var_8), (var_15))))), (((/* implicit */long long int) max((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (signed char)89))))), (min((((/* implicit */int) var_13)), (var_3)))))));
    var_26 = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned long long int) var_0)), (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_8)))))), (((/* implicit */unsigned long long int) max((min((var_6), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)65532)))))))));
}
