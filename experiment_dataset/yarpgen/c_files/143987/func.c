/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143987
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
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-48)) >= (-1802055645)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) var_10);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (min((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_13 [i_1] [1] [1] [i_4] [i_1] [i_1] = min((((/* implicit */long long int) var_3)), (var_1));
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_8))))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_4] [i_3 + 1])) ? (var_11) : (((/* implicit */int) arr_12 [i_5] [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [(short)0] [(short)0] [(short)0])) == (arr_15 [i_1] [i_2] [i_2] [i_4] [i_3 - 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            arr_17 [i_1] [i_2] [6LL] [i_4] [6LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((arr_12 [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) arr_1 [i_2])))), (((/* implicit */unsigned short) (!(arr_7 [(_Bool)0] [i_4])))))))));
                            arr_18 [i_1] [i_2] [(unsigned short)8] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_1] [i_3 - 4] [i_3] [i_3] [i_3] [i_1] [i_3 - 2])) : (((/* implicit */int) var_7))))) ? (((var_0) << (((arr_11 [i_3 - 1]) - (4209078289100764562LL))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))) > (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))))))))));
                            arr_19 [i_5] [i_4] [i_3 - 3] [i_1] = ((/* implicit */unsigned short) ((var_4) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        }
                        for (int i_6 = 3; i_6 < 10; i_6 += 3) 
                        {
                            arr_22 [3ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_12 [i_1] [i_6 - 2] [i_3 + 2]), (arr_12 [i_1] [i_6 + 3] [i_6 + 3]))))));
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))))) && ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1] [i_2] [i_3])))))))));
                            arr_23 [10LL] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */long long int) var_9)) > (arr_11 [i_1])))));
                        }
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_4 [i_1] [i_1]))))))) << (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))))));
                    }
                } 
            } 
        } 
    }
    var_18 = var_11;
}
