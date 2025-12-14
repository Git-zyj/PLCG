/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180325
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_6)))) ? (min((((/* implicit */unsigned long long int) var_1)), (10765392942290255193ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (371014295U))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) 10765392942290255193ULL);
        var_18 &= ((/* implicit */short) var_9);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */_Bool) 22087701);
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_12))));
        }
        for (short i_2 = 3; i_2 < 13; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) (+(var_6)));
            var_21 = ((/* implicit */long long int) arr_2 [i_2] [i_0] [i_0]);
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16380)) >> (((arr_7 [i_0]) + (1850467239)))))) ? (((((/* implicit */_Bool) 7681351131419296408ULL)) ? (7681351131419296427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_13))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0]))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_3] [i_4] [i_3] [i_6]))))) - (((/* implicit */int) var_4))))));
                        var_24 = ((/* implicit */long long int) 112963021873125480ULL);
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 2) 
                    {
                        arr_22 [i_0] [i_3] [i_0] [i_4 + 2] [i_5] [i_7] = ((/* implicit */unsigned short) var_15);
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)22287))));
                        var_26 *= ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_9 [5U] [i_5] [i_0])))))) ? (((/* implicit */unsigned long long int) var_14)) : (((arr_10 [i_4 - 1] [i_7 - 1] [i_7 - 1]) << (((((/* implicit */int) (short)-12256)) + (12295))))));
                        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_18 [i_0] [i_0] [i_3] [i_4 - 1] [i_0] [i_0] [i_7 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    arr_23 [i_0] [i_4 - 1] [i_3] [i_0] = ((/* implicit */_Bool) var_9);
                    var_28 = ((/* implicit */short) var_10);
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(max((((int) (unsigned short)38107)), (((/* implicit */int) min(((unsigned char)74), (arr_16 [i_0] [i_0] [(unsigned short)6] [i_0])))))))))));
                }
                var_30 ^= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_0 [i_3])), (max((var_6), (4042999986U))))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_0] [i_0] [i_3] [i_0] [i_0]) || (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))))))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_31 = ((/* implicit */_Bool) (~((~((+(((/* implicit */int) arr_0 [i_0]))))))));
                var_32 *= ((/* implicit */_Bool) arr_9 [(short)1] [i_3] [i_8]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_33 -= ((/* implicit */signed char) var_9);
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_8 - 1] [i_0] [i_8 - 1])) & (arr_11 [i_8 - 1] [i_8] [i_0])));
                    arr_28 [i_0] [i_0] [i_8] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_12 [i_0] [(unsigned short)0] [i_9] [i_8 - 1])))));
                }
            }
            arr_29 [i_0] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                arr_32 [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_8);
                var_35 = ((/* implicit */short) min((arr_11 [i_0] [(short)3] [i_0]), (((((/* implicit */_Bool) ((long long int) 251967310U))) ? ((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_3] [i_10])))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)77)), (arr_20 [i_0] [2LL] [i_0] [(unsigned char)1] [i_0]))))))));
            }
            arr_33 [i_0] = ((/* implicit */int) var_12);
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_39 [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_18 [i_12] [i_0] [i_11] [i_3] [i_3] [i_0] [i_0]))) - (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_11])) ? (((/* implicit */int) (unsigned short)30748)) : (((/* implicit */int) var_5))))));
                    var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned char)6] [i_3] [7ULL] [i_12]))));
                    var_37 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
                    var_38 += ((/* implicit */unsigned int) (short)19195);
                }
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_36 [i_0] [i_11]), (((/* implicit */unsigned short) arr_38 [i_0] [i_0] [i_3] [i_0])))))))) ? ((-(arr_10 [4] [i_3] [5LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((((/* implicit */short) var_12)), ((short)32760)))) : (((/* implicit */int) max(((signed char)27), (((/* implicit */signed char) var_2))))))))));
                var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((int) var_9))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_3])) ? (8670053782994103572LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((_Bool) var_15)))))) : (arr_10 [(_Bool)1] [i_3] [i_11])));
            }
        }
    }
}
