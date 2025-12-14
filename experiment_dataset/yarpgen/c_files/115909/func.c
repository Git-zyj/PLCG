/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115909
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (max((((unsigned long long int) 498046511U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)212)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) >> ((-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))))) ? (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (max(((unsigned char)212), (((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0 + 1]))))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max(((+(var_2))), (((/* implicit */long long int) max((3796920784U), (((/* implicit */unsigned int) (_Bool)1)))))))), (min((arr_5 [i_0 - 3]), (((/* implicit */unsigned long long int) (signed char)63))))));
            arr_6 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)48)), (var_10)))) ? (max((-6267553198565481763LL), (((/* implicit */long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50842))))) / (var_2)));
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))))) : (min((((/* implicit */unsigned long long int) var_1)), (min((arr_5 [i_0]), (((/* implicit */unsigned long long int) var_11)))))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */unsigned long long int) arr_3 [i_2] [i_3])) : (arr_2 [i_0]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 5944870390802961426ULL))) ? (arr_3 [i_2] [i_2]) : ((~(((/* implicit */int) (signed char)-67)))))))));
                            arr_16 [i_0 - 3] [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((max((14336U), (((unsigned int) var_9)))) - (((/* implicit */unsigned int) ((max((var_9), (var_3))) ? (((((/* implicit */_Bool) 8032145597456547042LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)63)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)67)))))))));
                            arr_17 [i_0 - 2] [0] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned long long int) (+(var_2)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                arr_20 [i_6] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6])))))) ? (max((((/* implicit */unsigned long long int) ((signed char) var_9))), (arr_4 [i_0] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 1])))));
                var_20 = ((/* implicit */long long int) arr_7 [i_0] [i_2]);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 498046511U))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((max((arr_15 [i_7] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1]), (((/* implicit */unsigned long long int) ((unsigned int) var_1))))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_6]))));
                            var_23 = (i_7 % 2 == zero) ? (((/* implicit */unsigned short) ((((arr_3 [i_8] [i_2]) + (2147483647))) << (((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0] [i_2])), (var_4)))) ? (((((/* implicit */int) arr_27 [i_8] [i_7] [i_7] [i_0 - 3])) & (arr_18 [i_0 - 3] [i_0 - 3] [i_6] [i_8]))) : (((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_7] [i_2] [i_6] [i_7])))))) - (72)))))) : (((/* implicit */unsigned short) ((((arr_3 [i_8] [i_2]) + (2147483647))) << (((((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0] [i_2])), (var_4)))) ? (((((/* implicit */int) arr_27 [i_8] [i_7] [i_7] [i_0 - 3])) & (arr_18 [i_0 - 3] [i_0 - 3] [i_6] [i_8]))) : (((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_7] [i_2] [i_6] [i_7])))))) - (72))) - (254039434))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_11 [i_7])))) ? ((+(arr_11 [i_7]))) : ((+(arr_11 [i_7])))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 192U)), (7116253741471347107ULL)))) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_6] [i_6] [i_2] [i_2])) ? (var_10) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_6])))) : ((+(arr_4 [i_2] [i_2] [i_6])))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (971539971) : ((-(((/* implicit */int) (signed char)95))))));
                var_26 = ((/* implicit */unsigned int) (-(arr_2 [i_9])));
                var_27 = ((/* implicit */int) (-(498046501U)));
                var_28 = ((/* implicit */int) min((((/* implicit */long long int) ((((arr_18 [i_0] [i_9] [i_2] [i_2]) >= (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3796920789U))))))), (((((/* implicit */_Bool) arr_15 [(unsigned short)0] [i_9] [i_2] [i_0 - 1] [(unsigned short)0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_21 [(unsigned short)2] [i_2] [i_9] [i_0] [i_9])) : (((/* implicit */int) (unsigned short)14694))))) : (max((var_13), (((/* implicit */long long int) var_3))))))));
                var_29 = (+(arr_4 [i_9] [i_2] [i_0]));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
            {
                var_30 &= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 31LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))));
                var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1215046090)) & (668152959U)));
            }
        }
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((11330490332238204526ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))))));
    var_33 = ((/* implicit */unsigned short) (signed char)6);
}
