/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169836
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
    var_13 = ((/* implicit */signed char) ((((min((var_5), (((/* implicit */long long int) var_1)))) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) != (((max((((/* implicit */long long int) var_7)), (var_3))) & (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (max((var_3), (((/* implicit */long long int) var_10))))))), (((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) - (arr_2 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_0))));
                var_16 = ((/* implicit */long long int) arr_4 [i_2] [i_0] [(unsigned short)8]);
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                /* LoopSeq 3 */
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_5 [i_3 + 2]))));
                    var_19 = ((/* implicit */signed char) arr_8 [i_0] [16U] [(signed char)15] [5LL]);
                    var_20 = ((/* implicit */signed char) arr_7 [i_0] [i_0 + 1] [i_0] [i_0]);
                    var_21 += var_6;
                }
                for (signed char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) var_6);
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_1] [i_0] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))) >= (((((/* implicit */_Bool) arr_1 [(short)20])) ? (((/* implicit */long long int) var_9)) : (arr_5 [i_4])))));
                }
                for (signed char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_1] [14U] [i_2] [i_2] [i_1] [i_0])) <= (((/* implicit */int) arr_15 [i_1] [1LL] [i_1] [i_1] [1LL] [i_1]))));
                    var_25 = ((/* implicit */unsigned int) arr_11 [(unsigned short)9] [i_0 + 3] [i_0] [(unsigned short)16]);
                }
            }
            for (long long int i_6 = 4; i_6 < 21; i_6 += 3) 
            {
                var_26 = ((/* implicit */unsigned short) var_12);
                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_1 [i_0 - 1])));
            }
            var_28 += ((/* implicit */long long int) var_6);
            var_29 += ((/* implicit */unsigned int) var_11);
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [10ULL] [i_1] [i_0 + 4] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])));
        }
        var_31 += ((/* implicit */short) ((max((((/* implicit */long long int) var_7)), (arr_9 [i_0 + 4] [i_0] [22ULL] [i_0 - 1]))) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [8LL] [i_0 + 1])))));
        var_32 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
}
