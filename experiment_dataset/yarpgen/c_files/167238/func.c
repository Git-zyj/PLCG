/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167238
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_11)))), (((((16383U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)1))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [16LL])) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_6 [i_2] [17ULL] [i_0])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)40269)))) != (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)65531)))))))));
                    var_14 = ((/* implicit */int) (~(arr_3 [i_1] [i_0])));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0 - 1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [16] [(short)15])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_2 + 1] [i_2 - 1]))) : (max((arr_3 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_0)))))))))));
                }
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) (unsigned short)65534);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)18969)) | (((/* implicit */int) ((((arr_11 [5] [i_1] [i_3] [i_4]) <= (((/* implicit */int) var_12)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) != (arr_3 [i_1] [(unsigned char)10]))))))));
                            arr_18 [i_0] [i_0] [1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        for (short i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                var_18 |= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65534)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_6])))))))));
                arr_24 [i_6] = ((/* implicit */signed char) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))));
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -134217728)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))), (((13781530856216682135ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65533)))))))));
}
