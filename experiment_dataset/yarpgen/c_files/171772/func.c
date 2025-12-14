/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171772
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */int) (unsigned short)29729);
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]));
        var_13 = ((/* implicit */int) ((arr_1 [i_0]) > (arr_1 [i_0])));
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)35801)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) var_7))));
    }
    for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((arr_6 [i_1] [i_1]) ? (((/* implicit */int) (unsigned short)29736)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)29729)) >= (var_0)))))) ^ (((/* implicit */int) ((_Bool) arr_6 [i_1 + 2] [(_Bool)1])))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)29729)) * (((/* implicit */int) (unsigned short)35807))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((unsigned int) ((short) arr_4 [i_2] [i_1 + 1])));
                                var_17 = ((/* implicit */signed char) var_2);
                                var_18 = (unsigned short)0;
                                var_19 = arr_16 [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 3];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) var_10);
        var_22 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) || (arr_11 [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 3]))) || (((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1 - 1]))));
    }
    for (short i_6 = 4; i_6 < 16; i_6 += 2) 
    {
        var_23 = ((/* implicit */short) (unsigned short)65535);
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))));
        arr_20 [i_6] [i_6] = ((short) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_18 [i_6 - 3] [i_6 + 1])) : (((/* implicit */int) arr_18 [i_6 - 3] [i_6 - 1]))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (signed char i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_6] [i_6] [i_7] [i_6])) + (((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_18 [i_6] [i_7])), (var_0))))))))));
                        arr_28 [i_9] [i_7] [i_7] [i_9 + 3] = ((/* implicit */int) arr_24 [(signed char)0] [i_8] [i_8] [i_6]);
                        arr_29 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_9 + 3] [i_9 + 3] [13] [i_9])) - (((/* implicit */int) ((unsigned char) arr_23 [i_9 + 3] [(signed char)7] [i_8] [i_7])))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        var_26 = ((/* implicit */short) var_6);
        var_27 = arr_9 [i_10] [i_10];
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_28 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((-5453288441143718373LL) - (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11])))))) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 13199745464385772283ULL)))) : (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65517), (((/* implicit */unsigned short) var_8)))))) * (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11]))) : (arr_33 [12ULL])))))));
        var_29 |= ((/* implicit */short) (((((((_Bool)0) || (((/* implicit */_Bool) -5453288441143718374LL)))) ? (((arr_32 [i_11]) ? (((/* implicit */unsigned long long int) 4089073130U)) : (9843846832359177505ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_11])))))));
    }
    for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
    {
        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (short)32755))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_12]))))));
        var_31 = arr_32 [i_12];
    }
    for (short i_13 = 0; i_13 < 24; i_13 += 2) 
    {
        var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (signed char)21)) / (-198395460))));
        arr_40 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_39 [i_13]), (arr_39 [i_13])))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_13])) ? (arr_39 [i_13]) : (arr_39 [i_13]))))));
        arr_41 [i_13] = ((/* implicit */short) arr_38 [i_13]);
    }
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_4))));
}
