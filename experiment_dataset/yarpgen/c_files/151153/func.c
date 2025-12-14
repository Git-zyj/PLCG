/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151153
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
    var_19 *= ((/* implicit */unsigned char) (_Bool)1);
    var_20 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((144115188075593728ULL), (((/* implicit */unsigned long long int) var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (144115188075593728ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (144115188075593728ULL));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_3])), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (((0ULL) << (((2251589674U) - (2251589662U)))))))));
                                arr_14 [i_0] [i_3] [i_0 - 1] [i_3] |= ((/* implicit */signed char) (unsigned short)41569);
                                var_22 -= ((/* implicit */short) -1868092220);
                                arr_15 [i_0] [i_0 - 1] [i_4] = ((/* implicit */long long int) max((min((18302628885633957888ULL), (((/* implicit */unsigned long long int) ((4902932128506969536LL) << (((arr_10 [i_0] [i_0] [i_0] [i_0]) - (12665451429155024858ULL)))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) ((signed char) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)0)) : (1846993863))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned int) (~(arr_2 [i_0 - 1] [i_6 - 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23971)) ? (((/* implicit */unsigned long long int) arr_23 [i_1])) : (arr_22 [i_0] [1] [i_5] [i_6 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)41582))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (2043377625U))))))))));
                                arr_24 [i_7] [i_1] [5] [i_1] [i_0 - 1] = ((/* implicit */signed char) (~(((unsigned int) arr_9 [(unsigned short)0] [i_0 - 1] [i_6 - 2] [i_6] [i_7]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            {
                                arr_31 [i_9] [i_1] [i_8] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((arr_22 [i_0 - 1] [i_0 - 1] [(unsigned short)10] [i_0]), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)61137)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (short)-21334)) ? (13912457530078596273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                                arr_32 [i_0 - 1] [i_9] [i_5] [i_8 - 2] [i_9] = (unsigned short)13;
                                arr_33 [i_9] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_11 [9U] [i_9 - 1] [i_8 + 2] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) 1048544U));
            }
        } 
    } 
}
