/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156141
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
    var_16 = ((/* implicit */int) var_7);
    var_17 += ((/* implicit */signed char) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1202)) + (((/* implicit */int) arr_3 [(short)6]))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)1202)) ^ (((/* implicit */int) (signed char)-30)))))) : (((/* implicit */int) arr_3 [0]))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_19 -= ((/* implicit */unsigned long long int) min((min((arr_5 [i_1]), (arr_5 [i_1]))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_0 [i_1] [i_1])))), ((-(((/* implicit */int) arr_0 [i_1] [i_1])))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) (unsigned short)64350);
    }
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))), (((/* implicit */int) arr_10 [i_2]))));
        var_20 = ((/* implicit */long long int) max((min((max(((unsigned short)64371), (var_14))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1202)) && (((/* implicit */_Bool) -928187917))))))), (((/* implicit */unsigned short) ((signed char) ((_Bool) var_9))))));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_21 -= ((/* implicit */unsigned char) (unsigned short)42648);
            var_22 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (signed char)(-127 - 1)))))));
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) arr_18 [i_3] [i_5] [i_5]);
            var_24 *= ((/* implicit */unsigned long long int) -1694224261);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) (_Bool)1);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_3])) ? (((/* implicit */int) (unsigned short)64351)) : (((/* implicit */int) arr_21 [i_3] [i_6]))));
            arr_23 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_3] [i_3] [i_6]))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(7470632944611907882LL))), (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_12))))))))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(min(((~(((/* implicit */int) arr_19 [i_3] [i_7])))), (((/* implicit */int) max(((unsigned short)1215), (arr_17 [i_3] [i_3] [i_3])))))))))));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_24 [i_3] [i_8])))) ? (((/* implicit */int) min((arr_24 [i_3] [i_8]), (arr_24 [i_8] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_3] [i_8])) > (((/* implicit */int) (_Bool)1)))))));
            var_30 ^= ((/* implicit */int) (_Bool)1);
            var_31 = ((/* implicit */int) max((var_31), (((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)100)))) || (((/* implicit */_Bool) max(((unsigned short)1231), (((/* implicit */unsigned short) var_7))))))) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) min((arr_17 [i_3] [i_8] [i_8]), ((unsigned short)1204))))))));
        }
    }
    for (short i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)1215), (((/* implicit */unsigned short) var_5)))))) : (min((arr_27 [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */int) (unsigned short)64341)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (arr_16 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_11))))) : (((/* implicit */int) var_15))))));
        var_33 += ((/* implicit */unsigned short) 1092908536);
        arr_31 [i_9] = ((/* implicit */int) arr_17 [i_9] [i_9] [i_9]);
        var_34 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)1202)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1773755260)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6)))))) : (max((((/* implicit */int) arr_25 [i_9])), (((((/* implicit */int) arr_24 [i_9] [i_9])) * (((/* implicit */int) (unsigned short)64334))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((var_13) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) (unsigned short)64332)))) / (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)13152)) : (((/* implicit */int) (signed char)-6)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_20 [i_10] [i_10])))))))))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (short i_13 = 1; i_13 < 18; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_44 [i_10] [i_12] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_36 [i_10] [i_11] [i_12]);
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64351))) / (1829646390047722848ULL))))))));
                        }
                        var_37 ^= ((/* implicit */unsigned char) ((var_0) >= (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_13 + 1])))))));
                    }
                } 
            } 
        } 
    }
}
