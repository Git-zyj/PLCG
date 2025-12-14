/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156336
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) (short)23481));
        arr_3 [i_0] = (short)-18835;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-18835))) * (0U))), (((/* implicit */unsigned int) (unsigned short)10848))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)18835))));
                    var_13 -= var_7;
                    arr_12 [i_0] [i_1] [i_0] = arr_7 [i_1 - 1];
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_14 = ((/* implicit */short) ((8589926400LL) * (((/* implicit */long long int) ((/* implicit */int) var_4)))));
            var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
            var_16 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-18835)))))));
        }
    }
    var_17 = ((/* implicit */short) min((((/* implicit */int) ((short) (!(((/* implicit */_Bool) -3786973606687202955LL)))))), ((~(((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_18 += ((((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1])) >= (((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1])));
                    var_19 = ((/* implicit */signed char) arr_20 [i_4]);
                    var_20 = ((/* implicit */_Bool) arr_21 [i_5] [i_6 - 1]);
                    var_21 = ((/* implicit */unsigned int) (unsigned char)3);
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                {
                    arr_32 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)23352))));
                    arr_33 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_7] [i_8])), (arr_31 [i_7] [i_8 + 1] [i_9])))), (((((/* implicit */int) arr_16 [i_7] [i_9])) & (((/* implicit */int) (_Bool)1))))));
                    arr_34 [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8 - 1]))) & (max((((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_8])), (arr_28 [i_7] [i_8])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (max(((-(arr_21 [i_7] [i_9]))), (((/* implicit */unsigned long long int) var_3))))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned long long int) arr_1 [i_7] [i_7]);
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
        {
            var_23 = ((/* implicit */long long int) arr_14 [i_10] [i_10] [i_7]);
            var_24 = ((/* implicit */long long int) max((562949945032704ULL), (((/* implicit */unsigned long long int) (unsigned short)54687))));
        }
        var_25 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) 826015339U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 826015339U)) <= (562949945032704ULL)))) : (((/* implicit */int) ((short) (short)8551)))))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            arr_40 [i_11] = ((/* implicit */long long int) ((unsigned char) var_8));
            arr_41 [i_7] &= ((/* implicit */unsigned int) (short)18844);
        }
        for (short i_12 = 1; i_12 < 9; i_12 += 2) 
        {
            arr_44 [i_12] [i_7] |= ((/* implicit */unsigned int) arr_28 [i_7] [i_7]);
            arr_45 [i_7] [i_7] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) 3468951971U)) ? (((/* implicit */int) arr_22 [i_12 - 1])) : (((/* implicit */int) (short)-23377))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~((~(arr_29 [i_12] [i_12])))))) + ((~(arr_11 [i_7] [i_7])))));
        }
    }
}
