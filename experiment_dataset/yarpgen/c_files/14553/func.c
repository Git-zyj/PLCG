/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14553
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-19)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)-10)), (min((((/* implicit */long long int) ((signed char) (signed char)-4))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_0)) : (arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */int) (((+(((7308279551852353346LL) - (arr_0 [i_0]))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_13 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_4 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((33554432U), (((/* implicit */unsigned int) (short)26771)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 33554432U)) && (((/* implicit */_Bool) var_11)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((_Bool) (~(((var_2) + (2U))))));
                        var_14 = ((/* implicit */int) min((var_14), ((~(((/* implicit */int) ((signed char) (~(((/* implicit */int) var_11))))))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) arr_6 [i_0]))), (max((arr_6 [i_0]), (arr_6 [i_0]))))))));
        }
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-1)), (arr_10 [i_0] [i_0] [i_0])))) ? (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) -7308279551852353347LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26771)))))) ? (((/* implicit */int) ((signed char) (signed char)104))) : ((~(((/* implicit */int) (short)21913))))));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) 383504535U)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)-25)));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) var_8))) ? ((~(var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_8] [i_6] [i_4]), (((/* implicit */unsigned char) var_8)))))))))))));
                                arr_30 [i_8] [i_4] [i_6] [i_6] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_22 [i_4] [i_6] [i_7]))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)167))))) * (min((arr_18 [i_8]), (((/* implicit */unsigned long long int) arr_0 [i_7]))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)89)) % (((/* implicit */int) (_Bool)1)))))));
                                var_20 |= ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6] [i_5]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 827318550)) ? (((/* implicit */int) (signed char)31)) : (arr_27 [i_4] [i_7]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29140)) && (((/* implicit */_Bool) 9223372036854775807LL))))), ((~(33554432U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 11; i_9 += 3) 
                    {
                        for (int i_10 = 4; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_10]))) : (arr_28 [i_4] [i_4] [i_4] [i_4] [i_4])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_5))) < ((+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_33 [i_5] [i_4] [i_9] [i_4])))))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)29140)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)137))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (-2577196286791477707LL)));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_4] [i_6] [i_5] [i_10])) ? ((+(((((/* implicit */_Bool) (short)26762)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_26 [i_5])))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) (signed char)123))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)104)))))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4] [i_5] [i_6]))))) ? (min((var_2), (((/* implicit */unsigned int) var_4)))) : (min((((/* implicit */unsigned int) (unsigned char)255)), (var_6)))))) ? ((~(((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (var_5) : (((/* implicit */int) (unsigned char)63)))))) : ((((+(((/* implicit */int) (unsigned char)137)))) & ((~(((/* implicit */int) (signed char)97)))))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7491533572703350208ULL)) || (((/* implicit */_Bool) 2147483647)))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned char)1))))))))));
    var_26 = ((/* implicit */long long int) (~(max((((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31382)))))), ((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
    /* LoopNest 2 */
    for (long long int i_11 = 1; i_11 < 16; i_11 += 4) 
    {
        for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 17; i_13 += 1) 
                {
                    for (int i_14 = 3; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29139))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 2147483643)) & (0U))))))), (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) arr_39 [i_12] [i_14 - 2]))))));
                            arr_50 [i_11] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) arr_43 [i_11] [i_12] [i_11]))))) / (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11])))))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-11287), (((/* implicit */short) (signed char)11))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29139))) : (var_2))))) : (((/* implicit */int) min((((/* implicit */short) ((signed char) arr_49 [i_11] [i_11] [i_11 + 3] [i_11]))), ((short)-11287)))))))));
                        }
                    } 
                } 
                arr_51 [i_11] [i_11] = ((/* implicit */unsigned char) (~(max(((+(arr_37 [i_11]))), (((/* implicit */unsigned long long int) max((arr_41 [i_11] [i_12] [i_12]), (((/* implicit */int) (unsigned char)198)))))))));
                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
            }
        } 
    } 
}
