/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117170
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_8)), (var_14)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 534861318863938571LL)) != (4795512315097458670ULL))))) & (min((2305843009213693952ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (max((((((/* implicit */_Bool) arr_3 [i_1] [(short)3])) ? (((/* implicit */int) arr_1 [(signed char)11])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [5ULL])))) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_1 - 1] [i_1] [i_0 + 1])), (var_4))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */int) min((arr_4 [i_0] [(unsigned char)11] [i_0 + 1] [i_0 + 1]), (((/* implicit */signed char) arr_1 [(short)9]))))) | (((/* implicit */int) var_11)));
                    arr_7 [i_0 + 1] [i_0] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_1])) == (((/* implicit */int) var_17)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_3 [(unsigned char)12] [i_0 + 1])))) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (534861318863938564LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_0 + 1])))))) ? (((/* implicit */unsigned long long int) -534861318863938545LL)) : (var_15)))));
                    arr_8 [i_1] = ((/* implicit */unsigned int) min((-419726494), (((/* implicit */int) (short)4779))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_0 + 1])), ((unsigned char)86)))) : (((/* implicit */int) max((arr_2 [i_1 + 2] [i_1] [i_0 + 1]), (arr_2 [i_1 + 2] [i_1] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (signed char i_3 = 2; i_3 < 16; i_3 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0])) | (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [(unsigned short)18] [i_0])))))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((var_15) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) + (2147483647))) << (((var_7) - (1839657832))))))));
                    arr_13 [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1 + 1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                arr_19 [(_Bool)1] [i_4] [3ULL] = ((/* implicit */signed char) arr_15 [(_Bool)0] [i_5]);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4779)) ? (((/* implicit */int) (short)-4779)) : (((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10165)) ? (var_0) : (arr_15 [i_4] [i_4])))))))) : ((-(arr_15 [(unsigned char)11] [i_5])))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_15)));
}
