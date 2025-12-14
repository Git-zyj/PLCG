/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125376
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_2 [i_0]));
                var_10 = arr_3 [i_0] [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_11 = ((/* implicit */short) ((arr_8 [i_2]) + (((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_2])) - (arr_8 [i_2 - 1])))));
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(240260990U))))));
        arr_9 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
    {
        arr_12 [i_3 - 1] = ((/* implicit */short) (unsigned char)133);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) ((arr_13 [i_3 - 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143)))));
            arr_15 [i_4] = ((/* implicit */long long int) (((~(2734976891U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
            var_14 = (-(270742129));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_19 [i_3 - 2] [i_5] = ((/* implicit */unsigned short) arr_1 [i_3] [i_3 + 1]);
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (-1)))) ? (((/* implicit */int) (short)11694)) : (((((/* implicit */_Bool) (unsigned char)112)) ? (-1960020891) : (((/* implicit */int) (short)-6611)))))))));
        }
        var_16 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)(-32767 - 1)))))) - (((var_2) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_3])))));
        arr_20 [i_3] [i_3 + 2] = ((/* implicit */int) ((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_14 [i_3])))) <= (((/* implicit */int) (unsigned char)113))));
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_21 [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6])))))))) ? (((/* implicit */int) var_1)) : (min((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)9760)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (672144054) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_17 += ((/* implicit */int) min((var_3), (((/* implicit */unsigned int) (unsigned char)141))));
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 11; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            {
                var_18 = max((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (unsigned char)132)))))));
                arr_30 [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25666))) > (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_7] [i_7])) & (((/* implicit */int) arr_0 [(short)0]))))) | (((arr_28 [i_8] [i_8 + 2] [i_7 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)20423)))))))));
            }
        } 
    } 
    var_19 = var_6;
}
