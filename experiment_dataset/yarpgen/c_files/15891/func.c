/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15891
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_6 [i_2] [i_2] [i_1])))))), (((((/* implicit */_Bool) (unsigned char)7)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)219))))))));
                            arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (17158644024102395809ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) + (var_3)))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : ((~(((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                            var_11 = arr_3 [i_1];
                            var_12 += arr_9 [i_2] [i_2] [(_Bool)1] [i_2];
                            arr_12 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_2 - 2] [i_2] [i_2 + 1]);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) -221647559);
                var_13 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)219)) == (((/* implicit */int) (short)-18985))))), (max((((/* implicit */unsigned long long int) var_0)), (var_8)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) (unsigned short)35777);
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 4) 
                        {
                            {
                                arr_28 [i_4] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */signed char) max((1306104050), (((/* implicit */int) (signed char)-101))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_18 [i_5 - 2] [i_6 + 3] [i_8]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3)))))))) : (arr_22 [i_4] [i_4]))))));
                                var_16 = ((/* implicit */signed char) arr_18 [i_5 + 2] [i_5 + 2] [(short)2]);
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) var_1)) : (arr_7 [18LL] [i_5] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17128))) : (arr_15 [i_5 + 1] [i_6 + 2])))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)8] [(unsigned char)8]))) | (arr_20 [i_4] [i_6] [i_8]))), (((/* implicit */unsigned long long int) max(((unsigned short)35777), ((unsigned short)29760))))))));
                                arr_29 [i_4] [i_5 + 2] [(signed char)3] [i_6] [i_5 + 2] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)27106))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(signed char)9] [(signed char)9])) || (((/* implicit */_Bool) arr_20 [i_4] [i_6] [i_4]))))) : (((/* implicit */int) max((((signed char) arr_0 [i_6])), ((signed char)-60))))));
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_4] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_4] [i_6] [i_6] [i_6 + 3])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
}
