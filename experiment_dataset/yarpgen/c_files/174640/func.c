/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174640
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned long long int) ((_Bool) (+(arr_0 [i_0]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8674355013481885082LL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 3] [i_1] [i_3])))))))), ((!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0])))))));
                            var_12 = ((/* implicit */int) arr_4 [i_0] [(unsigned char)1] [i_2]);
                            var_13 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_2]);
                            var_14 -= ((/* implicit */short) (-(min((((((/* implicit */long long int) -2138508678)) - (arr_5 [i_0] [(short)2] [i_2] [(unsigned short)6]))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_3 + 1])) - (((/* implicit */int) arr_2 [i_0] [i_1 - 4] [i_2])))))))));
                        }
                    } 
                } 
                var_15 = min((((unsigned long long int) ((arr_6 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((/* implicit */unsigned long long int) ((int) max(((short)30540), ((short)13753))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1391049507)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (arr_6 [i_5] [i_4 + 3]))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)10])) ? (2771614275490837894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((-(arr_6 [i_0] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                                var_17 += (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_5] [i_6] [i_0] [i_6])) : (((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_18 = (~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4] [i_1] [i_1]))) - (arr_11 [i_4] [(unsigned short)3] [i_0] [i_0]))));
                    var_19 |= ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_4 - 1] [i_0]));
                }
                for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 3) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((3) >> (((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1 - 1] [i_1] [i_7] [i_7])) - (135))))))))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_6 [4U] [i_7 + 2]))), (arr_18 [i_7] [i_7] [i_7 + 3] [i_7 + 3])))));
                    var_20 = (+(((/* implicit */int) arr_20 [i_1] [i_1 - 3])));
                }
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_28 [i_0] [(short)5] [4] [i_8 + 1] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (1814536501)))), (arr_23 [6LL] [i_8 - 1] [6LL])))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)252))))))) : (min((((/* implicit */long long int) ((unsigned int) var_1))), (arr_5 [i_0] [i_1] [i_8] [i_10])))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */long long int) (unsigned char)83)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_10]))))), (arr_5 [i_1] [i_8 + 1] [1] [3ULL]))))))));
                            }
                        } 
                    } 
                    var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-1), (((/* implicit */int) arr_2 [i_1 - 4] [i_8 + 1] [i_8]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_5), (arr_17 [i_0] [i_1] [i_8] [i_8])))), (max((((/* implicit */unsigned long long int) arr_5 [3LL] [3LL] [i_8 + 2] [i_8])), (var_3))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_24 [i_0] [(unsigned char)1] [(_Bool)1] [i_1] [(short)7]))))))))))));
                }
                arr_29 [i_0] = ((((((/* implicit */_Bool) (-(-4)))) ? (((/* implicit */int) ((unsigned char) arr_9 [(_Bool)1] [(short)2] [i_0]))) : (((/* implicit */int) min(((short)-21982), (arr_1 [i_0])))))) - ((-(((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_24 |= ((((/* implicit */long long int) (((~(var_8))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-91)))))))) ^ (max((((/* implicit */long long int) ((unsigned short) var_7))), (var_9))));
    var_25 += max((((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))), (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))) ? (min((((/* implicit */long long int) (signed char)-103)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
}
