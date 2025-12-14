/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184439
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
    var_13 = ((/* implicit */unsigned int) ((min((var_4), (max((var_6), (((/* implicit */unsigned long long int) var_12)))))) == (((/* implicit */unsigned long long int) ((int) var_8)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_14 = max((min((max((((/* implicit */unsigned long long int) (unsigned short)17)), (arr_0 [i_0]))), (arr_0 [14ULL]))), (max((arr_0 [i_0 + 4]), (((/* implicit */unsigned long long int) -3130724844235108516LL)))));
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_0 [i_0 - 1]), (arr_0 [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3130724844235108516LL)) ? (3130724844235108516LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))) >= (16ULL)));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (3130724844235108516LL))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((((/* implicit */int) arr_3 [i_1 + 3])) == (((/* implicit */int) arr_8 [i_1 - 1])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_4] [i_4]))));
                    var_20 = ((/* implicit */int) ((((/* implicit */int) max((((unsigned char) (unsigned short)6720)), (min((arr_6 [i_1] [1U] [1U]), (((/* implicit */unsigned char) (_Bool)1))))))) != ((-(((/* implicit */int) arr_2 [i_1 - 1]))))));
                    arr_12 [(signed char)8] [i_2] [i_1 + 3] [i_2] [i_4] = ((/* implicit */short) arr_4 [i_1] [i_1]);
                }
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((-(arr_5 [i_1 - 1] [i_1]))))))));
            }
            for (short i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_17 [i_2] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_16 [i_6] [11] [i_6] [i_6]), (((/* implicit */unsigned char) arr_13 [(short)12] [(short)11]))))), (min((((/* implicit */unsigned long long int) 3130724844235108492LL)), (arr_11 [i_1] [i_2] [i_2] [i_6]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned short) -8168476199570402541LL));
                        var_23 = ((/* implicit */unsigned int) arr_16 [i_1 - 2] [i_5 + 1] [i_2] [0U]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_22 [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-6264956988067587513LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)6705), (((/* implicit */unsigned short) arr_16 [i_1 + 3] [i_1 + 3] [i_1 + 3] [(signed char)4])))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (arr_9 [i_2] [(unsigned char)6]))))), (((/* implicit */unsigned int) (unsigned short)28505))));
                        arr_23 [i_8] [i_8] [i_5] [i_8] [i_8] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_8 [i_5 + 1]), (arr_8 [i_5 + 1])))), (((unsigned long long int) max((3130724844235108502LL), (((/* implicit */long long int) arr_20 [(short)0] [13LL] [9ULL] [i_6])))))));
                        var_24 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_20 [i_5 + 2] [i_5] [i_5 + 1] [i_5 + 2])))), (((/* implicit */int) (unsigned char)232))));
                        var_25 = -1362285565;
                    }
                    var_26 = ((/* implicit */short) (signed char)-90);
                }
                var_27 *= ((/* implicit */short) 7103278018943597002ULL);
            }
            for (short i_9 = 2; i_9 < 12; i_9 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */short) arr_4 [i_2] [i_9 + 2]);
                var_29 = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */int) arr_3 [(unsigned char)2])) + (2147483647))) >> (((arr_0 [i_1 - 1]) - (18007088781815441468ULL))))));
            }
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(min((arr_11 [(unsigned short)9] [i_1 - 1] [i_2] [i_2]), (max((arr_5 [i_1 + 2] [i_2]), (arr_5 [(unsigned char)5] [i_2]))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            arr_28 [1U] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)28))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_1 - 1])))));
            arr_29 [i_1] [i_10] [(unsigned short)2] = ((/* implicit */short) arr_25 [i_1] [i_1] [i_10] [2ULL]);
        }
        for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 3) 
        {
            var_31 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) 3130724844235108500LL))), (max((arr_1 [i_1] [i_11 - 2]), ((-(arr_0 [i_1])))))));
            var_32 = ((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_1] [i_1] [i_1])), (((unsigned char) arr_15 [i_1 + 2] [i_1 + 2] [i_11 + 1]))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_35 [(short)18] &= ((/* implicit */unsigned short) arr_34 [i_12]);
        var_33 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) 146869931U)))))), (arr_1 [(_Bool)1] [i_12])));
        var_34 = ((/* implicit */unsigned long long int) max(((((+(3130724844235108500LL))) + (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)220), (((/* implicit */unsigned char) (signed char)89)))))))), (((/* implicit */long long int) min(((+(662781074))), (((/* implicit */int) (unsigned short)0)))))));
    }
    var_35 = ((/* implicit */int) var_0);
}
