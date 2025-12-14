/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102294
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
    var_11 -= ((/* implicit */_Bool) (~(min((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) : (var_2))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (var_7)))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = var_7;
        var_12 = max(((~(((((/* implicit */_Bool) 8726304040146066820ULL)) ? (((/* implicit */long long int) 2005510029U)) : (arr_0 [i_0]))))), (((/* implicit */long long int) ((unsigned char) arr_1 [1]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) var_2))));
                        var_14 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [(unsigned char)1] [(unsigned char)4] [i_2] [i_3]))) : (arr_0 [i_3]))))), ((~(((((var_1) + (2147483647))) >> (((var_1) + (1328933533)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) var_10);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) (unsigned char)250)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_5)) : (50331648)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_3] [i_4]))))) : (((/* implicit */int) max((var_4), (((var_7) == (var_2))))))));
                            var_17 = ((/* implicit */long long int) max(((-(min((2147483647), (((/* implicit */int) var_4)))))), (((/* implicit */int) (!(((_Bool) var_8)))))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [(_Bool)1] [i_1] [i_2] [i_2] [(_Bool)0] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_0 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) % (var_7))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(short)5] [9LL] [(short)5] [i_3] [i_5 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)32))))) : (var_2)))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1])) ? (-3108291039051523535LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_0 + 1] [i_0 - 3] [i_5 - 1] [(_Bool)1]))))))));
                            arr_21 [0LL] [i_1] = (!(((/* implicit */_Bool) ((short) arr_10 [i_0]))));
                            var_18 |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [7ULL] [i_5 - 1] [i_5] [11] [i_5] [i_5])))) ? ((((!(((/* implicit */_Bool) arr_3 [(signed char)5] [i_3])))) ? (((/* implicit */int) arr_13 [i_0 - 3] [i_0 - 3] [i_1] [2] [i_3] [i_5])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) -577176620)) ? (((/* implicit */int) (short)-13390)) : (511579289)))));
                        }
                        var_19 = ((/* implicit */signed char) var_6);
                        var_20 = ((/* implicit */long long int) ((signed char) arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 4; i_6 < 10; i_6 += 3) /* same iter space */
    {
        var_21 -= ((/* implicit */long long int) (~(((arr_12 [i_6] [i_6] [i_6 - 4] [i_6 - 3]) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [(_Bool)1] [i_6 - 1] [i_6 - 1] [i_6] [9LL] [i_6])))))))));
        arr_26 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_6 - 3]))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [(_Bool)0] [i_6] [4])), (1805089369)))) ? (min((((/* implicit */int) (_Bool)1)), (-627402160))) : ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_10))));
    }
}
