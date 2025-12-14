/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124531
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))), (0)));
                            var_21 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)251), ((unsigned char)0)))) / (((/* implicit */int) arr_1 [i_0] [(unsigned short)4]))))), ((-(((long long int) arr_2 [8U]))))));
                            var_22 += ((/* implicit */long long int) arr_2 [(unsigned short)8]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        {
                            var_23 -= ((/* implicit */signed char) ((unsigned char) ((-4194304) == (((/* implicit */int) (unsigned char)251)))));
                            arr_13 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_24 += ((((/* implicit */_Bool) var_1)) ? (min((max((var_3), (((/* implicit */unsigned int) arr_17 [i_7] [i_7] [1U])))), (((/* implicit */unsigned int) (unsigned char)5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                                arr_28 [i_6] [i_6] [i_7] [6] [i_8] [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)90)) * ((+(((/* implicit */int) arr_14 [i_6])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            {
                                arr_35 [i_6] [i_6] [i_6] [i_12] [i_12] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251))))))), ((~(min((((/* implicit */int) arr_19 [i_6] [11ULL] [i_11])), (1611894530)))))));
                                var_25 = ((/* implicit */unsigned short) max((arr_26 [i_7 + 1] [i_8 - 1]), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_7 + 1])))))));
                                arr_36 [i_6] [i_6] [i_8 - 1] [i_8] [i_12] [i_8] = ((/* implicit */_Bool) ((unsigned char) (signed char)92));
                                arr_37 [i_12] [(signed char)9] [i_8] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)92))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) > (max((((/* implicit */long long int) (unsigned short)58047)), (-6697781915976842995LL))))))) : (((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_7 - 1])) ? (arr_21 [i_8 - 1] [i_7 + 1]) : (arr_21 [i_8 - 1] [i_7 + 1])))));
                                arr_38 [i_6] [i_6] [(signed char)8] [0LL] [i_12] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 12; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 4; i_14 < 11; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)20377)) / (((/* implicit */int) (unsigned char)107))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) -1611894531))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)4099))))) : (((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) ((-6697781915976843010LL) == (((/* implicit */long long int) arr_40 [4LL] [i_13]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
