/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124292
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */short) min((var_16), (((short) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((short) arr_4 [i_1])), (((/* implicit */short) (signed char)34))));
        arr_7 [i_1] [i_1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-12143))))));
        var_17 &= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (65535)));
        arr_8 [i_1] |= ((/* implicit */_Bool) (((((+(arr_5 [i_1]))) + (2147483647))) << (((arr_2 [i_1] [i_1]) - (5153370880704632049ULL)))));
    }
    var_18 -= ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_11))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                arr_15 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_2 + 1]))) ? ((((!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) -65536)) : (17834032960583048770ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_2]))))))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 2; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    arr_18 [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (signed char)-102)) && (((/* implicit */_Bool) 823906779))))));
                    arr_19 [i_2] [(_Bool)1] [i_2] [i_4 + 1] = ((/* implicit */unsigned int) arr_10 [i_3]);
                    arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min((var_12), (((/* implicit */unsigned short) arr_10 [i_4])))))) ? (((((-823906764) + (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) <= (-695355466)))))) : (((((/* implicit */int) arr_10 [i_4])) * (((/* implicit */int) arr_9 [i_2]))))));
                }
                for (long long int i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    arr_23 [i_2] [i_2] [6LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (823906797)))) ? (((((/* implicit */_Bool) -695355466)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned short)20395)))) : (((/* implicit */int) arr_14 [i_2]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (short)18823)) <= (arr_5 [i_2 - 1])))));
                    var_21 = var_6;
                }
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-83))));
                    arr_28 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_6] [i_2 - 1]));
                }
            }
        } 
    } 
}
