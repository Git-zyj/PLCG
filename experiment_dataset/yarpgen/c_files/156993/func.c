/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156993
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
    var_14 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) (-2147483647 - 1));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)204)) & (((/* implicit */int) (unsigned char)200))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_8 [i_3]))))))) >= (4294967295U)));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_3 [i_0] [i_3] [i_3])))) - (((/* implicit */int) min((arr_7 [i_0] [(unsigned short)12] [i_3]), (((/* implicit */unsigned short) var_0))))))))));
            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_3] [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        arr_18 [i_0] [(unsigned short)0] [i_5] [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) (unsigned char)180);
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(arr_17 [i_5]))))));
                    }
                } 
            } 
            arr_19 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) arr_15 [i_4]));
            arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)76)))) >= (((int) arr_11 [i_4]))));
            arr_21 [i_4] = ((((/* implicit */_Bool) arr_16 [i_4] [(unsigned short)7] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_13 [i_4] [(signed char)0] [i_4] [i_4 - 1])));
        }
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(unsigned short)16])))))));
            arr_25 [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_7 - 1] [i_7 + 4] [i_0]))));
        }
        arr_26 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_23 [(short)10] [(short)10])))) : (((((/* implicit */int) (unsigned char)52)) & (((/* implicit */int) arr_12 [(short)18])))))) >= ((~((+(((/* implicit */int) (signed char)119))))))));
    }
    var_22 = ((/* implicit */_Bool) var_5);
}
