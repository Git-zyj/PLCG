/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155640
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */long long int) 3315118036U);
                    var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                }
                arr_9 [i_0] [i_0] [9] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                arr_16 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)1920)) << (((979849251U) - (979849248U)))))))) : (((((/* implicit */unsigned long long int) ((979849277U) / (((/* implicit */unsigned int) 1701409244))))) | (arr_15 [i_3] [i_4])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) 16847193913406499914ULL)) ? (((/* implicit */int) (unsigned short)57342)) : (arr_13 [i_5] [i_4] [i_3]))), (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) (unsigned short)53067)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_15 = arr_3 [i_3] [i_4] [(unsigned short)5];
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 167737827)) ? (((/* implicit */unsigned long long int) -1089081642)) : (1599550160303051703ULL)))) ? (((/* implicit */unsigned long long int) 979849259U)) : (14ULL)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_7 [i_3] [i_4] [i_4] [(unsigned short)10]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)196)) && (((/* implicit */_Bool) 3315118036U)))))))))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) (unsigned char)190)) : (-1701409224)))) & (((((/* implicit */_Bool) arr_4 [i_3] [i_4] [i_8])) ? (arr_1 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_13 [6] [i_3] [i_3])))))))));
                    arr_26 [i_4] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_3] [i_4])) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_4] [i_8] [i_8] [i_8] [i_3] [i_3])))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */int) (!(max(((_Bool)1), (((var_3) == (((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */unsigned short) ((var_10) - (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-68)) - (((/* implicit */int) var_0))))) : (((1392458503729700375ULL) * (((/* implicit */unsigned long long int) 0))))))));
}
