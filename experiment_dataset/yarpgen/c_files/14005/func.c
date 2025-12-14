/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14005
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((+(var_5))) / (((/* implicit */long long int) max(((~(var_7))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)15857)) : (((/* implicit */int) (signed char)3))))))))))));
    var_17 = ((/* implicit */int) (short)-22771);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)29551)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] = var_4;
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (var_7) : ((+(((/* implicit */int) (signed char)88))))));
        }
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)127);
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) (signed char)-57));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_3);
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((0U) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))))))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            arr_21 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)88))))) ? (((arr_18 [i_4]) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_5])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) != (arr_18 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3]))) : (arr_18 [i_4]))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_19 [i_3] [i_3])) : (((/* implicit */int) arr_20 [(short)7] [i_4]))));
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((short) var_14));
                    var_24 = ((/* implicit */short) (+((~(-2147483644)))));
                }
                /* vectorizable */
                for (short i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    arr_30 [i_8] [i_3] [i_6] [i_6] [i_4] [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_29 [i_8 + 1] [i_8 + 1] [i_8 - 2]));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_28 [i_8 - 1] [i_8 - 1] [i_6] [i_8 - 1]))));
                    arr_31 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_4])) ? ((-(((/* implicit */int) (unsigned short)14502)))) : (((((/* implicit */_Bool) -322067540)) ? (((/* implicit */int) (short)4609)) : ((-2147483647 - 1))))));
                    var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_3] [i_4] [i_6]))))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -116108300)))))));
                }
                arr_32 [i_3] [i_4] [i_6] |= ((/* implicit */unsigned int) (((+((+(var_7))))) >= (((((/* implicit */_Bool) min((322067539), (var_7)))) ? ((-(182770110))) : (((/* implicit */int) min((arr_25 [i_3] [i_4] [i_4] [i_6]), (((/* implicit */short) (signed char)105)))))))));
            }
        }
        arr_33 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? ((+(var_11))) : (((/* implicit */int) (unsigned char)0))));
        arr_34 [i_3] [3] = ((/* implicit */unsigned char) var_8);
    }
    var_27 = ((/* implicit */unsigned char) var_7);
}
