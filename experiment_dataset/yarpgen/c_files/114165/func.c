/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114165
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
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (12299610758147563949ULL))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (12299610758147563949ULL))) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [4] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) + (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [i_2]))));
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((signed char) var_8))) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_11 [i_0 - 2])) | (((((/* implicit */_Bool) arr_11 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) : (var_14)));
                            var_22 = ((/* implicit */int) ((((/* implicit */int) ((signed char) min((var_6), (var_6))))) < (((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [14LL] [i_1 - 2] [i_0])) ? (((((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0])) | (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_24 = ((/* implicit */long long int) arr_4 [i_4] [4] [(unsigned short)16] [i_6]);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) 1515757940)), (16540003225665569746ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_5] [i_5] [(_Bool)1] [i_7] [i_8])))))));
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_24 [i_8] [i_7] [i_7] [i_6] [i_5] [i_4] [i_4])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_7] [i_6] [i_6] [i_5] [i_4] [i_4]))) : (6147133315561987667ULL)))));
                                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)34)))))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_4] [(short)4])), ((+(((/* implicit */int) arr_3 [i_4] [i_4] [i_4]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) var_17);
}
