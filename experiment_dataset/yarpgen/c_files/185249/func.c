/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185249
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((5943799541401832367LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((unsigned char) (short)9541)))));
        var_10 = ((/* implicit */unsigned int) ((long long int) ((long long int) 9223372036854775807LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_11 *= var_5;
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9544))) : (-6562263395713127784LL)))));
                        var_13 ^= ((/* implicit */short) ((((((((/* implicit */int) var_9)) + (2147483647))) >> (((arr_8 [2] [i_3]) - (3476463803074564686LL))))) > ((+(((/* implicit */int) (short)-9540))))));
                        var_14 = ((/* implicit */short) arr_4 [i_2] [12]);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)0)) << (((556852144U) - (556852114U)))))));
    }
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_16 -= ((/* implicit */signed char) min(((~(((unsigned int) var_8)))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
        arr_16 [(signed char)13] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-9554)) > (-1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2847))) & (18446744073709551615ULL)))));
        var_17 = ((/* implicit */unsigned short) ((min((arr_14 [i_5]), ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9)))))) : ((-(((/* implicit */int) ((signed char) var_8)))))));
        var_18 = ((/* implicit */unsigned short) var_8);
    }
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 3; i_8 < 15; i_8 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned int) (short)-9532))) ? (((/* implicit */int) arr_17 [i_6] [i_8])) : ((+(((/* implicit */int) arr_1 [i_6] [i_6])))))), ((+(((/* implicit */int) (short)-30859))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        arr_29 [i_6] [i_7] [(_Bool)0] [i_9] |= ((/* implicit */unsigned int) (~(min((max((6210202747959760984LL), (((/* implicit */long long int) (short)510)))), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (var_6))))))));
                        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) min((12739104257889293435ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-2847)))))) : (((long long int) arr_24 [i_6] [i_6] [i_8 - 2] [i_6])))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2841))) < (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [(short)16]))) * (7790512178357186337LL)))))))));
                        var_20 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_17 [i_9 - 1] [i_9 - 1])) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50334)) ^ (var_1)))))))));
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 3777352390582948046ULL))) ? (((arr_20 [i_8 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 + 1] [i_9 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((859287101) >= (((/* implicit */int) (_Bool)0))))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_33 [i_10] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_30 [i_6] [i_8 - 3] [i_10] [i_10] [12U])), (0U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))) : ((~(-3711711749319128308LL)))));
                        arr_34 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) var_7);
                    }
                    var_22 = ((/* implicit */short) max(((~(4294967295U))), (((/* implicit */unsigned int) (unsigned char)199))));
                    var_23 += ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_2);
}
