/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18002
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
    var_16 = (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)143))))) : ((~(3384808412U))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_4)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_1 [(unsigned short)2] [i_0]))));
        var_19 = ((/* implicit */unsigned int) ((unsigned short) (~(910158884U))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)104))))), (min((arr_1 [6ULL] [6ULL]), (((/* implicit */long long int) arr_3 [3LL] [i_1]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_2])), (((unsigned char) (unsigned char)143)))))));
            var_22 = ((/* implicit */unsigned short) max(((-(arr_1 [i_2] [i_2]))), ((~(arr_1 [i_2] [(unsigned char)4])))));
            arr_9 [9] = ((/* implicit */short) min(((~((+(var_9))))), (((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_23 = ((unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_6 [i_3] [i_2] [i_1])))));
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) var_9);
                    var_25 = ((/* implicit */unsigned char) (+((+(((long long int) var_11))))));
                }
                for (signed char i_5 = 3; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    arr_20 [i_5] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_17 [i_5] [i_5] [i_3] [i_2] [i_2] [3LL]))))));
                    arr_21 [i_1] [i_1] [i_1] [i_5] [i_3] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)1024)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (_Bool)1))))))));
                }
            }
        }
    }
}
