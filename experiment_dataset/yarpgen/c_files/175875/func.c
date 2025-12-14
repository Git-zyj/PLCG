/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175875
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (arr_2 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255)))))));
                var_14 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_5 [6LL]) : (arr_5 [(unsigned char)8])))) ^ (((((/* implicit */long long int) 2313562936U)) ^ (3303040564117517409LL))))) & ((-(((((/* implicit */_Bool) (unsigned char)6)) ? (arr_3 [1U] [1U]) : (-3303040564117517410LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) arr_9 [i_0]))))) ? (((((/* implicit */_Bool) var_10)) ? (1445658293) : (((/* implicit */int) arr_9 [i_4])))) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_9 [i_0]))))));
                                var_16 &= ((/* implicit */unsigned short) min((0U), (((/* implicit */unsigned int) (_Bool)1))));
                                var_17 *= ((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_3]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(1165490976U)))) && (((/* implicit */_Bool) max(((unsigned char)6), ((unsigned char)0))))))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                            {
                                arr_17 [i_5] [i_3] [i_3] [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_1] [i_5 + 1] [i_5] [i_5]))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) 1764594964U))))), (((int) arr_2 [i_5]))))));
                                var_18 = ((/* implicit */_Bool) arr_0 [i_2]);
                                var_19 ^= ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [(unsigned char)0] [i_1] [(unsigned short)7] [i_5] [i_5]);
                            }
                            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
                            {
                                var_20 = ((/* implicit */int) ((unsigned int) arr_3 [i_0] [i_6 + 1]));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_6 + 1] [i_1] [i_2] [1ULL] [i_6]) - (arr_13 [i_6 - 2] [16U] [16U] [i_3] [i_6])))) ? (((/* implicit */long long int) ((unsigned int) arr_14 [i_6 + 1] [19ULL] [i_2] [i_3] [(unsigned short)0] [(unsigned char)13] [i_3]))) : (((((arr_13 [i_6 - 1] [i_6 + 1] [i_2] [i_2] [i_6]) + (9223372036854775807LL))) >> (((var_2) - (481021612U))))))))));
                                var_22 &= arr_0 [i_6 - 1];
                                arr_20 [(short)11] [(short)11] [(short)11] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                                var_23 *= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_15 [i_3])) ? (-3303040564117517410LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_18 [i_0] [(short)4] [i_1] [i_1] [i_1] [i_3] [i_6 - 1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [0U] [(_Bool)1])) ? (8407322946785428718LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (8407322946785428718LL) : (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned char)255)))))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) var_9);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)69)) ? (var_5) : (var_5))) : (((((/* implicit */int) (_Bool)1)) >> (((var_10) - (442298168)))))))) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) -3303040564117517410LL)) ? (8466422762946347355LL) : (((/* implicit */long long int) 1445658293)))))))))));
    var_26 = max((10162640324718073990ULL), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_9))))))));
    var_27 = ((/* implicit */unsigned short) (unsigned char)253);
    var_28 = ((/* implicit */_Bool) var_6);
}
