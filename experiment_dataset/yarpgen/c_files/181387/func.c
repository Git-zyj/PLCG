/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181387
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (short)14829)))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] |= ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? ((-(var_10))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-14821)) && (((/* implicit */_Bool) (signed char)-65))))));
        var_19 += ((/* implicit */unsigned short) arr_2 [i_1]);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned char)0)))) <= ((+(((/* implicit */int) arr_3 [i_1]))))))), ((-(min((((/* implicit */unsigned long long int) var_5)), (arr_4 [i_1])))))));
            var_21 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18)) + (((/* implicit */int) (signed char)78)))))));
        }
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            arr_13 [i_4] [i_4] = (-(((long long int) var_9)));
            arr_14 [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_3] [i_3]));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                arr_17 [i_4] [i_4] = ((/* implicit */long long int) (!(arr_15 [i_3] [4LL] [i_3])));
                arr_18 [i_5] [i_5] |= ((((arr_2 [i_3]) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) var_16)))) >> ((((+(var_0))) + (2114522989))));
                arr_19 [i_3] [i_4] [i_4 - 1] [i_5] = ((/* implicit */unsigned long long int) var_11);
            }
        }
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)0))));
            arr_23 [i_6] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [(unsigned short)1] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_6])))));
        }
        /* LoopSeq 3 */
        for (short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_3] = (-(arr_12 [i_3]));
            var_23 = ((/* implicit */unsigned long long int) (+(((int) arr_7 [i_3]))));
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
        {
            var_24 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_8 [i_3] [i_8])))) != (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_11))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_3])))) : (((/* implicit */int) arr_25 [i_8] [i_3]))));
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) (-(0ULL)));
            /* LoopSeq 1 */
            for (long long int i_10 = 1; i_10 < 22; i_10 += 2) 
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) == (((((/* implicit */_Bool) var_9)) ? (arr_22 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) var_10))))))));
                arr_38 [i_10] [i_9] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_10 + 1]))));
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_36 [i_9] [i_3] [i_3] [i_3])))))))));
            }
        }
    }
    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (var_6))))))));
    var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_8))) : ((+(var_7)))))) ? (var_16) : (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_16)))))));
    var_31 -= ((/* implicit */int) var_5);
}
