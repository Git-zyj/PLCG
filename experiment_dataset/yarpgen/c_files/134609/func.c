/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134609
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
    var_10 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) 12400599292525935413ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 2097151)) ? (var_3) : (var_3)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_11 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) arr_3 [i_1]);
        var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) 1428687768002046077LL)) + (max((6046144781183616202ULL), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) arr_6 [i_2]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)1))));
            arr_12 [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */int) min((arr_9 [i_2] [i_4]), (((/* implicit */unsigned long long int) max((arr_4 [i_2]), (arr_4 [i_4]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
            {
                for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (var_6)));
                        var_18 = ((/* implicit */int) 840733536U);
                        var_19 = (_Bool)0;
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 4; i_8 < 6; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_33 [i_2] [i_2] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (3873731762302180839ULL))), (((/* implicit */unsigned long long int) (+(0LL))))))) ? (min((arr_20 [i_8 + 2] [i_8] [i_8 + 4] [i_8]), (((/* implicit */unsigned long long int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))))) : (((((/* implicit */_Bool) (signed char)55)) ? (6046144781183616202ULL) : (min((((/* implicit */unsigned long long int) (unsigned char)14)), (arr_13 [i_7] [i_8] [i_10])))))));
                            arr_34 [i_8] [i_8] = ((/* implicit */_Bool) 109455515);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (int i_12 = 1; i_12 < 7; i_12 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (+(arr_37 [i_11])));
                        var_21 = ((/* implicit */int) ((arr_40 [i_12] [i_2] [i_11] [i_12] [i_11] [i_7]) << (((min((((/* implicit */unsigned long long int) arr_26 [i_7] [i_12 - 1] [i_12] [i_12])), ((+(6046144781183616205ULL))))) - (113757224ULL)))));
                    }
                } 
            } 
            arr_41 [i_2] [i_7] = ((/* implicit */int) arr_40 [i_7] [i_7] [i_7] [i_2] [i_2] [i_2]);
            arr_42 [i_2] = ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)135)), ((short)32767)));
        }
    }
}
