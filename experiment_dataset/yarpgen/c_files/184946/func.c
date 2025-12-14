/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184946
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) arr_4 [i_0] [i_2]);
                    var_11 = ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]);
                    var_12 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) var_3))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_3 [i_0] [(unsigned char)4] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [(unsigned short)3] [(unsigned char)10])) ? (((/* implicit */int) arr_8 [i_2] [4ULL] [i_2])) : (((/* implicit */int) arr_2 [i_0])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (unsigned char)220))));
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) 7490607881648007169LL)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((arr_10 [i_3] [i_3]), (arr_9 [(signed char)13])))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_9 [i_3]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (7490607881648007169LL)))) && (((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 + 1] [i_3 + 1]))));
            var_16 = ((/* implicit */unsigned int) var_8);
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_14 [i_3] [(unsigned char)8]))));
                        arr_19 [i_6] [(unsigned short)4] [i_3] [i_4] [(_Bool)1] = ((/* implicit */int) (-((-(var_7)))));
                        arr_20 [16] [12U] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((/* implicit */int) arr_18 [17U] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3])) : (((/* implicit */int) var_3))));
                        arr_21 [(signed char)6] [i_3] = var_3;
                    }
                } 
            } 
            var_18 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_4] [i_4])));
        }
        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_24 [i_3])), (arr_12 [i_3 + 1] [i_3] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))))))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (max((var_6), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_3] [i_7 - 2])))))));
            arr_25 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), ((-(min((((/* implicit */int) var_8)), (arr_23 [i_3])))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_21 = var_0;
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned int) arr_31 [i_9] [i_10])))));
                        var_23 = ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_9 [i_3 - 1]))));
        }
        var_25 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_26 [i_3] [i_3 - 2])), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)35)), ((unsigned short)2047))))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) var_8)))))));
    }
}
