/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173884
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
    var_11 += ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    var_12 = ((/* implicit */short) ((signed char) (unsigned short)65535));
                    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)2931)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 595431786709041661ULL)))) : (659265433U)));
                    var_14 = ((/* implicit */short) max((595431786709041661ULL), (((/* implicit */unsigned long long int) (~(var_4))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_3] [i_0] [i_0] [i_3] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))) | (8036326937962966464LL))) ^ (((/* implicit */long long int) 698269618U))));
                        var_15 = ((/* implicit */unsigned long long int) ((signed char) (short)384));
                        var_16 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-18011))))));
                        var_17 += ((/* implicit */short) arr_4 [i_3]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)-26150)) ? (3694166928714907534ULL) : (17851312287000509956ULL))))));
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)47720);
                        }
                        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (short)15497)) : (((/* implicit */int) (unsigned short)47700))));
                            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)17824))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_5]))));
                            var_23 = ((/* implicit */unsigned long long int) -5597847481331439635LL);
                            var_24 &= ((/* implicit */unsigned long long int) arr_4 [i_3]);
                        }
                        var_25 = ((/* implicit */short) max((var_25), (arr_6 [i_3] [i_0] [i_1])));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11050)) ? (-4345713301108342139LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17836)))));
                    }
                    var_28 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26150))) : (16275916802410633234ULL)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            {
                arr_25 [i_8] = ((/* implicit */short) (_Bool)1);
                arr_26 [(_Bool)1] [i_8 + 2] [i_9] = ((/* implicit */short) ((3635701840U) >> (((8963505759175423024LL) - (8963505759175423009LL)))));
                var_29 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) : (13655658635967121755ULL));
                arr_27 [i_8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1901188303U)) ? (13386438612760340621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47719)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26150))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) - (16275916802410633234ULL)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((659265460U) >> (((2333652254329599670LL) - (2333652254329599644LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47710))) : (((595431786709041678ULL) >> (((((/* implicit */int) (short)-21632)) + (21649))))))), (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-17503))))))));
}
