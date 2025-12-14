/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148961
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))) / (var_0)))) : (max((var_14), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((((((/* implicit */int) var_17)) * (((/* implicit */int) var_1)))) / (((/* implicit */int) var_6)))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
                        {
                            var_20 |= min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */int) (unsigned short)3)) & (((/* implicit */int) (!((_Bool)1)))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-4538)), (var_19)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [4U]))) : (max((((/* implicit */long long int) var_12)), (var_14))))))))));
                        }
                        for (short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) min((var_22), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_9))))) ? (((/* implicit */int) max((var_5), (arr_0 [(_Bool)1])))) : (((/* implicit */int) arr_1 [(short)2] [(short)2]))))))));
                            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 71916856549572608LL);
                        }
                        for (short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_6] [i_3] [i_0] [8LL] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(arr_14 [i_0] [i_3] [i_0])));
                            var_23 -= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~(arr_22 [i_0] [i_1] [i_6]))))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_18))), (max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])), (var_15)))))) ? (max((max((var_0), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])))), (((/* implicit */unsigned int) (unsigned short)42216)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)23321), (((/* implicit */unsigned short) var_10)))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 11; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        arr_29 [i_0] [i_1] = ((/* implicit */_Bool) var_18);
                        arr_30 [i_7] [i_7] [i_7] |= ((/* implicit */short) min((arr_25 [i_0] [i_7]), (((arr_4 [i_7] [(signed char)10] [i_7 + 1]) >= (arr_4 [i_7] [i_7] [i_7 - 1])))));
                        arr_31 [i_0] [i_1] = ((/* implicit */short) var_2);
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [4LL] [i_9] [i_9] [i_9] [i_9]);
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(arr_14 [(unsigned short)6] [(unsigned short)6] [i_9]))))));
        }
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_1)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 3) 
    {
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) ((unsigned int) min(((~(((/* implicit */int) var_6)))), ((+(var_13))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_38 [i_10] [i_10]))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((4503599627370495ULL) - (4503599627370479ULL)))));
}
