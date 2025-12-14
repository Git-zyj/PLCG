/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165096
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) min(((+(arr_11 [i_0] [2] [(signed char)18] [i_2] [i_0] [i_4 + 2] [i_4]))), (((((((/* implicit */int) (signed char)-46)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (56))))))))));
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)43)) ? (1048574U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29728))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned int) (((((+(max((((/* implicit */int) var_0)), (var_9))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [(unsigned char)10] [(unsigned char)10] [i_1] [i_1] [i_1] [i_5] [i_6]), (((/* implicit */int) var_0))))) || (arr_9 [i_2 - 2]))))));
                                var_13 *= ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) min((var_8), (var_8)))), (((arr_9 [i_2 - 2]) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 3]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_20 [i_7] [i_7]), (((/* implicit */unsigned long long int) var_9))))) ? ((+(arr_8 [i_7]))) : (((/* implicit */unsigned long long int) (+(arr_15 [10] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        var_15 = ((/* implicit */unsigned short) arr_12 [i_7] [i_7] [(signed char)19] [i_7] [i_7] [i_7]);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_7] [i_8 - 2] [i_8] [i_7])) <= (((/* implicit */int) var_8))))))))))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) (signed char)45)), (var_0))))));
                    var_18 += ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_21 [i_8 + 1] [i_8 - 1])))) * ((((~(((/* implicit */int) (unsigned short)35807)))) / (arr_11 [i_9] [i_9] [i_7] [1] [i_7] [1] [i_7])))));
                    var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((signed char) arr_3 [i_7]))) ? ((+(((/* implicit */int) (unsigned short)12)))) : (((((/* implicit */_Bool) 449324396)) ? (((/* implicit */int) arr_26 [i_7] [i_7] [i_9])) : (((/* implicit */int) (unsigned short)49592))))))));
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (arr_11 [i_10] [19U] [9] [19U] [15] [8LL] [i_10])))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)27801))))) : ((+(arr_11 [(signed char)20] [14] [i_10] [i_10] [i_10] [i_10] [i_10])))));
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 1190913201876277109LL)) ? (((/* implicit */int) arr_5 [i_10] [i_10] [18ULL] [i_10])) : (((/* implicit */int) arr_5 [i_10] [i_11] [(unsigned char)10] [i_10])))), (((/* implicit */int) min(((signed char)99), (((/* implicit */signed char) arr_5 [(unsigned char)15] [i_11] [i_11] [i_11]))))))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (17356817315504939678ULL))) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2071933525U)), (var_1)))))))));
        }
        for (int i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            arr_35 [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10] [i_12])) && (((/* implicit */_Bool) arr_33 [i_10] [i_12])))))));
            arr_36 [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)54))));
        }
    }
    var_23 = ((/* implicit */unsigned char) 4294967272U);
}
