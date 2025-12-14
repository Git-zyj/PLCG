/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161945
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (unsigned short)62871);
                                var_21 = ((/* implicit */short) (-(var_15)));
                                arr_15 [i_0] [i_1] [i_2] [(signed char)8] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (unsigned short)62859)) : (((/* implicit */int) (short)3985))))) & ((~(arr_11 [i_0] [i_0] [i_2] [i_3] [i_2] [i_4])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7] [i_6] [i_1] [i_1] [(short)2] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_1])) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4378971649416806631LL)) && (var_6))) || (((/* implicit */_Bool) (unsigned short)27208)))))));
                                arr_23 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_21 [i_1]))))), (max((14104033433574382522ULL), (((/* implicit */unsigned long long int) arr_21 [i_1]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            arr_29 [(unsigned short)5] [i_1] [i_8] [i_8] = ((unsigned short) ((unsigned short) min(((signed char)-127), ((signed char)60))));
                            arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                            var_22 = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                arr_31 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)457)) << (((-4378971649416806631LL) + (4378971649416806631LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30477))) : ((~(var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -4378971649416806631LL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(var_4))))));
}
