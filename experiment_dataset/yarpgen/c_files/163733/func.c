/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163733
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
    var_10 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) || (((/* implicit */_Bool) var_8))));
    var_11 = ((/* implicit */unsigned int) ((unsigned char) var_4));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)71)), (arr_0 [(short)18] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 282279210U)) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) (signed char)71))))) ? (arr_0 [(short)8] [(short)8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((arr_0 [i_0] [i_0]) > (var_2)))))) : ((-(0U)))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_1] [15U])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23603))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_14 = ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_4 - 1])) ? (((/* implicit */int) arr_4 [i_3 - 1] [i_4 - 1])) : (((/* implicit */int) arr_4 [i_3 + 2] [i_4 - 1])));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (-(9143772962248391738LL))))));
                            arr_17 [i_1] [i_2] [i_2] [19U] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_9 [i_2])))));
                        }
                        var_16 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) 1861087439U)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (short)32764)) || (((/* implicit */_Bool) arr_5 [i_2]))))))) : (((/* implicit */int) arr_11 [i_4] [i_3] [i_1]))));
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */signed char) var_4);
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) arr_8 [i_1] [i_1])), (arr_7 [i_1])))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)75)), (2477943906U)))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_12 [i_1] [(signed char)4] [(signed char)4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (arr_12 [i_1] [8LL] [i_1] [i_1])))))));
        var_19 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) ^ ((~(arr_12 [i_1] [(unsigned char)10] [(unsigned char)10] [i_1]))))));
    }
    var_20 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)101))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (var_4)))) ? (max((((/* implicit */unsigned int) 2140673406)), (var_2))) : (max((var_5), (((/* implicit */unsigned int) (signed char)-29)))))))));
}
