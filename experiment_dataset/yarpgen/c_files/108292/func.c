/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108292
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
    var_17 = ((/* implicit */unsigned short) (signed char)26);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_5)))))))));
            var_19 = ((/* implicit */signed char) (unsigned char)31);
            arr_5 [12LL] = ((/* implicit */signed char) arr_2 [i_1] [i_0] [(unsigned short)13]);
            arr_6 [(short)2] = ((/* implicit */short) (+(arr_4 [i_0] [i_1])));
            arr_7 [0LL] [5LL] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_20 = ((/* implicit */short) (unsigned char)17);
            arr_12 [18LL] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)128))))), (var_3))), (((/* implicit */unsigned long long int) var_10))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)23))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_2])))));
            var_22 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) : (var_16))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_2] [i_0])))))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned char) (+(var_8))));
                        arr_20 [i_5] [i_3] [i_4] [18ULL] = ((/* implicit */_Bool) arr_8 [i_5]);
                        arr_21 [i_0] [i_5] = ((/* implicit */short) var_11);
                    }
                } 
            } 
            arr_22 [(unsigned short)6] [i_3] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_13 [1])) % (((/* implicit */int) var_1)))));
            arr_23 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_19 [i_0] [4] [(unsigned short)1]));
            var_24 = ((/* implicit */long long int) (signed char)(-127 - 1));
        }
        var_25 = ((/* implicit */unsigned int) ((long long int) var_14));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_26 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((min((((((/* implicit */_Bool) var_11)) ? (var_7) : (-1))), (((((/* implicit */_Bool) 248306385U)) ? (arr_3 [i_7]) : (((/* implicit */int) var_1)))))) - (930397961)))));
                arr_32 [i_6] = (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_0] [i_7])))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_17 [i_6] [i_7]))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_5))));
                            arr_38 [i_0] [(unsigned short)7] [i_9] [(short)16] [i_9] = ((/* implicit */long long int) ((unsigned char) -426314112));
                        }
                    } 
                } 
                arr_39 [i_0] [(short)1] [i_0] [(short)4] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)30))))) ? ((~(arr_8 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [(unsigned short)4] [i_6] [i_6]))))));
            }
            var_29 |= ((/* implicit */unsigned short) min((1194220223U), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
        }
    }
    var_30 = ((/* implicit */long long int) (+((~(((1856525489) / (((/* implicit */int) var_5))))))));
}
