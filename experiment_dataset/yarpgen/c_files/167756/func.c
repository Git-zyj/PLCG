/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167756
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
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (0) : (2)))) ^ (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)224)), ((unsigned short)0)));
        var_17 -= ((/* implicit */int) (_Bool)1);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) || (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) min((-5176181078334859073LL), (((/* implicit */long long int) arr_1 [16LL])))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((/* implicit */int) (signed char)107)), (((((/* implicit */int) (unsigned short)3)) * (((/* implicit */int) (signed char)-64))))))), ((+(((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_2))))) ^ ((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */int) (signed char)125)) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)59723)))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 2])) : (((/* implicit */int) var_10))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        arr_18 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-125)) ^ (((/* implicit */int) arr_14 [i_2] [i_3] [i_3]))))))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned char)40)) ? (3756496626U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)-9)) < (((/* implicit */int) arr_4 [i_5] [i_3])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_5] [i_3] [i_5 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_3] [i_3] [(unsigned char)12] [i_5 - 2] [i_2] [(signed char)6])))))));
                    }
                    for (short i_6 = 4; i_6 < 17; i_6 += 2) 
                    {
                        arr_21 [i_4] = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) var_3))))) : (((/* implicit */int) max((((/* implicit */unsigned short) min(((signed char)-92), (((/* implicit */signed char) var_1))))), (arr_12 [i_6 + 1] [i_3] [i_4] [i_6])))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_4 [i_2] [i_4]))) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)46973))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-88)))))))) : (((max((((/* implicit */unsigned long long int) (unsigned char)32)), (var_13))) + (((((/* implicit */_Bool) arr_5 [17ULL])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)38)) >> (((((/* implicit */int) (unsigned short)33045)) - (33040)))))) ? (((/* implicit */int) ((signed char) var_11))) : ((~(((/* implicit */int) arr_8 [i_3] [i_4 - 2]))))));
                    }
                    for (signed char i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        var_22 &= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_17 [i_7 + 2] [i_3] [i_4] [i_4 - 3])) : (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-92)), (arr_3 [i_3] [(unsigned char)14])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4)))) : (((long long int) var_8)))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_4] [i_4 - 2] [i_4 + 2] [i_4])) && (((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-92)) ? (8589934464LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))) ? (((((/* implicit */int) var_5)) << (((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_7] [i_4] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1830557632U)))))))) : (min((((((/* implicit */_Bool) (signed char)53)) ? (509936292732180461LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (31) : (((/* implicit */int) (short)12488))))))))))));
                    }
                    for (short i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65532)))) ? (((/* implicit */unsigned long long int) ((((_Bool) arr_22 [(unsigned char)15] [i_3] [(unsigned short)6] [i_4] [i_4] [0ULL])) ? (((/* implicit */unsigned int) ((int) (unsigned char)12))) : (arr_9 [i_4 + 2] [i_8 - 1])))) : ((+(((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_3] [i_4]))) : (var_9)))))));
                        arr_27 [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)59748)))) < (arr_13 [i_2] [i_2] [i_2])))), (((long long int) arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_8]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned short) ((signed char) arr_19 [i_4] [i_4] [i_4] [i_4]));
                                var_26 = ((/* implicit */signed char) arr_14 [i_2] [i_9] [i_10]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_4 - 3]) : (arr_5 [i_4 + 2]))))));
                    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_3])) & (arr_32 [i_2] [i_2])))))) > (((arr_3 [i_2] [i_4 - 2]) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])))) - (124)))))));
                }
            } 
        } 
    } 
}
