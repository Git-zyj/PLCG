/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187885
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] [6] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned short) ((int) (_Bool)1));
                        arr_16 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4 - 1] [i_4])) << (((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4 - 3] [i_4]))));
                    }
                    var_15 = (((~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)157)))))) ^ (var_2));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) (unsigned char)98);
                        arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1 + 2] [10ULL])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (unsigned char)99)))));
                        arr_20 [i_0] [(unsigned short)0] [i_0] [(unsigned short)0] [i_2] [i_2] = ((/* implicit */unsigned short) min((arr_8 [i_0] [i_5] [15LL] [i_5]), (max((((/* implicit */int) (_Bool)1)), (arr_9 [i_1 - 1] [i_2])))));
                    }
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) max(((-(((/* implicit */int) arr_4 [i_2] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1 + 2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))))))), ((~(7193288567269021846LL))))))));
                }
                for (signed char i_6 = 4; i_6 < 14; i_6 += 2) 
                {
                    var_18 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) var_1))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                    var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((int) ((((/* implicit */int) (_Bool)0)) & (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    arr_23 [8] [i_1 + 2] [8] [8] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                }
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) ((((int) var_5)) | (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */int) (_Bool)1))))))))))));
                var_22 += ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (arr_18 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) 1651211331)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [(unsigned char)10] [i_0] [(unsigned char)10])) : (((/* implicit */int) var_5)))))), ((-(((((/* implicit */int) arr_12 [i_0] [(unsigned char)13] [i_1] [2LL])) + (((/* implicit */int) (_Bool)0))))))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1])) ? (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) arr_15 [i_1 + 1] [i_0] [i_1 + 1])) - (20))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) == ((((_Bool)1) ? (arr_21 [i_1] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))))));
            }
        } 
    } 
    var_24 = (_Bool)1;
    var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) 1049691396)) <= (0U)));
}
