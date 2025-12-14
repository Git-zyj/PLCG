/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150555
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
    var_12 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) var_5))))) : (((int) var_1))))) : (var_10));
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((15LL) >> (((var_10) - (4174710294420199896ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [6] [6] [i_1] = max((((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))), (((/* implicit */unsigned int) var_5)));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1])) * (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]))))) ? (((arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]))) : (16181451164885040196ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_2 - 1] [i_2 + 3] [i_2 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                        var_16 += ((/* implicit */short) ((((((/* implicit */_Bool) 16181451164885040214ULL)) ? (((16181451164885040219ULL) + (16181451164885040214ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16181451164885040188ULL)) ? (2113929216U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1020)))))))) * (((/* implicit */unsigned long long int) ((arr_8 [i_2 + 3] [i_2 + 1] [i_2]) / (arr_8 [i_2 + 3] [i_2 + 1] [i_2 + 3]))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((long long int) arr_19 [i_5] [i_5] [i_4] [i_2] [i_1] [i_0])))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_0))));
                            var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2] [i_5] [i_5] [i_5])))) ? (((min((16181451164885040214ULL), (2265292908824511390ULL))) * (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) <= (-1301990887106174301LL)))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_15 [i_2] [i_2] [i_2 + 3] [i_2] [i_2]) < (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) / (((/* implicit */int) ((unsigned char) arr_20 [i_0] [(short)5] [i_2] [i_5])))));
                            var_21 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (var_4)))), (((arr_20 [i_4] [i_1] [i_2] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) (+(2181038080U)));
                            arr_24 [8ULL] [i_6] [i_2] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_0);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((arr_22 [i_6] [i_4] [(unsigned short)0] [(unsigned short)0] [i_0] [i_0]), (max((((((/* implicit */_Bool) 16181451164885040195ULL)) && (((/* implicit */_Bool) arr_16 [i_6] [i_4] [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_1 [i_4])))))))))));
                        }
                        arr_25 [i_0] [i_1] [i_1] [(signed char)0] [i_4] [i_0] = ((/* implicit */long long int) max((max((((((/* implicit */int) var_5)) | (var_0))), ((+(((/* implicit */int) arr_7 [6] [i_2 + 1] [i_2 + 1])))))), (((/* implicit */int) arr_20 [(unsigned short)2] [i_2 + 1] [i_1] [i_0]))));
                    }
                }
            } 
        } 
    } 
}
