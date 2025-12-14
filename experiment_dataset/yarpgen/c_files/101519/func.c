/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101519
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) max(((_Bool)1), (var_7)))) : (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1504567205U)))), ((~(-1252809124643048188LL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-107), (((/* implicit */signed char) var_5)))))) : (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [(_Bool)0] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)56))))), (min((max((var_4), (var_3))), (1504567203U)))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1] = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_0] [i_1] [i_2] [i_3] [(signed char)21]))))));
                        }
                    } 
                } 
                var_16 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((288230376151711744LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((+(var_10))) : (max((2939368234U), (((/* implicit */unsigned int) (signed char)60))))))));
                var_17 += ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_1]))))) - ((+((-(757409977U))))));
                arr_15 [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                var_18 = max((((/* implicit */long long int) (+(((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */signed char) (_Bool)1)))))))), (((((/* implicit */_Bool) ((long long int) var_11))) ? (((((/* implicit */_Bool) var_6)) ? (288230376151711732LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), ((((_Bool)1) ? (26U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) max((arr_17 [(signed char)0]), (((/* implicit */long long int) max((((((/* implicit */_Bool) 2305843009213693944LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) : (var_0))), (arr_2 [i_4] [i_4]))))));
        var_20 = ((((/* implicit */_Bool) max((arr_12 [i_4] [4LL] [i_4] [i_4] [i_4] [i_4]), (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? ((~(arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (1134981974U) : (arr_6 [i_4])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [i_4] [5U] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) == (-1LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_4] [i_5]))))))) : ((((_Bool)1) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_25 [i_4] [i_5] [i_6]))))));
                    var_21 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) -8487626981437932978LL)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (signed char)-35))))), ((~(arr_17 [i_5]))))), (max((((/* implicit */long long int) arr_4 [(signed char)1] [(signed char)1] [i_6])), ((((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)39)))))))));
                    arr_27 [2U] [i_5] = min((min((((/* implicit */long long int) ((signed char) var_10))), (((long long int) arr_7 [i_4] [i_5] [i_6])))), (((/* implicit */long long int) (~(arr_6 [i_6])))));
                    arr_28 [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) || (((/* implicit */_Bool) max((arr_8 [i_6] [i_6] [(_Bool)1] [i_6]), (((/* implicit */signed char) arr_10 [i_4] [i_5] [(signed char)1])))))))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((-2486155757845977175LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6]))))) : (((/* implicit */long long int) ((arr_20 [i_4] [i_4] [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4])))))))) + (2486155757845977186LL)))));
                    arr_29 [(signed char)16] [i_5] &= ((/* implicit */_Bool) ((min((((/* implicit */long long int) (signed char)-39)), (883897878847962093LL))) * (max((((long long int) arr_7 [i_4] [i_5] [i_5])), (((/* implicit */long long int) min(((signed char)58), ((signed char)50))))))));
                }
            } 
        } 
        var_22 *= ((/* implicit */long long int) min((((_Bool) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)105))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_4] [i_4] [i_4] [(signed char)3])), (arr_20 [i_4] [i_4] [(signed char)4]))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((signed char) ((signed char) min((0U), (((/* implicit */unsigned int) var_7)))))))));
        arr_33 [i_7] &= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (max((((/* implicit */long long int) var_6)), (arr_12 [15U] [i_7] [i_7] [i_7] [i_7] [(signed char)11]))))), (((/* implicit */long long int) (+(arr_4 [0LL] [0LL] [0LL]))))));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 1U)) || ((_Bool)1))));
                        var_25 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (_Bool)1)))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            arr_45 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_11] [i_11])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7])))));
            var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_39 [i_7] [i_11] [i_11]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((_Bool) arr_41 [(signed char)11] [(signed char)9]))) : (((/* implicit */int) (signed char)7))));
        }
        arr_46 [i_7] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7])))))) : (((long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
    }
}
