/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13134
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
    var_16 = ((/* implicit */int) var_15);
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (((+(3505093576U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (var_15)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 0U)) ? (4294967283U) : (arr_1 [9]))));
        var_18 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_1)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2] [i_3] = (~(arr_5 [i_2 - 1]));
                    arr_12 [i_2] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) arr_3 [i_1] [i_3])));
                    var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) arr_8 [i_2 - 2]))))));
                    var_20 = (+((~(-330229537))));
                }
            } 
        } 
        arr_13 [i_1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-43));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_17 [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967294U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((12150460337999521134ULL) | (10184551157881590489ULL))) : (((/* implicit */unsigned long long int) var_0))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_25 [(short)11] [(short)11] [(short)11] [i_6] [i_6] = ((/* implicit */_Bool) ((6182864397070617019LL) / (((/* implicit */long long int) 4294967289U))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 3] [i_7 + 3] [(_Bool)1] [i_7])) * (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_23 = ((/* implicit */int) arr_7 [i_1]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (short i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    {
                        arr_33 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [(unsigned char)6] [i_10 + 1] [i_10 - 1] [i_10 + 1])) | (((/* implicit */int) arr_28 [i_9] [i_10 - 1] [i_10 - 2] [i_10 + 1]))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned short) 8262192915827961126ULL)))));
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15872)) < (((/* implicit */int) (unsigned short)53717))));
                            var_26 -= ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_38 [i_1] [(_Bool)1] [i_9] [i_10] [i_10] [18] [6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_10] [(unsigned short)1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1]))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_9]))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 1) 
                        {
                            arr_41 [i_1] [i_1] [3] [i_13] = ((((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) > ((~(((/* implicit */int) arr_10 [i_10] [i_10] [i_9] [i_9])))));
                            var_28 = ((/* implicit */unsigned short) ((_Bool) (+(18204541466569480148ULL))));
                        }
                    }
                } 
            } 
        }
        arr_42 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_1] [(_Bool)1] [i_1]))));
    }
}
