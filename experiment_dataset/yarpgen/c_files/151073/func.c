/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151073
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
    var_17 |= ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_6 [2LL] [i_2] [(unsigned short)1] [i_0]))))));
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2])))))))))) << ((((-(11091337834022309979ULL))) - (7355406239687241625ULL)))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_9));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5769)) ? (((((/* implicit */_Bool) 2032)) ? (-1606408697110015173LL) : (((/* implicit */long long int) 3645553458U)))) : (((/* implicit */long long int) (((+(((/* implicit */int) arr_9 [i_1])))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_14 [(unsigned short)4] [(short)6] [i_3] [i_3] [(short)8] [i_4])))))))));
                        var_22 ^= ((/* implicit */unsigned long long int) ((unsigned short) 2251799813685248LL));
                        var_23 = ((/* implicit */short) ((_Bool) (~(((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) var_0)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [i_1] [2U]))))), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-51)) == (((/* implicit */int) (unsigned short)32640)))))) : ((~(arr_3 [i_5 + 3])))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) 3838871185U)))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5 + 1]))) - (arr_0 [i_5 + 3] [i_5 + 2])))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) 245760)) * (((unsigned int) (unsigned short)63455))));
                            arr_22 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_1]) || (((/* implicit */_Bool) -1618382079)))))) <= (arr_5 [14LL] [i_1] [i_1])));
                            arr_23 [i_0] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned int) ((((-147885307) <= (((/* implicit */int) (unsigned short)2080)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32908))) : (-7299236071777786232LL)));
                            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2080))) : (var_2)))));
                            var_27 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)0)), (5444334453088330249ULL)));
                        }
                    }
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        arr_26 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((long long int) var_2))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-125)) ? (((((/* implicit */_Bool) 6U)) ? (arr_15 [i_7 - 3] [i_7 + 3] [i_7 - 3] [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7] [i_7 + 2] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18580))) != (((((/* implicit */_Bool) 1176515189546244850ULL)) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38354))))))))))))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_1] = ((/* implicit */signed char) (short)-1959);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_1] = ((/* implicit */_Bool) var_5);
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) (short)32767))) | (((unsigned long long int) arr_30 [i_9] [i_9] [i_9] [i_9 - 1]))));
                        var_30 = ((/* implicit */int) (short)32767);
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    arr_37 [i_1] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2424498138U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (2267446501803698593ULL)));
                    var_31 = ((/* implicit */short) ((unsigned short) (unsigned short)50572));
                    arr_38 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */long long int) var_3);
                }
                arr_39 [i_1] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_0] [i_1]);
                var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_0] [i_1])) ? (((12843872535718282933ULL) ^ (9231870939313886475ULL))) : (var_2))), (((/* implicit */unsigned long long int) min((arr_24 [0ULL] [i_1] [0ULL] [i_0]), (((/* implicit */unsigned int) var_1)))))));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) (+(var_14)));
    var_34 = ((/* implicit */unsigned short) var_4);
}
