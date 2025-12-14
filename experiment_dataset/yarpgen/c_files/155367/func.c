/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155367
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
    var_20 -= ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-39)) * (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) ((unsigned char) ((var_8) ? (arr_6 [(short)11] [(short)11]) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)-50)))))))))));
                            arr_8 [i_2] [i_3 + 1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */signed char) var_10)), ((signed char)-39)))), (var_13)))), (var_16)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_11) < (((/* implicit */int) ((short) (unsigned char)117)))))), (((((((/* implicit */_Bool) var_2)) ? (arr_6 [i_4] [11U]) : (((/* implicit */int) var_10)))) - (((/* implicit */int) max(((signed char)38), ((signed char)-79))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) var_4)), (var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_5]))) : (min((((/* implicit */unsigned int) arr_1 [i_0 - 3] [i_0 + 1])), (var_9)))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min(((unsigned char)168), (((/* implicit */unsigned char) (signed char)-1)))))));
                        }
                    } 
                } 
                arr_15 [i_1] [0U] = max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)63))))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) ((var_3) == (((/* implicit */int) var_18))))))), (((int) min((((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])), (arr_11 [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        {
                            arr_20 [i_6] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_3 [i_6 + 1] [i_1])) == (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (unsigned short)2117))))), (min((((/* implicit */long long int) var_8)), (var_12)))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (((5315651936217729933ULL) * (((/* implicit */unsigned long long int) -1084817052)))))))));
                            var_26 = ((/* implicit */signed char) arr_4 [i_7] [i_7 + 2] [i_7 - 1] [i_7 - 2]);
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((max(((+(var_13))), (((/* implicit */unsigned int) arr_16 [i_6 + 1] [i_7 - 1] [i_6 + 1] [i_7 - 2])))), (((((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0 - 1]))) : (arr_3 [0] [i_6]))) / (((((/* implicit */_Bool) arr_14 [i_0] [i_7])) ? (((/* implicit */unsigned int) var_11)) : (var_9))))))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (arr_0 [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) (+((~(var_12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_10);
}
