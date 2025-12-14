/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174060
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
    var_12 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))));
        var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (((((_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18411))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) 892870227U)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) var_0))))))) <= ((+(((var_3) ? (var_10) : (var_10))))))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
                var_17 &= ((/* implicit */short) ((signed char) min((var_0), (arr_7 [i_3 + 1] [i_3 - 2]))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_3 - 1] [6LL] [8U] [i_3])), (max((((/* implicit */unsigned short) (short)-18423)), ((unsigned short)64724))))))) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17521392373727797631ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_1] [i_3])))))))))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((((/* implicit */_Bool) ((unsigned long long int) 1988638491596300758LL))) ? (((/* implicit */long long int) arr_11 [i_3] [(unsigned short)4] [i_3] [i_3] [i_3] [i_3 - 1])) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (-1988638491596300744LL))))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                arr_15 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                var_20 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1 - 2] [(signed char)0] [i_1 + 1] [i_1 - 2]))));
                            arr_20 [i_1] [i_2] [(short)4] [i_6] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_8))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-32743))))))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (arr_5 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18401))))))))));
                        }
                    } 
                } 
            }
            for (long long int i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                var_24 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (_Bool)1)), (arr_23 [i_1 + 1] [i_1 - 2])))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10870)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) var_5))))) : (((arr_13 [i_1] [i_2] [i_8]) * (((/* implicit */unsigned long long int) arr_23 [i_1 - 2] [i_1])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12229361091320807157ULL))))))))));
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */short) min(((((~(8353577092740093326ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) <= (17454747090944LL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_8 - 1] [i_1 + 1])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                arr_26 [i_2] [10U] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_27 [i_8 - 1] [i_2] [i_2] [i_1] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_12 [i_1 + 1] [10ULL] [i_2] [i_2] [(short)8])) * (((/* implicit */int) var_3))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_17 [i_1] [3ULL] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_2]), (((/* implicit */short) var_6))))))))))));
                var_27 = ((/* implicit */_Bool) max((min((((/* implicit */short) arr_9 [i_1 + 1] [(short)4] [(_Bool)1] [i_2])), ((short)23899))), (((/* implicit */short) (!(var_3))))));
                var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_1 - 1])) ? (arr_23 [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_31 [i_1 + 1] [i_2] [i_2] [i_9] = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_8)), (((unsigned int) var_7)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_3))))))));
            }
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                var_29 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_10 [i_1 - 2] [(_Bool)1] [i_2] [i_10])))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_10)) : (4095ULL))), (((/* implicit */unsigned long long int) ((signed char) var_5)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(((/* implicit */int) arr_7 [i_1 - 2] [i_2])))))));
                    var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7936604339929605540ULL)))));
                    var_32 = ((/* implicit */short) ((long long int) (short)-21101));
                }
                arr_39 [i_1] = max(((~((((_Bool)1) ? (500016150U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_1] [(unsigned short)6] [i_10] [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) (short)30152)) : (((/* implicit */int) var_9))))))));
            }
        }
        var_33 = (~(((((/* implicit */long long int) arr_32 [i_1] [0LL] [i_1] [i_1 - 2])) / (var_7))));
    }
}
