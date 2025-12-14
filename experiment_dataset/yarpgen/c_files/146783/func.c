/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146783
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -169273311)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)107)))));
                var_13 = min((((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) <= (((/* implicit */long long int) arr_0 [i_0])))))) : (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (12U))))), (((/* implicit */unsigned int) var_8)));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) (signed char)-102))));
                            arr_13 [i_1] [i_1] [i_1] [i_3 + 2] = ((/* implicit */_Bool) var_1);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) var_0))) && (((arr_4 [(unsigned char)12]) || (((/* implicit */_Bool) arr_0 [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-7645275382859374051LL), (((/* implicit */long long int) (signed char)-25)))))))) : (max((arr_0 [i_3]), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)62)) : (arr_3 [i_3] [i_1] [i_0]))))))))));
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)11970)) & (((/* implicit */int) var_10))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((((((/* implicit */int) arr_2 [i_5])) | (((/* implicit */int) arr_2 [i_5])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                            var_18 = ((/* implicit */long long int) max((((arr_4 [i_1]) ? (((var_11) ? (((/* implicit */int) (unsigned char)102)) : (1178137864))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (arr_21 [i_0] [i_1] [i_1] [i_5] [7ULL]))))), (((((/* implicit */int) arr_14 [i_1])) * ((+(((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [i_5] [i_0]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_3), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_1] [i_0] [i_1]) : (arr_11 [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_20 -= var_2;
    var_21 = ((/* implicit */unsigned short) var_1);
}
