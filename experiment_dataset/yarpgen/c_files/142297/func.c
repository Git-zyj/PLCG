/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142297
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
    var_17 = ((/* implicit */long long int) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [7ULL] [i_1] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) 1780593569U)) || ((!(((/* implicit */_Bool) var_5))))));
                    var_18 = ((/* implicit */signed char) (-(arr_6 [i_2 - 2] [i_2] [i_2] [i_2])));
                }
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3844690182U)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)14] [i_0]))))) + (min((arr_4 [i_0] [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) (signed char)-126))))))) ? ((-(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (_Bool)1)))))) : (-1110006574))))));
        var_20 = ((min((var_8), (arr_1 [i_0]))) / (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)125)))) * (min((3202020669U), (((/* implicit */unsigned int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_0] [i_0])) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) ^ (((arr_2 [i_0]) >> (((((/* implicit */int) arr_3 [i_0] [(_Bool)0] [i_0])) + (133))))))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_16 [(_Bool)1] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) : ((+(var_9)))))));
                        var_22 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_0)), (arr_12 [i_0] [i_0] [i_3 + 3] [i_5 - 1]))) | (((1092946626U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))))));
                    }
                } 
            } 
            arr_17 [(_Bool)1] = ((/* implicit */long long int) min(((+(((3202020649U) / (3202020681U))))), (((/* implicit */unsigned int) (short)-3718))));
            var_23 = 1092946614U;
            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (arr_6 [i_0] [i_0] [i_0] [i_0])))) & (max((arr_9 [i_3]), (((/* implicit */unsigned long long int) 3202020669U)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (arr_1 [i_3 + 2]))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_25 = ((signed char) ((((unsigned int) 18446744073709551615ULL)) & (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0])))));
            arr_21 [i_6] = min((((((/* implicit */_Bool) 945371408)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (2520228022U))), (3202020681U));
        }
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((min((2520228022U), (((/* implicit */unsigned int) arr_14 [i_7 + 1])))) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_14 [i_7 + 1]), (arr_14 [i_7 + 1]))))))))));
        var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (3202020669U)))) * (max((((/* implicit */long long int) var_4)), (var_9)))))), (((min((arr_4 [(signed char)7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned long long int) (signed char)-112)))) * (((/* implicit */unsigned long long int) ((arr_19 [i_7 + 1] [i_7 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7 + 1] [i_7]))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    arr_30 [i_7 + 1] [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_1)))) : (((arr_9 [i_8]) & (((/* implicit */unsigned long long int) 9070112636660242348LL))))))));
                    arr_31 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */long long int) max((max((2520228022U), (max((arr_5 [i_7] [i_8]), (((/* implicit */unsigned int) var_5)))))), (max((max((((/* implicit */unsigned int) -1110006574)), (3202020669U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (signed char)-1);
                        var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) 1530255871U)), (max((((/* implicit */long long int) (short)2816)), (arr_25 [i_7] [i_11] [i_12])))));
                        arr_38 [i_7] [i_7] [i_7] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (max((2987062475U), (1530255852U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (2520228022U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_15))))))), (((2987062475U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 2; i_13 < 8; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                var_31 = var_14;
                arr_46 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) (~(((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_4)))))))));
            }
        } 
    } 
}
