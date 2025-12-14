/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146757
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_16))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [(signed char)8] [i_3] [13LL] [i_1] [i_1 + 1] [7ULL] = ((/* implicit */_Bool) var_12);
                        arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)-93);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                        {
                            var_20 |= ((/* implicit */signed char) ((((687959678U) <= (arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_16)) ? (1098249007U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                            arr_14 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1] [i_3] [(unsigned short)12] [i_4]))) % (257086254557249564ULL)));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((signed char) arr_2 [i_1 + 1])))));
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] &= ((/* implicit */short) var_8);
                            arr_19 [(_Bool)1] [i_3] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [(unsigned char)4] [(unsigned char)4] [i_5]) : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_6] [i_1 + 2] [(short)17] [i_2] [i_1 + 2] [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 2]))) > (arr_20 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1 - 1])));
                            var_22 += ((/* implicit */signed char) ((_Bool) arr_1 [i_1 - 1] [i_1 + 2]));
                        }
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((arr_1 [i_1 + 1] [i_1 + 1]) - (2029351716U))))))));
                        var_24 = ((/* implicit */unsigned long long int) (+(-930089103)));
                    }
                } 
            } 
            arr_25 [(unsigned short)4] [9U] [9U] &= var_0;
            arr_26 [i_0] |= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (18189657819152302051ULL)))));
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            arr_29 [i_7] = ((unsigned short) arr_6 [i_7] [(short)9] [(_Bool)1] [(unsigned short)7]);
            var_25 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0] [8U] [i_7] [i_7] [i_0]))));
        }
        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) + (((((/* implicit */_Bool) (unsigned short)8962)) ? (arr_15 [(_Bool)1] [i_8] [i_0] [i_0] [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118)))))));
            var_27 = ((/* implicit */unsigned long long int) -930089095);
            arr_32 [i_8] = ((/* implicit */unsigned short) (-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) (~(arr_35 [i_0] [i_9])));
            var_29 = ((/* implicit */signed char) ((arr_13 [i_0] [i_0] [i_0] [i_9] [i_9]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_9])))));
        }
    }
    var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((var_5) ^ (((/* implicit */unsigned long long int) var_8)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)2)))))))), (var_3)));
    var_31 = (+(var_5));
}
