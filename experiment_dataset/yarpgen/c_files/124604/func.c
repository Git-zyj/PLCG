/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124604
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((~(var_15)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_1 [i_0]);
                    var_18 = ((/* implicit */unsigned char) ((((long long int) (short)-20021)) | (var_4)));
                    var_19 |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_11)) ? (arr_6 [i_2] [i_0] [i_0]) : (110173121))) + (2147483647))) << (((((((((/* implicit */_Bool) (signed char)100)) ? (arr_7 [i_0] [i_0] [i_1] [i_2 - 1]) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))) + (4908031316118758091LL))) - (26LL)))));
                }
            } 
        } 
        arr_8 [i_0] = ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_6 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_22 [i_4] = ((/* implicit */unsigned short) arr_9 [i_6]);
                        arr_23 [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_5 + 1] [i_5] [i_5 - 2])), (arr_15 [i_5 + 1] [i_5] [i_5 - 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2]))))) : (((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_5] [i_5 - 1])) ? (((/* implicit */long long int) var_0)) : (var_13)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((unsigned short) (short)20013));
        arr_24 [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (short)20013)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (short)20002))))), (((/* implicit */long long int) arr_16 [i_3])))), (((/* implicit */long long int) (unsigned char)255))));
        /* LoopSeq 4 */
        for (short i_7 = 1; i_7 < 22; i_7 += 4) 
        {
            arr_28 [i_3] [i_7] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) & (var_11)));
            var_21 = (+(-2940548456256943388LL));
            var_22 = ((/* implicit */int) (short)-20021);
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_8 + 2])) ? (arr_31 [i_8 - 1] [i_8 + 1] [i_8 - 1]) : (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3]))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_36 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */int) (short)-20038)) + (var_0))) : (((/* implicit */int) var_9)))));
            arr_37 [i_3] [i_9] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) 775569223)) || (((/* implicit */_Bool) var_12))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (var_13))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)31177)))))));
        }
        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) var_1))))) || (((((/* implicit */_Bool) arr_32 [(_Bool)1] [(_Bool)1] [i_10])) || (((/* implicit */_Bool) var_3)))))))));
            arr_40 [i_3] [i_3] |= max((arr_26 [i_3]), (var_13));
            var_26 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_10])) || ((_Bool)1))));
        }
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
    {
        arr_45 [i_11] = ((/* implicit */short) (_Bool)1);
        var_27 = ((/* implicit */short) max((3693475565565636137LL), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (9223372036854775807LL)))))))));
    }
    /* vectorizable */
    for (signed char i_12 = 1; i_12 < 7; i_12 += 4) 
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_12])) ? (-2147483626) : (((/* implicit */int) arr_41 [i_12 + 3]))));
        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_12]))));
        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_19 [i_12 + 3])) : (((/* implicit */int) arr_19 [(unsigned char)0]))));
    }
    var_31 = ((/* implicit */int) var_16);
    var_32 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)175))))), (var_13))), (((/* implicit */long long int) var_0))));
    var_33 = ((/* implicit */int) var_15);
}
