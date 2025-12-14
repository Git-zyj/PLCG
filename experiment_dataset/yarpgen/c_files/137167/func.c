/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137167
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (short)-30988)) : (((((/* implicit */_Bool) (short)-30990)) ? (((/* implicit */int) (short)-30974)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) min(((unsigned short)14350), ((unsigned short)51194)))) : (((/* implicit */int) ((unsigned char) max((7214900067755462108ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_2] [6ULL] [i_0] = ((/* implicit */long long int) var_17);
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)55720))) ? (((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1] [i_4] [i_3])) ? (arr_9 [i_3 + 1] [i_3 + 2] [i_4] [i_4]) : (arr_9 [i_3 - 1] [i_3 + 2] [i_4] [(signed char)6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [(short)5]))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((short) min((arr_9 [i_2] [i_2] [i_0] [i_1]), (((/* implicit */long long int) (unsigned char)77)))))), ((unsigned short)14354)));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_16 [(unsigned short)10] [i_1] [2ULL] [i_1] |= ((/* implicit */int) max((min((max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [4LL] [4] [(signed char)8])), (4294967282U))), (((/* implicit */unsigned int) ((int) (unsigned short)127))))), (((/* implicit */unsigned int) (signed char)127))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) min((arr_11 [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)-91))))), (max((((/* implicit */short) (signed char)94)), (arr_14 [5] [i_2] [i_1] [i_0])))))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_1] [9LL] [i_5]), (((/* implicit */short) (signed char)-111))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (unsigned short)14344)))))));
                        arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (((unsigned int) (signed char)98))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((unsigned char) var_6));
                        arr_22 [i_0] = ((/* implicit */signed char) max((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 6296850214287896927LL)) : (10460029572811848572ULL))), (((/* implicit */unsigned long long int) (unsigned short)23354)))), (((/* implicit */unsigned long long int) ((unsigned short) (~(379360285)))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)32767)))))) : (((/* implicit */int) max((max(((unsigned short)9800), (((/* implicit */unsigned short) arr_18 [i_0] [i_2] [i_6])))), (((/* implicit */unsigned short) arr_18 [10U] [i_1] [i_1])))))));
                        arr_23 [i_0] [i_6] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) max((arr_12 [i_0]), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) arr_12 [i_1]))));
                        var_25 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_27 [i_0] [i_1] [(short)7] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) arr_12 [i_0])))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned short) ((_Bool) max((((unsigned long long int) (signed char)-104)), (((/* implicit */unsigned long long int) ((short) (unsigned short)23371))))));
                                arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) arr_30 [(_Bool)1] [i_1] [i_7] [i_8] [i_8]);
                                arr_33 [(unsigned short)6] [i_1] [i_7] [(_Bool)1] [i_8] [i_9] |= ((/* implicit */unsigned char) 3530501981400363638ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) var_15);
}
