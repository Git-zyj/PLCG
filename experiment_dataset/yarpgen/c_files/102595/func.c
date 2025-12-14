/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102595
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
    var_19 = 17;
    var_20 = ((/* implicit */signed char) var_13);
    var_21 = ((/* implicit */short) var_6);
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 3])) & (((/* implicit */int) var_5))))) ^ ((((+(var_14))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)28769)) : (((/* implicit */int) (signed char)63)))))))));
        var_23 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)20978)) + (((/* implicit */int) (unsigned short)10577))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)86))))) / ((-(3065377834U)))))) : ((~(((((/* implicit */_Bool) 18446744073709551606ULL)) ? (var_14) : (((/* implicit */unsigned long long int) 67108863))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)47)) * (((/* implicit */int) (unsigned short)28868))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_1] [i_3] [i_3] [i_4] [i_4])) : (((/* implicit */int) var_8))));
                        arr_11 [i_1] [i_3] [i_4] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_4] [i_4]))));
                        var_25 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                        var_26 += ((/* implicit */_Bool) ((var_15) ? ((~(((/* implicit */int) (unsigned char)222)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_4])))));
                    }
                } 
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((3065377824U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) var_10)) - (((unsigned int) var_7)))));
        arr_18 [i_5] = ((/* implicit */_Bool) var_0);
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_27 = ((/* implicit */short) (+(((/* implicit */int) ((((unsigned int) var_14)) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
            arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) (short)-16648)) : (max((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_17)))), (((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
        }
    }
    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */int) (signed char)95))));
            arr_29 [i_7] [i_7] = ((/* implicit */int) (~(((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (short i_12 = 3; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_5);
                                arr_42 [i_12] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-27077))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (8010675671286822973ULL))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_8 [i_7] [i_10 - 1] [i_9]), (((/* implicit */unsigned short) min((var_0), (((/* implicit */signed char) (_Bool)1))))))))));
                    arr_43 [i_10] [i_7] [i_10] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_30 [i_10 - 1] [i_10 - 1] [i_10 - 1])) / (((/* implicit */unsigned long long int) ((arr_34 [i_10 - 1] [i_10 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                {
                    arr_48 [i_7] [i_13] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_6);
                    var_31 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
}
