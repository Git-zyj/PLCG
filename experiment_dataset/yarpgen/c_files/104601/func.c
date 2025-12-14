/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104601
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
    var_19 = ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [16] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [(signed char)1] [i_0] [i_2])))) ? (((/* implicit */int) ((_Bool) max(((signed char)6), ((signed char)-21))))) : (((/* implicit */int) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) (~(((unsigned int) ((arr_11 [i_0 - 2] [i_1] [i_2] [i_3 - 2] [5]) ? (((/* implicit */long long int) 3686130296U)) : (arr_7 [i_4] [i_0] [i_1 + 2]))))));
                                var_21 = ((long long int) ((((/* implicit */_Bool) (~(var_6)))) ? ((~(((/* implicit */int) var_18)))) : ((~(((/* implicit */int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) arr_15 [(_Bool)1] [(_Bool)1] [i_5 - 1] [(signed char)6]);
                /* LoopSeq 1 */
                for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        arr_26 [i_7] [i_7] = ((/* implicit */short) (((-(1476253116U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((14118841664002139779ULL) > (((/* implicit */unsigned long long int) 1517741493U)))))))));
                        var_23 ^= ((_Bool) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)58228))))));
                    }
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */int) ((5365669645506019113LL) >= (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_15 [i_5] [i_5] [i_6] [(short)8]))))))))) << ((((~(((/* implicit */int) (unsigned char)199)))) + (216))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    for (short i_10 = 3; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) arr_31 [i_5 + 1] [i_5] [i_5] [i_10])) : (((/* implicit */int) arr_31 [i_5 + 1] [i_9] [i_9] [1LL]))))))));
                            arr_34 [i_10] [i_9] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) min((((/* implicit */short) (signed char)-4)), ((short)10583))))), (((int) ((signed char) (short)17248)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6855930268211496986ULL) - (((/* implicit */unsigned long long int) arr_6 [i_5] [i_6] [8U] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_5 - 1]))) : ((~(arr_20 [i_5] [i_6])))))) ? (max((((/* implicit */unsigned int) var_18)), (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        for (signed char i_12 = 2; i_12 < 8; i_12 += 1) 
        {
            {
                arr_40 [i_12] [i_12] = ((/* implicit */short) ((min((arr_3 [i_12 - 2] [i_12] [i_12 + 4]), (arr_3 [i_12 + 3] [i_12] [i_12 - 1]))) * (((/* implicit */unsigned long long int) (~(-601317082249578009LL))))));
                arr_41 [i_12] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -8406841762575019196LL)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) arr_15 [i_11] [i_11] [i_12] [i_12])))))) / (15277860772847253397ULL)));
                var_27 = ((/* implicit */short) var_17);
            }
        } 
    } 
}
