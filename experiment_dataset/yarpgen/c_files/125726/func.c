/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125726
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (4115871752U) : (((/* implicit */unsigned int) var_3))))) ? (var_3) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max(((short)23275), (((/* implicit */short) arr_1 [i_0])))))))) : ((((_Bool)1) ? (((/* implicit */long long int) 0U)) : (2167488786162028254LL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_1 [(short)16])), (max((max((((/* implicit */long long int) 554276207)), (-6261479274372024100LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (var_14))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] &= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_6 [i_1] [i_1] [i_0]))));
            var_19 = ((/* implicit */long long int) (((~(((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (_Bool)1))))))) ^ (((/* implicit */int) arr_1 [i_0]))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)22132)))))))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((min((arr_0 [15] [i_1]), (arr_0 [i_0] [i_1]))) ? (((/* implicit */int) max((var_18), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_15))))));
        }
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            var_21 = ((/* implicit */int) max(((_Bool)1), (min((arr_0 [i_2 - 2] [i_2 - 2]), (arr_0 [i_2 - 2] [i_2 - 2])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_19 [i_3] [i_2 - 1] [i_2] [i_2 + 2] = (_Bool)0;
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4]))))), (((var_11) >> (((var_17) - (720366481462560489ULL)))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) != ((~(max((((/* implicit */long long int) (_Bool)1)), (-3137718184242307696LL)))))));
                        var_24 = ((/* implicit */int) arr_1 [i_0]);
                    }
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_25 |= ((/* implicit */unsigned long long int) arr_21 [i_5]);
            var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_16)), (var_3))), (((/* implicit */int) max(((_Bool)1), (arr_15 [i_0]))))))), ((-(max((((/* implicit */unsigned long long int) var_7)), (var_17)))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) ((max((arr_28 [i_0]), ((_Bool)1))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_13 [i_6])) & (var_14))))));
                        var_28 = ((/* implicit */int) (+(22U)));
                        arr_32 [14LL] [i_7] [i_7] [i_8] [i_6] [i_6] = ((/* implicit */int) max(((~(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8] [i_6] [i_6] [i_0]))) % (2147479552U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_9] [(unsigned char)7] [i_9])) + (((/* implicit */int) arr_6 [i_9] [i_9] [i_9]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_6 [17U] [17U] [i_9])) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)0) ? (15529737883560214071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27848)))))));
        arr_35 [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_9])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_9])) : (((/* implicit */int) var_7))))), (min((var_0), (((/* implicit */unsigned int) var_15))))))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((min((((unsigned int) var_8)), (((((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27848))))))), (((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)-1)))))))));
    }
    var_31 = ((/* implicit */_Bool) (((_Bool)1) ? ((~(((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) : (var_2)));
    var_32 &= ((/* implicit */_Bool) (short)13387);
}
