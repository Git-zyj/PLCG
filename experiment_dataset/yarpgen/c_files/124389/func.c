/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124389
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned short) var_12)))))) ? (max((((/* implicit */unsigned int) var_12)), (((1375019647U) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_12)))))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4078))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [i_0]))))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))));
        var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max(((unsigned short)4096), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)4076)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) arr_3 [i_2])) : (((((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 1])) << (((((/* implicit */int) arr_4 [i_2 + 3] [i_1 - 2])) - (71)))))));
            var_17 += ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1]))))));
        }
        for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (max((((/* implicit */unsigned int) (signed char)1)), (arr_7 [i_1] [i_1 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_1 - 1])) << (((((/* implicit */int) arr_3 [i_1 - 3])) - (5207))))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_16 [i_1] [(unsigned char)16] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_14 [i_1] [i_3] [8U] [i_4]));
                var_18 = ((/* implicit */unsigned short) (+(((unsigned long long int) arr_7 [i_4] [i_3]))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_6);
                            var_20 = ((/* implicit */unsigned long long int) max(((+((-(arr_20 [6LL] [6LL] [(unsigned short)16] [(unsigned short)16] [(unsigned short)16]))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned short)4096)))), (((/* implicit */int) arr_18 [i_1 - 3] [i_1 - 3] [i_6] [i_1 - 3] [i_4] [i_1])))))));
                            var_21 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 18286568828213197246ULL)) ? (((/* implicit */int) arr_4 [i_3] [i_3])) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6190)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5]))) : (arr_15 [i_5] [i_6])))))))));
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1 - 3] [i_1] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1]))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_2))));
                var_24 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_10)), (arr_15 [i_1] [i_7 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_7]))))) >= (((/* implicit */int) arr_12 [i_1])))))));
            }
        }
        for (unsigned long long int i_8 = 3; i_8 < 17; i_8 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((max((min((((/* implicit */unsigned int) arr_4 [i_8] [(unsigned short)8])), (arr_15 [i_1] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))), (var_4)));
            var_26 = ((/* implicit */unsigned int) min((max((((/* implicit */int) var_11)), ((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_1])) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) (signed char)12)) == (((/* implicit */int) arr_9 [i_1] [i_8])))))))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                arr_29 [i_1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1]))))), (arr_23 [i_1 - 2] [i_1] [i_1]))));
                arr_30 [i_1] [i_1] [6ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((long long int) 1899892052139800653LL)), (((/* implicit */long long int) ((short) var_11))))))));
                arr_31 [i_1] = var_11;
            }
            var_27 *= max((((/* implicit */unsigned short) ((_Bool) 2919947667U))), (arr_3 [i_8]));
        }
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((160175245496354369ULL), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_1 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))) || ((!(((/* implicit */_Bool) 18286568828213197247ULL))))));
        var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_1 - 3])) : (((/* implicit */int) ((_Bool) 15U))))), (((/* implicit */int) (_Bool)1))));
    }
}
