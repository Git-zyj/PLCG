/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112939
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */int) (+((((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))) : ((+(arr_0 [i_0])))))));
        var_15 = ((/* implicit */unsigned char) arr_1 [(short)16]);
        var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11369)) ? (-1216841436) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_5 [2LL])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            var_18 = ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1])) : (var_3));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))) : (var_4)))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [i_1])))));
            arr_11 [i_2] = ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_1])));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((_Bool) arr_3 [i_1]));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                arr_19 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36410)) ? (-1108339514) : (((/* implicit */int) (short)19437))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (var_1) : (arr_14 [i_1]))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1])) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_14 [i_1]) : (arr_14 [i_5])));
                    var_24 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1])))))));
                }
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_25 &= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [i_1]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_26 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 2]))));
                        var_26 += ((/* implicit */_Bool) (-(var_13)));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_8 + 1])) ? (arr_4 [i_8 + 1] [i_8 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8 - 2]))))))));
                    }
                    arr_31 [i_1] [i_1] [i_5] [(signed char)0] [i_7] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (arr_0 [i_1]));
                }
                var_28 = ((/* implicit */short) (~(arr_20 [i_1] [i_1] [i_5])));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1])) ? (arr_12 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_14 [(short)7]))))) ? (((/* implicit */int) ((signed char) arr_27 [i_1] [i_1] [i_5] [i_5]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
                arr_32 [i_5] = ((/* implicit */signed char) ((short) 428128504093571664ULL));
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
            var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (arr_20 [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            arr_33 [i_1] [i_3] [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (arr_20 [i_3] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))))));
        }
        var_32 = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1])));
    }
    var_33 = ((/* implicit */_Bool) var_10);
    var_34 = ((/* implicit */long long int) var_13);
}
