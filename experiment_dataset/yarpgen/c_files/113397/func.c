/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113397
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (var_10)))) ? (min((var_7), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (2989169887U)))))))));
    var_14 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))) ^ (131040U))));
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_2] [17] [i_1] = ((/* implicit */_Bool) ((signed char) var_12));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_11 [i_0]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) arr_3 [i_2]);
            }
            arr_18 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_0] [7LL] [0LL] [i_0])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) : (131040U)))));
        }
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) var_6))))))))));
        var_19 |= (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)14] [i_0]))) * (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            arr_21 [i_5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_0]))))));
            arr_22 [i_0] [i_5] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_2))))));
            var_20 = ((/* implicit */signed char) var_6);
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                arr_28 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                var_21 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_12 [i_7 - 1])), (((((/* implicit */unsigned long long int) 4294836241U)) ^ (var_8)))))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294836256U))));
            }
            arr_29 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_6 [(unsigned short)10]);
            arr_30 [i_0] = ((/* implicit */unsigned int) var_5);
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_10 [i_0] [3LL] [i_0]), (arr_10 [(_Bool)1] [16LL] [i_6])))) < (((/* implicit */int) (!(((/* implicit */_Bool) -6179270436163594916LL)))))));
            arr_31 [(unsigned char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 4294836256U)) : (arr_3 [i_6]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
        {
            arr_35 [i_0] [i_8] [(unsigned char)11] = ((/* implicit */unsigned int) var_1);
            arr_36 [i_8] [i_0] |= ((/* implicit */int) arr_32 [i_8] [16ULL] [i_0]);
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                arr_41 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_12 [17ULL]))))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) 1408294780))))))) : (var_10)));
                arr_42 [i_9] [i_8] [0LL] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((int) 608817618U)))))));
            }
        }
    }
    var_24 = ((/* implicit */long long int) 1305797408U);
}
