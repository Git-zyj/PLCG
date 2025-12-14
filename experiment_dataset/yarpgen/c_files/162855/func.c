/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162855
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 += ((/* implicit */signed char) (~(arr_0 [i_0] [i_0])));
        var_13 = ((/* implicit */signed char) 745506110);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_3] [i_3] [i_0] = ((((/* implicit */_Bool) 745506110)) && ((((_Bool)1) && ((_Bool)1))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_11))));
                        arr_12 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                } 
            } 
            var_15 = ((/* implicit */int) min((var_15), ((~((~(((/* implicit */int) (short)-4096))))))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_16 += ((/* implicit */unsigned short) arr_9 [i_4] [i_1] [i_1] [i_0]);
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) var_7)) & (var_2))))));
            }
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25556))) + (288160007407534080ULL))))));
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (arr_19 [i_0] [i_5]) : (arr_19 [i_5] [i_0])));
            arr_20 [i_0] = ((/* implicit */short) (-(arr_0 [i_0] [i_0])));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)112))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25550))) : (67092480U)));
                var_21 = ((/* implicit */int) min((var_21), (((((((/* implicit */_Bool) -405091147)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_5] [i_6])))) % ((+(1195193510)))))));
            }
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 1; i_8 < 24; i_8 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((var_0) % (((((/* implicit */_Bool) 4227874799U)) ? (((/* implicit */int) (short)9987)) : (((/* implicit */int) (unsigned short)9551))))));
                    arr_29 [i_0] [i_5] [i_5] |= ((/* implicit */unsigned short) var_4);
                    var_23 = ((/* implicit */signed char) ((unsigned char) ((0ULL) | (15930561914985589938ULL))));
                }
                for (long long int i_9 = 1; i_9 < 23; i_9 += 4) 
                {
                    arr_32 [i_0] [i_5] [(signed char)2] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25557)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9988))) : (-5593771858133876606LL)));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)81))));
                        arr_36 [i_0] [i_0] [i_7] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)105)) << (((((/* implicit */int) (short)25557)) - (25551)))));
                    }
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_25 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) * (261888U)));
                    arr_40 [(short)4] [(short)4] [i_5] [(short)4] &= ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (4227874814U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32747)))));
                    arr_41 [i_0] [i_0] [i_7] [i_7] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_5] [i_7] [i_5]);
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)256))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) arr_13 [i_0] [8] [i_7] [i_11])) : (((2954841619U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109)))))));
                    arr_42 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5593771858133876606LL)) ? (arr_25 [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) && (((/* implicit */_Bool) var_9))));
                }
                /* LoopSeq 2 */
                for (int i_12 = 3; i_12 < 22; i_12 += 4) 
                {
                    arr_46 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [0LL] [i_5] [i_0]))))));
                    var_27 ^= ((/* implicit */short) (~(((/* implicit */int) arr_28 [i_12 + 1]))));
                    var_28 -= ((((/* implicit */_Bool) arr_23 [i_12 + 3] [i_12 - 2] [i_12 + 1])) ? (((/* implicit */int) arr_23 [i_12 - 1] [i_12 + 2] [i_12 - 2])) : (((/* implicit */int) arr_23 [i_12 + 3] [i_12 - 1] [i_12 + 3])));
                    arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_7] [i_12 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_7] [i_12 + 3]))) : (-5593771858133876606LL)));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    arr_50 [i_7] [i_5] [4ULL] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_29 += ((/* implicit */short) var_0);
                }
            }
            var_30 = ((/* implicit */unsigned char) var_0);
            arr_51 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0]));
        }
    }
    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
    {
        arr_55 [i_14] = ((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)));
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) -5593771858133876606LL)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)22673)) % ((+(-8209))))))));
        var_32 = (!(((arr_0 [i_14] [i_14]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9988))))));
        var_33 = ((/* implicit */unsigned long long int) (unsigned char)0);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(((/* implicit */int) arr_38 [i_15] [i_15])))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (-((-(arr_35 [i_15] [i_15] [i_15] [(_Bool)1] [i_15]))))))));
    }
    var_36 = ((/* implicit */unsigned long long int) var_0);
    var_37 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (short)-26559)) ? (1332180897U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
}
