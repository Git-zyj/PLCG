/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140967
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((short) arr_2 [i_0] [i_1])), (((short) arr_3 [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_0] = ((signed char) arr_6 [i_0] [i_2] [i_2 - 2]);
                            var_15 = ((/* implicit */short) (signed char)72);
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-83)) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) (signed char)83))));
                var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(short)0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            {
                arr_17 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
                    {
                        {
                            var_18 = arr_14 [i_6];
                            arr_22 [i_4] [i_5] [i_6] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_6] [i_7] [i_7 - 2] [i_6] [(signed char)3] [i_6]))))) ? (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (short)23164)))) : (((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) min((arr_9 [i_6] [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7]), (arr_6 [i_4] [i_5] [(short)0]))))))));
                            var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_0 [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_0 [i_7 - 3] [i_7 - 3]))))));
                            arr_23 [i_6] [i_6] [i_7 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_7 - 2] [i_7 - 3]), (arr_2 [(short)5] [i_7 - 1])))) ? (((/* implicit */int) arr_2 [i_5] [i_7 - 1])) : (((((/* implicit */_Bool) arr_2 [i_6] [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_2 [(signed char)13] [i_7 + 1]))))));
                            /* LoopSeq 2 */
                            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                            {
                                arr_26 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_25 [i_8] [i_6] [i_6] [i_6] [i_4])) ? (((/* implicit */int) arr_18 [i_4] [i_4])) : (((/* implicit */int) (signed char)-80))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [(short)1])) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-34))))) ? (((/* implicit */int) arr_24 [i_4] [i_7] [i_7] [i_7 - 2] [(short)9])) : (((((/* implicit */_Bool) (short)2832)) ? (((/* implicit */int) arr_0 [i_4] [i_5])) : (((/* implicit */int) arr_20 [i_4] [i_5])))))) : ((((!(((/* implicit */_Bool) arr_2 [i_4] [i_7])))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (short)-32764)))) : (((/* implicit */int) arr_4 [i_6]))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_9 [i_6] [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((/* implicit */int) arr_24 [(signed char)9] [(signed char)9] [i_6] [i_7] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_6] [i_7 + 1])))))));
                            }
                            for (short i_9 = 2; i_9 < 8; i_9 += 4) 
                            {
                                var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4] [i_5] [i_6] [i_7] [i_9])) ? (((/* implicit */int) arr_7 [i_9 - 1] [i_7] [i_5])) : (((/* implicit */int) arr_8 [i_4] [i_5] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) arr_9 [i_6] [i_5] [(signed char)17] [i_7] [i_9 - 1] [i_9])) ? (((/* implicit */int) arr_12 [i_4] [i_9])) : (((/* implicit */int) arr_6 [i_6] [i_7] [i_6])))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_5] [i_6] [i_7 + 1] [i_9 + 2] [(signed char)17])) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (signed char)81)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_6]))) ? (((((/* implicit */_Bool) arr_20 [i_7] [i_5])) ? (((/* implicit */int) arr_15 [i_6] [i_7] [i_9])) : (((/* implicit */int) (signed char)104)))) : (((/* implicit */int) arr_12 [(signed char)9] [(short)5]))))) ? (((((/* implicit */_Bool) arr_8 [i_9 + 2] [i_6] [i_6] [i_7 - 2])) ? (((/* implicit */int) arr_30 [i_6] [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 2] [i_6])) : (((((/* implicit */_Bool) arr_13 [i_4] [i_5] [i_7])) ? (((/* implicit */int) arr_30 [i_6] [i_7] [i_6] [(signed char)9] [i_5] [i_6])) : (((/* implicit */int) arr_2 [i_4] [(short)10])))))) : ((~(((/* implicit */int) (signed char)79))))));
                                arr_31 [i_4] [i_4] [i_5] [i_6] [i_7] [i_6] [i_9 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_4] [i_5] [i_6])) ? (((((/* implicit */_Bool) arr_1 [i_6] [i_5])) ? (((/* implicit */int) max(((short)8782), (((/* implicit */short) arr_11 [i_4] [i_7]))))) : (((((/* implicit */_Bool) arr_2 [i_6] [i_5])) ? (((/* implicit */int) arr_0 [i_6] [i_7 - 1])) : (((/* implicit */int) (signed char)-50)))))) : (((/* implicit */int) ((short) arr_14 [i_4])))));
                            }
                        }
                    } 
                } 
                arr_32 [i_4] [(signed char)5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [(signed char)5] [(signed char)7] [(short)8])) ? (((/* implicit */int) arr_19 [(signed char)8] [i_4] [(short)8])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(signed char)2] [i_4] [i_5] [(short)2] [i_5] [i_5])) ? (((/* implicit */int) (short)-14706)) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */int) (signed char)-104)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [(short)6] [i_4])) : (((/* implicit */int) (signed char)-15))))))));
                var_23 = (signed char)99;
            }
        } 
    } 
}
