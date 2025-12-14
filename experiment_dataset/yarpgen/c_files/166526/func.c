/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166526
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
    var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)60)) == (((/* implicit */int) (unsigned char)200))));
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */unsigned int) 106399711)) : (2047U)))) || (((/* implicit */_Bool) max((var_11), (var_14))))))), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? ((-(4294965243U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -106399686))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) max((((_Bool) var_6)), ((!(((/* implicit */_Bool) var_6))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */signed char) var_11);
                                var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((4294965241U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16087)))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 - 1] [i_3])) ? (arr_13 [i_1] [i_2 - 1] [i_3] [i_4]) : (arr_13 [i_0] [(unsigned short)2] [i_2] [1]))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40657))) - (arr_16 [10LL] [11] [i_2] [2ULL] [i_2] [2ULL]))))))));
                            }
                            var_22 *= ((/* implicit */unsigned long long int) (-(max((arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [8ULL] [i_1]), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_2 - 1] [i_1] [(unsigned short)12]))))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)14069)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_3 [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_0])), (var_3)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_0)))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)24879)), (4294967295U)))) ? (max((((/* implicit */int) arr_9 [i_0] [i_1] [i_1])), (arr_5 [i_0]))) : (max((((/* implicit */int) var_2)), (arr_5 [9LL])))))) ? (max((((((/* implicit */unsigned long long int) var_3)) + (var_0))), (((((/* implicit */_Bool) arr_23 [i_6] [i_1] [i_5] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15011))) : (var_7))))) : (max((10315606870890574786ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned char)2] [i_0] [i_0] [i_0]))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((short) (((!(var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))) : (4294965248U))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
