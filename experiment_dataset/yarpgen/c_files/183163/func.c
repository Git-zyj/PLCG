/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183163
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_9)), (var_7)));
    var_12 = ((/* implicit */unsigned long long int) ((short) (signed char)4));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (+(arr_1 [i_0] [(unsigned short)12])));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)7))))));
                                arr_16 [(short)10] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(arr_5 [8ULL])));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)19)))), (max((((((/* implicit */int) (unsigned short)49580)) * (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-63)) : (arr_7 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_16 = ((signed char) min((var_7), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [4U])))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_7 = 3; i_7 < 15; i_7 += 4) 
            {
                var_17 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) / ((-(-2184702788538417755LL)))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6 + 3])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_2 [(signed char)5])))))));
            }
            for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                arr_27 [i_5] [i_8] [11LL] [i_8] = ((/* implicit */unsigned long long int) arr_9 [i_8] [13U] [i_5]);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)55)) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_1 [9LL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)100)))))))))))));
            }
            for (short i_9 = 3; i_9 < 17; i_9 += 4) 
            {
                arr_31 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_12 [i_5] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5]))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51455)) ? (((/* implicit */unsigned int) -900360968)) : (4294967276U))))))) - (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))))))));
                arr_32 [1U] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)-18795))) ? (2759356324329917043ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18799)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (unsigned short i_11 = 3; i_11 < 15; i_11 += 1) 
                    {
                        {
                            arr_38 [i_5] [i_9 - 1] [i_10] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_9 + 1] [i_6 + 2])) ? (2147483647) : (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_9 - 2] [i_6 - 2])) : (((/* implicit */int) arr_0 [i_9 - 3] [i_6 - 1]))))));
                            arr_39 [i_5] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_5] [i_11 - 2] [i_11] [i_5] [i_11]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_11 + 3] [i_11 + 3])) || (((/* implicit */_Bool) min((arr_10 [i_5] [(short)3] [i_6 + 2] [i_10] [i_10] [(unsigned short)14]), (((/* implicit */unsigned long long int) var_1)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(3783506334909012589ULL)))) && (((/* implicit */_Bool) 900360963)))))));
                            arr_40 [i_5] [(unsigned short)14] [i_10] [i_10] [i_5] = ((/* implicit */unsigned int) arr_28 [i_6 + 1] [i_6] [i_6] [(unsigned short)14]);
                            arr_41 [i_5] [i_5] [i_9] [i_9 - 3] [(short)6] [i_11 - 3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-80))))) ? (((((/* implicit */_Bool) arr_2 [i_5])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_11] [i_10] [i_9] [1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_9 - 2] [i_6] [1])) == (((/* implicit */int) arr_29 [i_11 - 1] [i_10] [6U])))))))) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_5])))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_6] [i_9] [i_6] [i_5])) ? (((((/* implicit */_Bool) 14663237738800539040ULL)) ? (4938856065840730655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (signed char)-4)))))))) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_6])) : (((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            }
            var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (7713719632918055611LL)))) ? (((unsigned long long int) var_5)) : (min((13507888007868820961ULL), (((/* implicit */unsigned long long int) (short)-18103)))))))));
        }
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((-(((((/* implicit */_Bool) (short)18103)) ? (9885108851107110373ULL) : (((/* implicit */unsigned long long int) arr_7 [9ULL] [i_5] [i_5])))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [6] [i_5] [8ULL] [14ULL] [i_5] [8ULL]))))))))));
    }
    for (long long int i_12 = 2; i_12 < 11; i_12 += 3) 
    {
        arr_44 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) -900360968)))))));
        var_23 = arr_29 [i_12] [i_12 + 3] [i_12];
    }
    var_24 = ((/* implicit */int) 4938856065840730655ULL);
}
