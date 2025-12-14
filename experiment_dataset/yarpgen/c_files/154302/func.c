/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154302
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_6 [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (min((((/* implicit */long long int) (unsigned short)11601)), (-6174113223708028652LL)))))) ? (max((((/* implicit */unsigned long long int) var_2)), (min((11092650034057330011ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? ((~(((/* implicit */int) (unsigned short)42786)))) : (((/* implicit */int) arr_7 [(signed char)6] [i_0] [6LL])))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = arr_3 [i_1];
                                arr_13 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])) : (arr_6 [i_1] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1])))))))))));
                                arr_14 [i_4] [(signed char)6] [i_2] [(signed char)6] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)2]))) / (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_0] [i_1] [i_2 - 1] [i_2 - 1]))))) ^ (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_2 - 1] [i_4] [i_0]))))))));
                                var_19 = ((((((/* implicit */int) arr_9 [(_Bool)1] [i_1] [(_Bool)1] [(unsigned short)2])) <= (((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (!((_Bool)1)))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned short)12743)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))))), (((unsigned long long int) (_Bool)0)))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-99)))))));
                                arr_17 [i_1] [i_1 + 2] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)61094))))) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1])) : (((((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 2] [i_1] [i_1 + 4] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 3] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 3] [(_Bool)1] [i_1 - 1] [i_1]))))));
                                arr_18 [i_0] [i_1] [i_1] [(unsigned char)3] [i_1] = ((/* implicit */unsigned int) (~(var_5)));
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (unsigned char)224)))));
                            }
                            arr_20 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [9LL] [i_1] = ((/* implicit */short) var_14);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))) != (arr_8 [i_1] [(_Bool)1] [i_6] [i_6] [i_6] [i_6])))) != (min((-210713573), (((/* implicit */int) (_Bool)1)))))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min(((~(((/* implicit */int) ((unsigned char) var_1))))), (((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)131)), (arr_24 [i_0] [i_0] [i_0] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (var_7)))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_9 = 2; i_9 < 12; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                arr_40 [i_0] [i_1 + 2] [i_9] [i_10] [i_1] = ((/* implicit */unsigned short) min((((int) var_5)), (((((/* implicit */int) ((unsigned short) var_13))) | (((/* implicit */int) arr_33 [i_0] [i_0] [i_10] [i_10]))))));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
                var_24 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((max((((/* implicit */short) var_17)), (var_11))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)1799)))))))), (((((/* implicit */_Bool) arr_38 [i_1] [(_Bool)1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (arr_38 [i_0] [i_1 + 4] [i_1] [i_1 + 1] [i_1 + 4] [i_0]) : (arr_38 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            for (signed char i_14 = 2; i_14 < 19; i_14 += 1) 
            {
                {
                    var_25 += ((/* implicit */unsigned char) var_12);
                    var_26 *= ((/* implicit */_Bool) min((10830171152716263257ULL), (((/* implicit */unsigned long long int) ((int) arr_47 [i_14 - 1] [i_14] [i_14])))));
                    arr_51 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) < (max((((/* implicit */int) arr_45 [i_13] [i_13])), (var_7)))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) (_Bool)1);
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max((var_8), (var_8))))));
}
