/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114580
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
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)10] [(unsigned char)10]))));
                arr_6 [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 + 1]);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) -1206915677);
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) arr_0 [i_2]));
        arr_11 [i_2] = ((/* implicit */unsigned int) 1206915700);
    }
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_22 [i_3] [i_3] [i_5 - 1] = ((/* implicit */long long int) var_4);
                    arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_20 [i_3] [i_3]);
                    arr_24 [i_3] [i_3] [i_3] [i_3] = (~(arr_16 [i_3] [i_4]));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((arr_12 [i_4]), (((/* implicit */long long int) arr_18 [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_8)))))) : (((((/* implicit */_Bool) -1861341812281489152LL)) ? (1861341812281489176LL) : (((/* implicit */long long int) arr_14 [i_3]))))));
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_6] = ((((/* implicit */_Bool) ((short) min(((unsigned char)109), (((/* implicit */unsigned char) var_11)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2])))) : (((/* implicit */int) var_12)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                    {
                        var_19 = (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 1348698343612743741ULL))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            arr_34 [i_7] [i_7] [i_5] [i_4] [i_7] = ((/* implicit */signed char) var_3);
                            arr_35 [i_3] [i_7] [i_3] [i_7] [i_7] = ((/* implicit */unsigned short) var_0);
                            arr_36 [i_8] [i_4] [i_7] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)231))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_5] [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) -1LL))))) ? (((/* implicit */int) ((_Bool) (signed char)125))) : (((/* implicit */int) var_11))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_39 [i_7] = min((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -8603628145728384173LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (9U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_20 [i_4] [i_5 - 2])))))))), (((/* implicit */unsigned int) var_8)));
                            arr_40 [i_3] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((signed char) (short)-15327)))))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((arr_17 [i_3]), (((/* implicit */short) var_7))))) ? (((/* implicit */long long int) var_13)) : (((((/* implicit */_Bool) 14U)) ? (-4641403765624250734LL) : (((/* implicit */long long int) arr_14 [i_4])))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_26 [i_5] [i_5 + 2] [i_5 - 1] [i_5])))))));
                        }
                        arr_41 [i_3] [i_7] [i_5] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                        arr_42 [i_7] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (min((((/* implicit */long long int) var_12)), (arr_21 [i_5 + 1] [i_5] [i_5 - 1] [i_5])))));
                        var_22 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)33376)), (min((((/* implicit */unsigned int) var_8)), (arr_25 [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5])))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_5 + 2]) : (((/* implicit */long long int) ((var_13) - (((/* implicit */int) (unsigned short)65527))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_24 = ((/* implicit */unsigned short) var_1);
                    }
                }
            } 
        } 
        arr_45 [i_3] [i_3] = ((/* implicit */signed char) var_7);
        arr_46 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) < (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) 183921361)) ? (((/* implicit */int) arr_37 [i_3])) : (((((/* implicit */_Bool) (unsigned char)137)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_20 [i_3] [i_3])))))) : (((((/* implicit */_Bool) ((long long int) (signed char)-25))) ? (((/* implicit */int) ((short) 1U))) : (max((var_13), (((/* implicit */int) arr_20 [i_3] [i_3]))))))));
        arr_47 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_43 [i_3] [i_3] [i_3] [i_3] [0U])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_4)));
    }
}
