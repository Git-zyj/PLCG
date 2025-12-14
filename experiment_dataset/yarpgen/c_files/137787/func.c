/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137787
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
    var_17 = ((/* implicit */int) max((var_14), (max((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned long long int) -8760566296632185823LL)))), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((var_12), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [11ULL] = ((/* implicit */_Bool) min((max((2063420908688913487LL), (((/* implicit */long long int) ((signed char) 8760566296632185822LL))))), (((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) arr_2 [i_2] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (max((var_2), (8760566296632185822LL)))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */long long int) min((arr_7 [i_1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) : (((((/* implicit */long long int) 484225567U)) / (9093862616143775690LL)))));
                    arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max((((long long int) (~(var_9)))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_5 [i_1 - 2])))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) (~(var_12)));
        var_20 = ((/* implicit */_Bool) ((unsigned int) 7778402307208770309ULL));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) 7338066292920515418ULL)) ? (((arr_11 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (var_13));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    }
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
            {
                for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_23 |= (!(((/* implicit */_Bool) ((unsigned int) 5951473659190006884ULL))));
                        var_24 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_16)), (max((var_13), (var_11)))))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) != (((unsigned long long int) var_13))))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_16))))), (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4]))) ^ (var_13)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            arr_27 [8LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22773))) : (8878731243719220886ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) -9160659572669409580LL)))))) : (arr_17 [i_8])));
            var_27 = ((/* implicit */unsigned long long int) arr_23 [i_4]);
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
            {
                var_28 = ((/* implicit */long long int) ((arr_31 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11))))));
                arr_32 [i_4] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_9 - 1])) ? (var_13) : (arr_18 [i_9 - 1] [i_9 + 1] [i_9])));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((arr_22 [i_4]) - (((/* implicit */int) var_5)))))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_36 [i_10] = ((/* implicit */int) ((((/* implicit */int) arr_29 [i_8] [i_8] [i_9])) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_4])) : (((/* implicit */int) arr_25 [i_4] [i_8] [i_8]))))));
                    var_30 += ((/* implicit */unsigned long long int) (+(var_2)));
                    var_31 = ((/* implicit */long long int) var_7);
                    var_32 = (((~(3713600664473073238ULL))) - (((/* implicit */unsigned long long int) arr_33 [i_9 + 1] [i_9] [i_9 + 3] [i_9 + 2])));
                    var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_9 - 1] [11ULL] [i_9 + 3]))));
                }
                for (long long int i_11 = 4; i_11 < 20; i_11 += 1) 
                {
                    var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) arr_35 [i_4] [i_8] [i_9 - 2] [i_11 + 1])) ? (arr_35 [i_8] [i_8] [i_9 - 1] [i_11 + 2]) : (arr_35 [i_4] [i_4] [i_9 + 1] [i_11 - 3])))));
                    var_35 = ((/* implicit */long long int) var_6);
                }
                for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    arr_43 [i_4] [i_8] [i_8] [i_4] [i_12] [i_12] = (-(var_11));
                    var_36 = ((((/* implicit */int) arr_29 [i_9] [i_9 + 1] [i_9])) <= (((/* implicit */int) arr_29 [i_8] [i_9 - 1] [i_9])));
                    arr_44 [i_4] [i_8] [i_9] [i_12] [i_4] = ((/* implicit */unsigned char) (~((~(var_2)))));
                    var_37 += ((/* implicit */unsigned char) (+(arr_31 [6ULL] [i_9 + 2] [i_9 + 3] [i_9 - 2])));
                }
                arr_45 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_4]))));
            }
        }
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (~(max((min((var_1), (((/* implicit */long long int) arr_37 [21ULL] [i_4] [i_4])))), (((/* implicit */long long int) var_6)))))))));
    }
    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        arr_49 [i_13] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_26 [i_13]), (3033690064161327173LL))))))), ((~(((/* implicit */int) var_8))))));
        arr_50 [i_13] [i_13] = ((/* implicit */signed char) ((_Bool) max((arr_46 [i_13]), (arr_46 [i_13]))));
        var_39 += ((/* implicit */signed char) var_2);
    }
    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_16))))), (max((((/* implicit */long long int) (signed char)-112)), (var_2))))))));
}
