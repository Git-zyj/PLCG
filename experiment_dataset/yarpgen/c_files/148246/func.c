/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148246
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
    var_11 = min((max((((/* implicit */unsigned int) (_Bool)1)), (4294967272U))), (((/* implicit */unsigned int) (((-(var_2))) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(var_5)));
        var_12 = ((/* implicit */_Bool) max((var_12), (arr_2 [(_Bool)1])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [(unsigned short)10] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
            var_13 &= ((/* implicit */short) ((arr_2 [i_1]) ? (5716847674611851630LL) : (((((/* implicit */_Bool) -5404027309371886196LL)) ? (-5716847674611851630LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5090)))))));
        }
        var_14 = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) var_7);
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)17486))))));
                    var_15 = ((/* implicit */unsigned int) arr_10 [i_2] [10LL] [i_4]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) arr_18 [i_5]);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_8] [i_7] = ((/* implicit */unsigned int) var_6);
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_9] [i_8] [i_7] [(signed char)1] [i_5]))))) : (arr_15 [i_6])));
                            var_17 = ((/* implicit */short) (_Bool)1);
                            var_18 ^= ((/* implicit */_Bool) var_0);
                        }
                        arr_29 [i_7] [(unsigned char)6] [(unsigned char)6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)137)) % (((/* implicit */int) (signed char)10))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_8] [i_8]))) < (4611668426241343488ULL)))))))));
                        var_20 = arr_17 [i_5];
                    }
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        var_21 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) : (var_5)))));
                        var_22 = ((/* implicit */unsigned short) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_7] [i_6])))));
                    }
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -2740963996539901707LL))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                for (unsigned char i_13 = 1; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((var_1) / (((((/* implicit */_Bool) arr_36 [i_12] [i_5] [i_5])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14929))))))))));
                        arr_41 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) var_7);
                        arr_42 [i_5] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 524256U)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)14)))))));
                        var_25 = (!(((/* implicit */_Bool) arr_24 [i_5] [i_5] [(unsigned char)17] [i_12] [i_12] [i_13 - 1] [i_13])));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) 969207122240080597ULL);
    var_27 = ((/* implicit */unsigned short) var_4);
}
