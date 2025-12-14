/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147108
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
    var_17 -= ((/* implicit */unsigned int) (unsigned short)42706);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 2]);
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22809)) ? (((/* implicit */int) (unsigned short)22809)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (6766516593199798602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1] [i_1]))))) && (((/* implicit */_Bool) arr_6 [i_1]))));
        var_22 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)6]))) : ((~(4107747704U))))))));
        var_23 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (-(arr_4 [i_1])))) ? (((/* implicit */int) ((arr_4 [(_Bool)1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1])))))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 3329252992U)) ? (var_1) : (arr_14 [i_2] [i_3] [i_4] [i_4]))))) || (min((arr_16 [i_3] [i_3] [i_2] [i_3]), (arr_16 [i_3] [i_4] [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) var_10);
                                var_26 -= ((/* implicit */_Bool) ((arr_16 [i_4] [i_4] [i_4] [i_6]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2]))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), ((~(arr_20 [i_4])))))));
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((_Bool) 9790043574150446985ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((((((/* implicit */int) (unsigned short)22830)) / (((/* implicit */int) (signed char)-6)))) ^ (((((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (((/* implicit */int) (unsigned char)211)))));
        var_29 = ((/* implicit */unsigned short) arr_14 [i_2] [i_2] [i_2] [i_2]);
    }
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) (-((-(var_13)))));
        var_31 = ((/* implicit */long long int) ((arr_7 [i_7 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22814)))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (short i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_10 + 1])), (((((/* implicit */_Bool) arr_18 [i_7 + 1] [i_7] [i_8] [i_8] [i_7 + 1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) : (2720348603494192508ULL))))))));
                        var_33 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_31 [i_7 - 1] [i_8] [i_9 - 1] [i_10]))), (((unsigned long long int) arr_19 [i_7 - 1] [i_10 + 1] [i_10] [i_10 + 1] [i_7]))));
                        var_34 = ((/* implicit */long long int) var_2);
                        var_35 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_27 [i_7 + 1])) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10]))) % (arr_30 [i_7] [i_7] [i_8] [i_7]))))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */long long int) arr_29 [i_7]);
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [(unsigned short)7])))))))));
                        var_38 -= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_7))) << (((((((/* implicit */int) (unsigned short)22829)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12] [i_13] [i_13] [i_13 - 2] [i_12]))) : (-5451036827613946278LL)))));
                    }
                } 
            } 
        } 
    }
    var_39 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (((((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (min((var_0), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2720348603494192501ULL) != (((/* implicit */unsigned long long int) var_6))))))))));
    var_40 = ((/* implicit */unsigned int) var_2);
}
