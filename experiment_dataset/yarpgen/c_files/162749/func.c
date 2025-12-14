/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162749
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
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (var_9)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -3951921085046215609LL))))) > (min((536870904), (((/* implicit */int) var_7))))))) : (((/* implicit */int) ((unsigned short) ((signed char) var_7))))));
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_2] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4] [i_3] [i_4])) ? (arr_7 [i_0] [i_0] [i_1] [i_2] [i_3 + 2] [i_4 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) ^ (((long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_5)) - (241))))))));
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) - (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [(signed char)14]))))) - (max((arr_2 [(unsigned short)17]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_1] [i_0])))))) * (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (3951921085046215608LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_1 - 1]))) : (-3951921085046215609LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_0 [i_0] [i_1 + 3])))))))));
                            }
                            for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -2947213821274092036LL)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (unsigned char)15))));
                                arr_15 [i_0] [i_0] [i_2] [i_3 - 2] [i_5] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((unsigned long long int) (signed char)75)))))));
                                var_17 = ((/* implicit */int) (~(min((max((arr_3 [i_0]), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_0] [i_5])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65468)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_8)))))))));
                                arr_16 [16] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)4095)) | (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [(_Bool)1] [i_1 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 - 2] [i_5]))))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)76))))))));
                                arr_17 [i_0] [i_0] [(unsigned char)13] = ((/* implicit */unsigned char) ((signed char) 4120786672386894062LL));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((var_1) ? (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] [i_6]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_3] [i_6]))))));
                                var_19 = ((/* implicit */unsigned short) (-(arr_5 [i_3 + 1] [i_1] [i_2])));
                            }
                            arr_22 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) max((17703749906039717080ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned short) var_8);
                        }
                    } 
                } 
                arr_23 [i_1] [i_0] = ((/* implicit */short) ((((((_Bool) var_4)) ? (((((/* implicit */unsigned long long int) var_4)) + (arr_20 [i_0] [i_0] [5LL] [i_0] [i_0] [5LL]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_13 [i_1] [5ULL] [i_1] [i_0] [i_0] [i_0] [i_0]))))) == (((/* implicit */unsigned long long int) max((var_6), ((~(((/* implicit */int) (unsigned char)0)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = (i_7 % 2 == zero) ? (((/* implicit */signed char) ((arr_24 [i_7] [i_7]) + (arr_5 [i_0] [i_1] [i_7])))) : (((/* implicit */signed char) ((arr_24 [i_7] [i_7]) - (arr_5 [i_0] [i_1] [i_7]))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65486)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)63803)) : (((/* implicit */int) arr_25 [i_7] [i_1] [i_7]))))) : ((+(var_3)))));
                }
                var_23 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53557)) ^ (-663638225))))))), (min((((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]), ((short)-4112)))), (((((/* implicit */int) var_10)) >> (((arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] [i_1]) - (5701253442068272392ULL))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9429))) : (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
}
