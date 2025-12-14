/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181982
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) var_1))));
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (~((+(var_3)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */int) max((var_13), ((+(((/* implicit */int) var_6))))));
                        arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((var_4) + (2147483647))) >> (((4294967295U) - (4294967270U))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_2 - 3] [i_2 + 3])))) : (max((((/* implicit */unsigned int) (unsigned char)228)), (56225188U)))));
                    }
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) | (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) arr_5 [i_1]))))), (((/* implicit */int) arr_1 [i_1] [i_1])))))));
                        var_15 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)18)) ? (var_2) : (arr_13 [i_0] [(unsigned short)2] [i_4])))))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) : (arr_16 [i_0] [i_1] [i_2 - 1] [i_4] [i_5 - 2]))) / (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
                            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_7)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) max(((~(var_3))), ((+(var_2)))));
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)102)))))));
                            arr_19 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_4);
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (3958707991U)))) & (9915427337223345792ULL))) | (((/* implicit */unsigned long long int) ((int) (unsigned char)75)))));
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((10127653659269768513ULL) & (0ULL)))) ? (((((/* implicit */int) (unsigned char)66)) % (((/* implicit */int) (short)-11642)))) : (((/* implicit */int) (unsigned char)189))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) min((var_0), (((/* implicit */unsigned long long int) var_6)))))) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_5 [i_2 + 1])))))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned short)30556))))) + (16383ULL))), (min((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */unsigned long long int) 5667764077019317255LL)) : (12163221393319422331ULL))), (((/* implicit */unsigned long long int) ((signed char) var_3))))))))));
                        }
                    }
                    var_23 = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 2] [i_0] [i_9] [i_9] [i_9])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                                var_25 = ((/* implicit */unsigned int) var_3);
                                var_26 = ((/* implicit */int) max((var_26), ((~((-(((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) var_1)))))))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_8 [3LL] [i_8] [i_2] [i_1] [i_0]), (((/* implicit */short) var_1))))) != (((((/* implicit */int) var_1)) * (((/* implicit */int) var_6))))))), ((~(var_8))))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_22 [i_2 + 3] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 3]) : (arr_22 [i_2 + 3] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2] [i_2 + 3])))) ? (((/* implicit */long long int) (+(var_4)))) : (arr_22 [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 3])));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) != (arr_26 [i_0] [i_1]))))) - (((arr_26 [i_0] [i_1]) >> (((arr_26 [i_0] [i_2 - 1]) - (9548526829455000539ULL)))))));
                }
            } 
        } 
    } 
}
