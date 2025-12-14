/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12685
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
    var_14 = ((((/* implicit */int) var_1)) * (((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 8; i_3 += 2) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [3LL] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 4] [9LL] [i_1])))) : (((/* implicit */int) ((unsigned char) -807862000))));
                        arr_9 [i_1] [i_1] [i_2] [i_3] = arr_7 [i_1] [i_1] [i_2] [i_3];
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_6] |= ((/* implicit */unsigned long long int) var_13);
                        var_16 = ((/* implicit */unsigned short) 3043965911U);
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)4))));
                    }
                    var_18 = ((/* implicit */signed char) var_7);
                    arr_18 [6LL] [i_5] [i_5] = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)49152)), (3043965900U)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) var_3);
        var_20 = ((/* implicit */short) (+(max((((((/* implicit */int) (unsigned short)32760)) | (((/* implicit */int) (short)2032)))), (((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 4]))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        var_21 = ((/* implicit */int) ((short) (+(((/* implicit */int) var_9)))));
        arr_23 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5181))) : (4294967295U)));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_21 [i_7] [i_7])) > (((/* implicit */int) var_12)))))));
        arr_24 [i_7] |= (~(-2075842854));
        var_23 = ((/* implicit */_Bool) ((((var_8) ? (var_2) : (7))) % (((/* implicit */int) var_7))));
    }
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        var_24 = ((/* implicit */long long int) (((!((_Bool)1))) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)52480))))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_10 = 2; i_10 < 19; i_10 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) arr_27 [i_8]);
                arr_32 [i_8] [i_8] [i_8] [i_10 - 2] = ((/* implicit */unsigned int) (((((-(arr_22 [i_10 - 2] [i_8]))) + (2147483647))) >> (((/* implicit */int) var_8))));
            }
            var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)60)) && ((_Bool)1))) ? (max(((-(-2075842859))), (-7))) : (((/* implicit */int) (unsigned char)3))));
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((signed char) var_12))), ((+(arr_22 [i_8] [i_9]))))))));
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) ^ (max((arr_22 [i_8] [i_8]), (arr_22 [i_8] [i_8])))));
    }
    var_29 = ((/* implicit */unsigned int) ((short) max((9353464805539449651ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)27639))))))));
    var_30 = ((/* implicit */unsigned int) (_Bool)1);
}
