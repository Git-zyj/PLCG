/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102011
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
    var_14 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_4 [i_0 - 1])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)127)));
                        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-126)), ((-((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))))));
                        var_17 = ((/* implicit */unsigned int) min((((arr_10 [i_3] [(signed char)3] [i_2 - 2] [i_1 - 1] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])))))) : (((arr_5 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))))))), ((+(arr_2 [i_0 - 1])))));
                        arr_11 [i_2 - 2] [i_3] [i_2] [i_3] = ((/* implicit */signed char) arr_4 [i_0 - 1]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) arr_5 [i_0 - 1] [i_0 - 1] [i_5 + 2] [(_Bool)1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0 - 2] [(signed char)5] [i_0 - 2] [i_0] [i_0] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-126)), (-1398851224)));
                            var_19 = ((/* implicit */int) var_0);
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12854779737622157003ULL)))) ? (arr_12 [1ULL]) : (((unsigned long long int) 1211860216))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_11))));
                            var_23 *= ((arr_6 [i_8 - 1] [i_5 - 1] [i_0 - 2]) + ((~(var_12))));
                        }
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_31 [i_4] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) arr_1 [i_5 + 1] [i_0 + 1]);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? ((~(((unsigned long long int) arr_10 [i_9] [i_6] [i_5 - 1] [i_4] [i_9])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) (signed char)125))))), (arr_26 [i_0 + 1])))))));
                            arr_32 [i_0] [i_6] [i_5 + 3] [i_6] [i_9] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (min((var_8), (((((/* implicit */_Bool) (signed char)-48)) ? (var_1) : (((/* implicit */int) (_Bool)1))))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [(_Bool)1] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-68)) ? (1211860200) : (((/* implicit */int) (short)5045)))) : ((-(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (min((var_12), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                        }
                        var_25 = (~(((/* implicit */int) var_9)));
                        arr_34 [i_6] [(signed char)1] = arr_6 [i_0] [i_0] [i_6];
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_6] [i_5 + 2] [i_4] [i_6])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_14 [i_0])) : (min((arr_22 [i_6] [i_5] [i_0] [i_0] [i_0] [i_6]), (((/* implicit */int) arr_20 [i_0 - 2] [i_4] [i_5] [i_6])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_4] [i_5])), (var_12)))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6])) : (((/* implicit */int) var_11))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0 - 2] [(signed char)4] [i_0 + 1] [i_0 - 2] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_10] [i_5] [i_5]))) : (18446744073709551607ULL)))));
                        var_27 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [(signed char)0]);
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] [(unsigned char)3] [i_11] = ((/* implicit */int) (_Bool)1);
                        var_28 &= ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0] [(signed char)2] [i_5 + 3] [i_0 - 2] [i_11 - 1])) * (((/* implicit */int) arr_27 [i_0 + 1] [8ULL] [i_5 - 1] [i_0 - 1] [i_11 - 1]))));
                    }
                    arr_44 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) (-2147483647 - 1))))) ? ((~(arr_40 [0ULL] [i_4] [i_4] [0ULL] [0ULL]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4096)) ? (((/* implicit */int) arr_35 [i_0] [(unsigned char)3] [1ULL] [i_4] [i_4] [i_5])) : (((/* implicit */int) (short)32767))))) & (min((((/* implicit */unsigned long long int) arr_37 [i_4] [i_4] [(short)0] [2] [i_5 + 1] [i_5 + 1])), (3784928501587491042ULL)))))));
                    arr_45 [i_0] = ((/* implicit */short) var_2);
                }
            } 
        } 
        arr_46 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4115)) ? (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (3784928501587491042ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5016))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48)))))));
    }
}
