/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124168
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)3921)) ? (((/* implicit */int) (short)23794)) : (((/* implicit */int) (short)8192))));
    var_20 = var_9;
    var_21 = ((/* implicit */short) min((((/* implicit */int) var_8)), (min((((/* implicit */int) ((((/* implicit */int) (short)-15061)) >= (((/* implicit */int) var_18))))), (((((/* implicit */int) var_12)) & (((/* implicit */int) var_17))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_22 &= arr_3 [i_0];
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_1] [(short)3] [i_3 + 1] = arr_4 [(short)2] [i_3];
                            var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 2] [i_1] [i_3])) ? (((/* implicit */int) (short)-5838)) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3 + 2])))))), (min(((~(((/* implicit */int) arr_3 [i_2])))), (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) (short)3))))))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0 - 1])) | (((/* implicit */int) arr_2 [i_0 + 1])))) * (((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_0])) > (((/* implicit */int) (short)22213)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0])) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_0 + 2])) : (((/* implicit */int) min(((short)5934), (arr_5 [i_0 + 2] [(short)19]))))));
                    var_26 |= ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (short)0))))))));
                    var_27 = ((/* implicit */short) min((((/* implicit */int) (short)-22681)), ((~(((/* implicit */int) (short)15059))))));
                    arr_12 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_3 [i_4 - 2])) : (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 2])))))))));
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                {
                    arr_17 [i_5] = ((/* implicit */short) min((((/* implicit */int) arr_10 [i_0 + 2])), ((+(((/* implicit */int) arr_2 [i_0 - 1]))))));
                    var_28 = max((arr_16 [i_5] [i_5] [i_5] [i_5]), (arr_14 [i_5] [i_1] [i_0]));
                }
                for (short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                {
                    arr_20 [i_6] [i_1] [i_1] [i_0 + 3] = ((/* implicit */short) min(((+(((/* implicit */int) arr_18 [i_0 + 2] [i_0 + 2])))), (((/* implicit */int) arr_5 [i_1] [i_0 + 3]))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (short i_8 = 4; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8 + 1] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0] [i_0 + 1]))))) ? ((~(((/* implicit */int) max((arr_1 [i_0 + 2] [i_0 + 2]), (arr_22 [i_0] [i_0] [i_6] [i_0] [i_7] [i_8 + 1])))))) : (((((/* implicit */int) (short)-23350)) | (((/* implicit */int) (short)-13971))))));
                                arr_29 [i_0 + 2] [i_1] [i_0 + 2] [i_7] [i_7] = min((arr_25 [i_0 + 2] [i_0 + 2]), (arr_13 [i_0] [i_6] [i_6] [i_6]));
                                var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)7486)) ? (((/* implicit */int) (short)23461)) : (((/* implicit */int) (short)32767)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1842)) ? (((/* implicit */int) (short)30408)) : (((/* implicit */int) (short)29240))))) ? (((/* implicit */int) min((arr_6 [i_8]), ((short)-11284)))) : (((/* implicit */int) arr_0 [i_7] [i_7]))))));
                                arr_30 [i_8] [i_0] [i_1] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_27 [i_8])))), (((/* implicit */int) arr_15 [i_8 - 2] [i_0 - 1]))))) ? (((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8 - 4] [i_8] [i_8 + 1])) : (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-28838)))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 2] [i_8 + 3])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [(short)15] [i_0])))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0 + 3] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_24 [i_0 + 1] [i_1] [i_6] [i_9])))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(short)16] [i_6] [i_10])) ? (((/* implicit */int) arr_33 [i_9] [i_0] [i_6] [i_6] [i_1] [i_9])) : (((/* implicit */int) arr_32 [i_10] [i_9] [i_6] [i_1]))))) ? ((+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_9] [i_10] [i_9])))) : (((/* implicit */int) arr_33 [i_9] [i_0 + 3] [i_10] [i_9] [i_10] [i_9]))))));
                                var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25616)) | ((~(((/* implicit */int) (short)-17102))))))) ? (min((((/* implicit */int) arr_7 [i_0] [i_1] [i_6] [i_9])), (((((/* implicit */_Bool) (short)23362)) ? (((/* implicit */int) (short)-3657)) : (((/* implicit */int) (short)-22683)))))) : (((((/* implicit */_Bool) arr_33 [i_0 + 2] [i_0] [i_1] [i_6] [i_9] [i_1])) ? (((((/* implicit */_Bool) (short)-9575)) ? (((/* implicit */int) (short)-22202)) : (((/* implicit */int) (short)16847)))) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_19 [i_9] [i_0] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_6] [i_9] [i_10] [i_0] [i_9]))))))));
                                arr_38 [i_1] [i_9] [i_10] = ((/* implicit */short) (+(((/* implicit */int) arr_33 [i_0] [i_1] [i_6] [i_6] [i_9] [i_9]))));
                                arr_39 [i_1] [i_1] [i_6] [i_9] [i_10] = arr_16 [i_0] [i_0] [i_6] [i_0];
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_6] [i_10])) != ((+(((/* implicit */int) arr_36 [i_10] [i_9] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            {
                                arr_46 [i_0] [i_1] [i_6] [i_6] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)29240)) & (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) arr_1 [i_1] [i_12])) ? (((/* implicit */int) (short)2006)) : (((/* implicit */int) arr_10 [i_12]))))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_18 [i_12] [i_1])) > (((/* implicit */int) arr_27 [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_6] [i_1] [i_0 + 3])))))))) : ((-(((/* implicit */int) arr_42 [i_0 + 3] [i_1] [i_6] [i_11] [i_11]))))));
                                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) max(((short)(-32767 - 1)), ((short)5838)))) / (((/* implicit */int) (short)14445)))))));
                            }
                        } 
                    } 
                }
                arr_47 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1])) | (((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3]))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0 + 2])))) : ((+(((/* implicit */int) arr_5 [i_0 + 1] [i_1]))))));
            }
        } 
    } 
}
