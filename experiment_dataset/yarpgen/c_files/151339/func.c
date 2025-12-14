/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151339
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (unsigned char)173))));
    var_18 = ((/* implicit */signed char) max((((((_Bool) var_11)) ? (((var_6) + (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_4))))));
    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+((+(min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 |= ((/* implicit */unsigned long long int) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 549755289600ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_7))))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            arr_12 [(signed char)20] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_3] [i_3]))));
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_3]))));
        }
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            arr_16 [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_15 [i_1] [i_4] [i_1]) : (arr_15 [i_1] [18ULL] [i_4])));
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) / (((/* implicit */int) var_0)))) & (var_6)));
            var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) var_15))))));
        }
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_26 = ((/* implicit */short) arr_6 [i_1] [i_5] [(_Bool)1]);
            arr_20 [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_14 [i_5] [13U])) & (((/* implicit */int) var_7))))));
            var_27 = ((/* implicit */int) min((var_27), ((~(((/* implicit */int) arr_4 [i_5]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_23 [i_1] [i_1]))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_1] [(_Bool)0] [i_1])) | (((/* implicit */int) arr_22 [i_1]))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
        {
            var_30 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [9U] [9U])));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [(unsigned short)18] [i_1] [i_1]));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_8] [i_7] [i_1])) || (((/* implicit */_Bool) -2397075843776524490LL))));
            }
            var_32 = ((/* implicit */signed char) var_0);
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_33 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) arr_28 [i_1] [(unsigned char)1] [14ULL])) : (((int) arr_18 [i_7] [10ULL] [i_7]))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) == (((/* implicit */int) (signed char)-67))));
                        var_35 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_15)))))) / (((549755812864ULL) - (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_10]))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (0U)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
        {
            var_37 |= ((/* implicit */short) ((arr_32 [i_1] [4LL] [i_1] [i_1]) & (arr_32 [i_1] [i_11] [i_1] [i_1])));
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            arr_46 [i_1] [i_11] [i_12] [i_12] [(unsigned short)20] [20U] [(signed char)5] = ((/* implicit */signed char) var_11);
                            var_38 = ((/* implicit */unsigned long long int) arr_28 [20U] [(unsigned char)2] [(unsigned char)2]);
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) var_9))));
                            arr_47 [i_1] [i_1] [i_11] [i_1] [(_Bool)1] [(_Bool)1] [i_14] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_4 [8U]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-120)))))));
                            var_40 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)17]))) : (17ULL)));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                {
                    arr_53 [i_1] [i_16] [i_15] [i_1] |= ((/* implicit */signed char) ((((_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_1] [i_16]))) : ((-(var_8)))));
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */int) arr_17 [i_15])) : (((/* implicit */int) var_1))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */signed char) var_12);
}
