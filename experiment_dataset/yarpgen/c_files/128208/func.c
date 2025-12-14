/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128208
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) & (((/* implicit */int) min((min((((/* implicit */short) (signed char)0)), ((short)-3))), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))) <= (var_12)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [2ULL] = ((/* implicit */signed char) ((min((((((/* implicit */int) (unsigned short)17)) / (((/* implicit */int) arr_1 [i_0 + 4] [(signed char)3])))), (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))) > (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-9)) ? (1336386879) : (((/* implicit */int) (unsigned short)17))))))));
        var_20 = ((/* implicit */_Bool) var_0);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (unsigned char)48)), (6964951078465787210ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13)) < (((/* implicit */int) min(((unsigned short)5), (((/* implicit */unsigned short) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) arr_0 [i_0 - 4]);
                                var_23 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_2 + 1] [(_Bool)1] [(signed char)7])), (min(((((_Bool)1) ? (2881776652814802933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))), (((/* implicit */unsigned long long int) var_14))))));
                            }
                        } 
                    } 
                    var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 5ULL))))), (arr_6 [i_0 + 2] [i_0 + 2] [i_2 + 1] [9U]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_19 [i_5] = ((/* implicit */short) max((max((9U), (((/* implicit */unsigned int) arr_3 [1LL] [i_5 + 1] [i_5 + 1])))), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_7))))), (arr_6 [i_5] [i_5 + 1] [i_5] [14LL]))))));
            var_25 += (-(((/* implicit */int) (unsigned short)1)));
            var_26 += ((/* implicit */unsigned char) arr_15 [i_6]);
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_27 = min((max((((/* implicit */int) min((var_7), (((/* implicit */short) arr_8 [i_5 + 1] [i_7] [i_5 + 1] [i_5 + 1]))))), (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) var_11)))))), (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) ((unsigned char) (signed char)-66))) - (175))))));
            arr_23 [i_5] = ((/* implicit */unsigned char) min((((max((6193464967535644188ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (var_11)));
        }
        for (short i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            var_28 = ((/* implicit */_Bool) ((unsigned short) max((var_9), (((/* implicit */int) arr_15 [i_5])))));
            var_29 += ((/* implicit */long long int) max((arr_8 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3])) > (((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5])))))));
            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)208))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(_Bool)1])))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_31 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13692)))));
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 11; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    {
                        var_32 -= ((/* implicit */_Bool) (unsigned short)255);
                        var_33 += ((/* implicit */unsigned short) 545460846592LL);
                    }
                } 
            } 
            var_34 = ((/* implicit */short) (-(12647935155634965131ULL)));
            var_35 -= ((/* implicit */short) min(((~(((/* implicit */int) arr_6 [(_Bool)1] [i_5 + 1] [i_5 + 2] [i_5 + 3])))), ((-(((/* implicit */int) (_Bool)0))))));
        }
        var_36 = ((/* implicit */unsigned short) arr_21 [i_5 - 1] [i_5 + 2] [i_5 + 3]);
        var_37 = ((/* implicit */unsigned long long int) var_7);
        arr_33 [i_5] [i_5 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)114)), ((unsigned short)0))))));
        var_38 = ((/* implicit */int) (unsigned short)8991);
    }
}
