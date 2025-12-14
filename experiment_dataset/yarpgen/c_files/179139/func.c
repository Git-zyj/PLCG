/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179139
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
    var_19 = 3951861264U;
    var_20 &= ((/* implicit */unsigned int) ((unsigned long long int) min((((long long int) 246774724U)), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26750)) ? (246774745U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2818)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_1] [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_2] [i_0])) ? (-530315910) : (((/* implicit */int) arr_4 [(unsigned char)0])))))), (((/* implicit */int) ((unsigned char) 796868694U)))));
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32761)))))) * (min((((/* implicit */unsigned long long int) ((unsigned char) 3951861264U))), (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (14596662735858872738ULL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */short) (signed char)27);
                                arr_25 [i_0] [i_7 + 3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-13229)), (arr_5 [10U])));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)129)))), (((/* implicit */int) max(((short)23686), ((short)5295))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6949454974624692317LL)) ? (8978618702675278941ULL) : (((/* implicit */unsigned long long int) arr_11 [i_5] [i_0] [i_5] [i_1 - 1] [i_0]))))) ? (2527945415523858671LL) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)114), (((/* implicit */signed char) (_Bool)1))))))))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */int) arr_9 [i_6] [i_1] [i_0 - 1])), (((((/* implicit */_Bool) 628894950U)) ? (arr_11 [(short)7] [i_7] [i_7 + 4] [i_6 - 1] [i_5]) : (((/* implicit */int) (signed char)-100)))))))));
                                var_24 += ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_11 [i_6] [i_0 + 1] [i_6] [i_6] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)114), ((signed char)103))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23686))) : (arr_6 [10] [10] [i_6 - 3] [0U]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
