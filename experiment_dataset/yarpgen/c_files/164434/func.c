/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164434
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
    var_12 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) >> (((min((437054036), (((/* implicit */int) (short)-1)))) + (7)))))), (((((/* implicit */_Bool) 9598852306543096388ULL)) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_2 + 1])) ? (arr_4 [13ULL] [i_0 + 1] [i_2 - 4]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_2 - 1])))), (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (16107950745570942578ULL))))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0 + 1])) + (2147483647))) << (min((min((0ULL), (((/* implicit */unsigned long long int) (short)0)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_3 [i_2]))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1])))))));
            var_16 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0])), ((short)6548))))) / (arr_3 [i_0])))));
        }
        arr_10 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)127)), (-1316193965)))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_4])) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_5])) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_6 + 2])) && ((_Bool)1)))) > (((/* implicit */int) arr_9 [i_5] [i_6])))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 *= ((/* implicit */_Bool) (+((~(((((/* implicit */_Bool) 368580943)) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_7])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_6] [i_7] [i_7]))))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_11 [i_0] [i_4]))));
                            var_20 *= (_Bool)1;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((/* implicit */unsigned short) min((arr_11 [i_8] [i_8]), (arr_11 [i_8] [i_8])))), (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        arr_26 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [3U] [i_8] [i_8])) <= (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (_Bool)1)))))));
        var_22 += ((/* implicit */signed char) 18446708889337462784ULL);
        arr_27 [i_8] = ((/* implicit */unsigned long long int) 3806359112782615229LL);
    }
    for (signed char i_9 = 2; i_9 < 19; i_9 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (arr_30 [i_9 + 2])));
        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_30 [i_9 + 2]), (arr_30 [i_9 - 1])))) ? (((/* implicit */int) arr_30 [i_9 - 2])) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_9 + 2])) != (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (unsigned short)0))));
                    var_26 ^= ((/* implicit */unsigned short) arr_32 [i_9 - 1] [i_9 - 1]);
                }
            } 
        } 
    }
    for (int i_12 = 0; i_12 < 13; i_12 += 1) 
    {
        var_27 = ((/* implicit */int) arr_39 [i_12]);
        var_28 = ((/* implicit */unsigned long long int) min((arr_19 [i_12] [i_12] [i_12] [i_12] [i_12] [5ULL]), (arr_19 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])));
    }
    var_29 = ((/* implicit */_Bool) var_2);
}
