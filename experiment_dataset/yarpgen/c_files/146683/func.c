/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146683
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_0 [i_0])))))) : (var_8)));
        var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            arr_7 [(short)5] [i_2] [i_2 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((520093696U) > (((/* implicit */unsigned int) arr_5 [i_2 + 3])))))));
            var_22 = ((/* implicit */short) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-6)));
            var_23 = ((/* implicit */unsigned int) min((((long long int) ((var_16) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))), (((/* implicit */long long int) min((arr_4 [i_2 + 2]), (((/* implicit */short) (!((_Bool)1)))))))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((~(((/* implicit */int) arr_4 [i_2 + 3])))) : (((/* implicit */int) ((signed char) arr_4 [i_2 + 1]))))))));
        }
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_1])))) : (((unsigned int) arr_0 [i_1]))));
    }
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_25 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_0))) + (((int) var_0))))), (((((/* implicit */_Bool) (unsigned short)49843)) ? (arr_9 [i_3] [i_3]) : (arr_9 [i_3] [i_3])))));
        var_26 |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_4)))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            arr_14 [i_3] = ((/* implicit */int) ((short) ((((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_4 + 1])) & (var_17))));
            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_9 [i_4] [i_4 - 1])))));
        }
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((unsigned char) ((arr_11 [i_3] [4] [i_3]) ? (((/* implicit */int) (unsigned char)175)) : (arr_12 [i_3] [i_3])))))));
        arr_15 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
    {
        var_29 ^= ((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -1935412642)))) : (3494146175U));
        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_5 + 2] [i_5 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_23 [i_6] [i_7] = ((int) arr_16 [i_5 - 3]);
                    arr_24 [i_5] [(short)9] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) 1836932413U)) ? (-1935412642) : (((/* implicit */int) (unsigned char)80)))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_14)))))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        var_31 = ((/* implicit */_Bool) (signed char)62);
        arr_27 [i_8] = ((_Bool) ((((/* implicit */unsigned int) (-(var_2)))) - (((unsigned int) var_9))));
    }
    var_32 = ((/* implicit */long long int) var_10);
    var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * ((-(2968911734U)))));
}
