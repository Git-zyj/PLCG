/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166917
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_12 = ((/* implicit */signed char) ((int) ((((/* implicit */int) max((var_9), (((/* implicit */short) arr_3 [i_0] [i_1] [i_0]))))) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_4] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        arr_15 [i_0] [i_5] [i_4] [(short)0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_5 - 2])) ? (arr_1 [i_5 - 1]) : (((/* implicit */unsigned int) -1231301344))))) ? (arr_1 [i_5 + 1]) : (min((arr_1 [i_5 - 3]), (arr_1 [i_5 - 1])))));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [19LL] [19LL] [19LL] [19LL])))) * (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (2717890060U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                        arr_16 [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((int) arr_5 [i_0] [i_1] [i_5 + 1])), ((-(((/* implicit */int) (unsigned short)65511))))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_19 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))) / (4294967280U)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) (~(min((min((((/* implicit */long long int) arr_22 [i_8] [i_7] [i_0] [i_0])), (0LL))), (((/* implicit */long long int) (~(var_3))))))));
                                var_15 = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)106)) != (((/* implicit */int) (short)-16753)))))))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((-28) + (2147483647))) << (((1) - (1)))))))) ? (var_4) : (((/* implicit */unsigned long long int) (-(arr_11 [i_0] [i_0] [i_0]))))));
                                arr_27 [i_0] [(unsigned short)7] [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                    var_17 += ((/* implicit */unsigned int) arr_6 [i_6] [i_0] [i_0]);
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(unsigned short)18])) : (((/* implicit */int) var_10))))), (max((((/* implicit */long long int) var_8)), (29LL))))));
                }
                arr_29 [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 16628749741404693773ULL)) && (((/* implicit */_Bool) 16884865701799826802ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) var_1)), (18446744073709551607ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3048666402U))))));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_9)) ^ (((21) >> (((((/* implicit */int) var_1)) - (13650))))))), (((/* implicit */int) max(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */_Bool) 29LL)) && (((/* implicit */_Bool) -6LL)))))))));
    var_20 &= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned short) var_0))))), (var_4))), (var_11)));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_1)))), ((+(((/* implicit */int) var_5))))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (18446744073709551608ULL))))))))));
}
