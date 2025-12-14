/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165733
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (133169152) : (((/* implicit */int) (unsigned char)255))))) ? (2637611846U) : (max((861779444U), (4294967277U)))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_2))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9007199254740991ULL)) ? (arr_1 [(unsigned char)2] [i_0]) : (((/* implicit */int) var_9))))), (arr_3 [i_2] [i_2]))), (max((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (3421233549U))))))));
                    var_21 ^= ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) < (-6085630868433785836LL)));
                                arr_14 [i_0] = ((/* implicit */long long int) (_Bool)1);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((((((/* implicit */_Bool) arr_11 [i_4] [i_3 + 2] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))) : (var_16))) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_2] [i_3] [i_1]), (((/* implicit */short) arr_0 [i_0])))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1])) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_6 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 1])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [i_1])))) ? (((/* implicit */int) max(((unsigned char)95), (((/* implicit */unsigned char) (signed char)-118))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1]) : (arr_5 [i_0]))))))));
                    var_25 -= ((/* implicit */int) min((max((max((var_13), (((/* implicit */long long int) (short)12)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [17LL] [i_1] [(short)1] [17LL])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1]))))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [11U])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(signed char)12])))), (arr_5 [8LL]))))));
                }
            } 
        } 
    } 
}
