/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123365
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) ((unsigned int) var_10));
        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1199691821)))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_1 [(signed char)0] [(signed char)0]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1])), (2099878575))))))));
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2099878575)), (max((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2])))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59362))))) & ((-(arr_7 [i_2 + 1])))))));
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            arr_12 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)26187)) << (((/* implicit */int) (_Bool)1))))), (var_0))));
            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) -2099878571)), ((+(arr_10 [i_2] [0LL]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -2099878578)) ? (-610779879) : (16383))))))));
            var_23 += (+(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_5 [i_2 + 1])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_17))))))))));
            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) << (((/* implicit */int) arr_11 [i_2] [i_4]))));
            arr_17 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59362))) % (var_6)))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                arr_20 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(512286250U)))) + (((((/* implicit */_Bool) 6046236369001469134LL)) ? (3395377670193838946ULL) : (12753573417096272456ULL)))));
                var_26 = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_11 [i_2] [i_5]))));
                    arr_23 [i_5] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59362))) / (var_17)))));
                    var_28 = var_5;
                    var_29 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                }
                for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_26 [i_2] [i_5] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_4] [i_4])) ? (2221939553256089587ULL) : (((/* implicit */unsigned long long int) arr_21 [i_5] [i_2 + 1] [i_5] [i_7]))));
                    var_30 = (-(((/* implicit */int) (_Bool)1)));
                }
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_24 [i_2] [i_4] [i_5]))));
            }
            for (signed char i_8 = 2; i_8 < 16; i_8 += 1) 
            {
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_8 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)78))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-89)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_10 = 2; i_10 < 15; i_10 += 2) 
                {
                    arr_33 [i_9] [2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4219674402U)) ? (((/* implicit */int) arr_27 [i_2] [i_2 + 1] [i_10 - 1] [i_9])) : (((/* implicit */int) arr_27 [i_2] [i_2 + 1] [i_10 + 1] [i_9]))));
                    /* LoopSeq 3 */
                    for (int i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2 + 1] [i_10 - 1] [i_11]))) / (-1LL)));
                        arr_36 [i_2] [i_4] [i_9] [i_9] [i_11] = ((/* implicit */int) arr_10 [i_2] [i_9]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        arr_40 [i_2] [(_Bool)1] [i_9] [i_10] [i_12] [i_2] [i_4] = ((/* implicit */_Bool) arr_22 [i_2] [i_9] [i_10] [i_12]);
                        var_35 = arr_15 [i_2] [i_4];
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_36 += ((/* implicit */unsigned long long int) var_17);
                        var_37 *= ((/* implicit */short) (unsigned short)44175);
                    }
                    arr_43 [i_9] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_25 [i_2] [i_4] [14U] [i_10])) ? (((/* implicit */int) arr_37 [i_2 + 1] [i_10 + 3])) : (((/* implicit */int) (_Bool)1))))));
                    var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (var_8)))) ? (((/* implicit */int) arr_18 [i_2] [i_4] [i_9])) : ((-(((/* implicit */int) (signed char)14)))))))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_46 [i_9] [i_4] [i_9] [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_30 [i_2 + 1] [i_9] [i_2 + 1]);
                    arr_47 [i_2 + 1] [i_4] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_28 [i_2 + 1] [i_9] [i_9] [i_14])))));
                    var_39 = ((/* implicit */unsigned int) arr_5 [i_2]);
                    arr_48 [i_14] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((13138415480260227197ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) != ((-(arr_35 [i_2] [i_4] [i_9] [i_14])))));
                }
                var_40 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 4219674402U)) : (2221939553256089582ULL))) - (var_14)));
            }
            for (long long int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_2] [i_15] [i_15])) ? (((/* implicit */int) ((signed char) var_17))) : (262143))))));
                arr_52 [i_4] &= ((/* implicit */unsigned short) arr_34 [i_2] [i_2] [i_2 + 1] [i_4] [i_4] [i_15] [i_15]);
                arr_53 [i_15] [i_4] [i_15] = ((/* implicit */long long int) ((int) -697088557));
            }
        }
    }
    for (signed char i_16 = 1; i_16 < 19; i_16 += 1) 
    {
        var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1))))))));
        var_43 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_5 [i_16 - 1]), (arr_5 [i_16 - 1])))) > (((/* implicit */int) ((short) arr_5 [i_16 - 1])))));
    }
    var_44 = ((/* implicit */_Bool) var_17);
}
