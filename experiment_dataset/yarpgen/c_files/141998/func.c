/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141998
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
    var_17 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
    var_18 -= ((/* implicit */unsigned short) min((((long long int) min((((/* implicit */int) (signed char)-113)), (var_11)))), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) min((arr_1 [3LL]), (arr_3 [i_1 - 4] [i_1 - 1])));
            var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
            var_21 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((var_6), (((/* implicit */short) arr_2 [i_0]))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (arr_5 [3LL] [i_1])))))), (var_9)));
        }
        arr_6 [9LL] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [17])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13297)))))) != (arr_1 [i_0 - 1])))));
        arr_7 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) || (((/* implicit */_Bool) var_5))));
        arr_8 [i_0] = ((/* implicit */int) ((((long long int) arr_1 [i_0 - 1])) / (((long long int) min((var_10), (((/* implicit */unsigned int) (signed char)112)))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_10 [i_2 - 1] [i_2]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (var_13))))))) ? (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_2])) + (2147483647))) << (((((((/* implicit */int) (signed char)-113)) + (127))) - (14)))))), ((-(arr_3 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [16ULL] [16ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */short) var_15)))))) : (((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (arr_1 [i_2])))))) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (15272416515044131746ULL)))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */int) arr_9 [i_2] [i_2 - 1])) : ((~(((/* implicit */int) var_2))))));
            var_23 = ((/* implicit */unsigned long long int) var_4);
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_5 [(signed char)15] [i_2 - 1])))))));
            arr_19 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) (unsigned short)65515)) : (var_9))) | (((arr_14 [i_2]) + (((/* implicit */int) arr_11 [i_2]))))));
            var_25 = (!(((/* implicit */_Bool) var_2)));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            arr_23 [i_2] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_1)), (var_7))), (((/* implicit */unsigned long long int) (+((-(var_9))))))));
            arr_24 [i_2] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_2 - 1])), ((-(arr_15 [i_2] [i_4] [i_4])))))) ? ((-((+(var_0))))) : (((((/* implicit */_Bool) arr_4 [11] [i_2 - 1] [i_4])) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (signed char)-1)))));
            arr_25 [i_2] = ((/* implicit */unsigned char) var_5);
            arr_26 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_21 [i_2 - 1] [i_2]);
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_26 = ((/* implicit */long long int) var_10);
                var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 1] [i_2 - 1]))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2 - 1]))));
            arr_33 [i_2] = ((/* implicit */unsigned long long int) var_11);
            var_29 = ((/* implicit */_Bool) ((((arr_14 [i_2]) * (((/* implicit */int) arr_5 [i_2] [i_2])))) / ((-(1420845185)))));
            var_30 = ((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) << ((((~(arr_15 [i_2] [i_2] [(unsigned char)9]))) - (9178148937958553524ULL)))));
        }
    }
}
