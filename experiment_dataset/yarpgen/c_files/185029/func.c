/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185029
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */int) min((2133724965280171621LL), (((/* implicit */long long int) (_Bool)1))));
                    var_15 = (+(((((var_4) + (9223372036854775807LL))) << (((arr_7 [i_0] [i_1] [i_2]) - (1967508897))))));
                    var_16 = ((/* implicit */unsigned short) ((_Bool) (signed char)0));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) var_8);
        arr_10 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)0))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [9]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / (((/* implicit */int) ((short) var_8)))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (var_14) : (var_13)))))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) / (4800308103942992551LL)))))) : (((((/* implicit */_Bool) 4222803808672032405LL)) ? (7204369961696588831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114)))))));
                    arr_27 [i_4] [i_0] [i_4 + 1] = ((/* implicit */int) (((_Bool)0) ? (min((var_6), (arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4 - 1] [i_4 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)19] [9])))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_18 = (i_0 % 2 == 0) ? (((/* implicit */signed char) (+((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (+(var_12)))) : (((((var_4) + (9223372036854775807LL))) >> (((arr_3 [i_0] [i_0]) - (15630264853442995810ULL)))))))))) : (((/* implicit */signed char) (+((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) (+(var_12)))) : (((((var_4) + (9223372036854775807LL))) >> (((((arr_3 [i_0] [i_0]) - (15630264853442995810ULL))) - (8083497903835689155ULL))))))))));
                        arr_30 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (5568630181673585038LL) : (-6699541821794793560LL)))) ? (((/* implicit */int) (signed char)-35)) : (0))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    arr_36 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned short)28878)), (-27))), (-27)));
                                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_40 [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_8] [i_11 - 1] [i_11 - 1] [i_8])))));
                                var_21 *= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_13 [i_0] [3] [i_10])), (((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_8] [i_9] [i_10] [i_11]))) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_12 [i_0] [i_0])))))))));
                                arr_41 [i_0] [i_10] [i_10] [i_9] [i_8] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) min(((short)-17761), (((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_42 [i_0] [i_8] [i_9] [i_10] [i_11 + 1] = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_14)))))) + (((/* implicit */int) ((arr_22 [i_11 - 1] [i_11] [i_11] [i_0] [i_11]) != (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_9])) - (arr_2 [i_8] [i_11 + 2]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_12 = 3; i_12 < 12; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) arr_5 [i_12] [i_13 + 1]))))));
                        var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (0U)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)70)), (var_14)))) ? (((int) 2013332272)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))))));
    }
    var_25 = ((/* implicit */long long int) var_14);
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_9))));
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (signed char)-20)) : (var_2))))));
}
