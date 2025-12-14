/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182904
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
    var_16 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) ((signed char) var_10))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1119003608)) ? (((/* implicit */int) arr_3 [i_0])) : (var_8))))))));
                    arr_8 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)-82))))));
                    var_18 = ((/* implicit */int) var_1);
                    arr_9 [(signed char)7] [i_1] [i_1] [i_3] = ((var_13) / ((-(-1119003591))));
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_2)))));
                    arr_13 [i_0 - 1] [i_1 + 2] [i_0 - 1] [i_1] = arr_1 [i_0];
                }
                arr_14 [i_2] [i_2] [i_1] [i_1 + 3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2)))));
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_5] [i_1] [i_2] [i_2 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((((_Bool) var_12)) ? ((~(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_4))))));
                    var_20 -= ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) 876543368473200081LL)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) var_13))))) ? (arr_1 [i_5]) : (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_5]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))));
                    var_23 = ((/* implicit */int) ((long long int) var_11));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned short) var_2))));
                    arr_23 [i_1] [i_1] [i_2] [i_0] [i_1] [i_7] = ((((/* implicit */_Bool) (+(arr_6 [i_1])))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((_Bool) -1102675106))));
                    var_25 = ((/* implicit */_Bool) (+(arr_21 [i_0])));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_26 ^= ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 3])) ? (arr_15 [8LL] [i_0] [i_1 - 2] [i_1 + 3] [i_8]) : (arr_18 [i_1] [i_1] [i_1 - 3] [i_1 + 3] [i_8]));
                    arr_28 [i_8] [i_1] [i_1] [i_0 - 2] = ((((/* implicit */_Bool) ((arr_21 [i_0]) / (((/* implicit */long long int) var_8))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (-15LL));
                    var_27 = ((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0 + 1] [i_8] [i_1]);
                }
                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
            }
            var_29 += arr_27 [i_0] [i_1 - 2] [i_0 - 2] [i_0];
            var_30 = ((/* implicit */int) ((unsigned short) (~(717489623))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_0 - 1] [i_9] [i_0 - 2] = ((/* implicit */signed char) (-2147483647 - 1));
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0 - 2] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_15))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (0LL))))))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_32 += ((/* implicit */_Bool) var_0);
            arr_34 [i_10] [(unsigned short)10] [i_0] = ((/* implicit */int) ((unsigned short) var_12));
        }
        var_33 = ((/* implicit */unsigned short) (signed char)58);
    }
    var_34 = ((/* implicit */_Bool) var_0);
    var_35 = (+(((((/* implicit */_Bool) var_5)) ? (((1073741696) * (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
}
