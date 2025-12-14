/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165683
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 *= min((min((max((8795824586752ULL), (8795824586752ULL))), (18328521133794891805ULL))), (((/* implicit */unsigned long long int) (short)-158)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (arr_0 [i_0 - 1])));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(arr_3 [20ULL] [20ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0)))))))) ? (var_3) : (((((var_10) <= (((/* implicit */unsigned int) arr_1 [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2 + 2]))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) min((arr_6 [i_0] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) arr_7 [i_0] [8ULL] [8ULL]))))) << (((arr_3 [i_0 - 1] [i_0 - 1]) - (2169992252823037347ULL))))))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_3 + 2])))), (((/* implicit */int) arr_0 [i_3 + 2]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_15 [i_4] [i_4] [(short)1]), (arr_15 [i_4] [i_4] [i_5]))))) : (var_2)));
                    var_23 = (i_4 % 2 == zero) ? (((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) arr_0 [i_3 + 2])) + (2147483647))) << (((arr_16 [i_4] [i_4] [i_5]) - (4292314260U))))))) : (((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) arr_0 [i_3 + 2])) + (2147483647))) << (((((arr_16 [i_4] [i_4] [i_5]) - (4292314260U))) - (2252755155U)))))));
                    var_24 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_16 [i_5] [i_3 + 2] [i_3])) ? (arr_16 [i_5] [i_3 + 3] [i_3 + 3]) : (arr_16 [i_5] [i_3 + 3] [i_5]))), (((unsigned int) var_8))));
                    var_25 &= ((/* implicit */signed char) var_6);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */_Bool) (~(((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (var_3))))))));
    /* LoopSeq 1 */
    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) arr_17 [i_6 - 2] [i_6 - 1])), (arr_13 [i_6 - 1] [i_6 - 2])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(unsigned short)6] [17U])) | (((/* implicit */int) arr_4 [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_14 [i_6] [i_7])))))) : (arr_16 [i_6] [i_6 - 2] [i_6]));
            arr_21 [i_6] [i_6] = ((/* implicit */_Bool) arr_12 [i_6] [i_7]);
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                arr_24 [i_6] = ((/* implicit */_Bool) var_17);
                arr_25 [i_7] [i_7] [i_6] = ((/* implicit */_Bool) (-(8795824586752ULL)));
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 - 3] [i_6 - 3] [i_6]))) & (arr_12 [i_6] [i_6 - 2])));
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_6] [(_Bool)1] [i_6 - 3])) ? (((/* implicit */unsigned long long int) arr_16 [14U] [i_7] [14U])) : (((((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_9])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))))))))));
                var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [6U] [6U] [6U])) ^ (((/* implicit */int) ((arr_26 [i_7] [i_7] [i_7] [i_6]) > (var_3))))));
                arr_29 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)6162));
            }
            arr_30 [16U] [16U] [i_7] |= ((/* implicit */unsigned long long int) arr_1 [i_7]);
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 + 1])) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) arr_4 [i_10]))))) ? (((((/* implicit */int) arr_4 [i_6 - 3])) / (((/* implicit */int) arr_4 [i_6 - 3])))) : (((((/* implicit */_Bool) arr_4 [i_6 - 3])) ? (((/* implicit */int) arr_4 [i_6 - 3])) : (((/* implicit */int) arr_4 [i_6 + 1]))))));
            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_18), (var_4)))) ? ((-(arr_10 [i_6] [i_6 + 1]))) : ((+(arr_10 [i_6] [i_6 - 2]))))))));
            var_34 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_10])), (arr_13 [i_6] [i_10])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_6] [i_10] [i_10]))))) : (arr_10 [i_6] [i_10]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_10])))))));
        }
        var_35 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_6] [(_Bool)1] [i_6])) - (50970)))))));
    }
    var_36 = ((/* implicit */int) var_12);
}
