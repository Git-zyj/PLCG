/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15818
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
    var_19 = var_15;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (((long long int) arr_2 [i_0]))))) ? (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)32)))))) : ((~(((/* implicit */int) ((signed char) arr_3 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [12U] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_14 [i_3] [i_1] [i_0] [i_3] [i_3] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_3]))))) ? (((((((/* implicit */_Bool) var_18)) && (arr_8 [i_0] [i_1]))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_5 [i_0]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) (short)-32061))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)23570)) ? (((/* implicit */int) arr_18 [i_1] [i_0] [i_2] [i_1] [i_0])) : (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned short)8] [i_4] [i_0])) : (((/* implicit */int) arr_1 [(unsigned short)0] [(unsigned short)0])))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                        {
                            arr_22 [i_2] [i_2] |= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-17673)) ? (((/* implicit */int) arr_0 [(short)12])) : (-2147483647)))));
                            arr_23 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) ((short) arr_13 [i_5 + 2] [i_5 - 1] [i_5 + 3] [i_5 + 3] [i_5 + 2]));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_13)));
                            var_23 = ((/* implicit */short) ((signed char) (unsigned short)47873));
                        }
                    }
                    var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) -1755327510)) ? (var_18) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (unsigned short)17646)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) 810461817)) <= (158478991300133250ULL)))))));
                    arr_26 [4ULL] [(unsigned short)13] [i_2] [14U] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (-1234648035)))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1191384686)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_2] [(short)14] [i_2] [i_2]))) / (16090820609908164312ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8938580132199887497LL))))))));
                    var_25 = ((/* implicit */signed char) ((((-4110595092949907651LL) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)63)) : (((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(short)6] [i_0] [i_2])) : (((/* implicit */int) (short)10518)))))) - (63)))));
                }
            } 
        } 
    }
    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)26)) + (((/* implicit */int) var_9))))) : ((-(var_14)))))) ? (var_11) : ((~((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (signed char i_8 = 1; i_8 < 15; i_8 += 4) 
        {
            {
                arr_32 [16U] [16U] [16U] = ((/* implicit */short) arr_27 [i_7] [i_8 + 2]);
                arr_33 [i_7] [(short)0] [(short)0] &= ((/* implicit */unsigned long long int) arr_30 [i_8] [i_8] [i_8]);
            }
        } 
    } 
}
