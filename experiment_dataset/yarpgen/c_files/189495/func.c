/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189495
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
    var_20 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)0)))) | (min((((((/* implicit */int) (_Bool)1)) | (1499773602))), (((/* implicit */int) (unsigned short)65522))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 += ((/* implicit */_Bool) max((-1499773603), (((/* implicit */int) ((short) (unsigned char)0)))));
        arr_4 [i_0] = ((/* implicit */long long int) 2147483647);
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_1] [i_0] = min((((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned char) arr_2 [i_0] [i_1])), (arr_3 [0]))))), ((unsigned char)96));
            arr_8 [i_0] [i_0] [(unsigned char)6] = ((/* implicit */short) arr_2 [i_0] [i_1]);
            var_23 = ((/* implicit */unsigned char) (((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) * (((/* implicit */int) (signed char)0))));
        }
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_19 [i_5] [i_5] [i_4] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) max(((unsigned short)65531), (((/* implicit */unsigned short) arr_12 [(unsigned short)4] [i_5]))))), (902831976)))));
                        var_24 = (_Bool)1;
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                        {
                            arr_22 [i_5] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((((/* implicit */int) arr_21 [i_4] [i_5] [i_4] [i_2] [i_2])) == (1909470688))), (((((/* implicit */_Bool) arr_14 [i_6] [i_4] [(unsigned char)8] [i_2])) && (((/* implicit */_Bool) (signed char)-73)))))))));
                            arr_23 [0] [0LL] [i_3] [i_4] [i_3] [1ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_6 - 2]))));
                            var_25 = min((((/* implicit */long long int) (!(((((/* implicit */_Bool) (short)-370)) || (((/* implicit */_Bool) (short)3403))))))), (min((max((((/* implicit */long long int) (signed char)-15)), (-6503552948420435166LL))), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_9 [2] [i_3]))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), ((~(((/* implicit */int) arr_21 [i_7] [i_5] [i_4] [i_3] [10LL]))))));
                            var_27 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) 3651057464160382767LL)), (((unsigned long long int) -5978835754725762990LL)))));
                        }
                    }
                } 
            } 
        } 
        arr_28 [(unsigned char)4] [i_2] = ((/* implicit */int) ((unsigned char) min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_2]))), (((/* implicit */unsigned int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))));
        arr_29 [i_2] = ((/* implicit */int) arr_2 [(unsigned char)19] [(unsigned char)19]);
        arr_30 [i_2] [i_2] = ((/* implicit */_Bool) (-(((4294967295U) ^ (1U)))));
        var_28 = ((/* implicit */unsigned int) (+(min((max((((/* implicit */int) (_Bool)1)), (arr_15 [i_2] [(_Bool)1]))), (((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) (signed char)-55))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_35 [i_8] = ((/* implicit */unsigned char) min((((unsigned long long int) ((signed char) arr_1 [(_Bool)1] [i_8]))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)0)))) >= (((/* implicit */int) (_Bool)1)))))));
        arr_36 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (_Bool)1)), (-4346331539604185189LL))))))));
        var_29 *= (((!(((/* implicit */_Bool) min((arr_1 [i_8] [i_8]), (((/* implicit */short) (unsigned char)160))))))) || (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_8] [i_8])), (8933915158985280182LL)))) || ((!(((/* implicit */_Bool) 548263304)))))));
    }
    var_30 *= ((/* implicit */unsigned char) ((long long int) ((min((0LL), (9223372036854775807LL))) / (((/* implicit */long long int) min((var_12), (((/* implicit */int) (_Bool)1))))))));
}
