/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103469
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3857476206791596966LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32451))) : (var_8)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 160806317U)))) : (min((var_6), (8391920032230428269ULL)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(-437307915)));
            var_17 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) -437307931)))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_4))));
            var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_4 [i_0] [i_0] [i_1]))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_15))));
        }
        var_20 -= ((/* implicit */short) var_15);
    }
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((arr_4 [i_2] [i_2 - 4] [i_2]) || (((/* implicit */_Bool) arr_1 [i_2 - 2] [i_2 - 2]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [11U] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (var_3)))) && (((/* implicit */_Bool) arr_8 [(unsigned char)4]))));
        var_22 -= (!(((/* implicit */_Bool) 8391920032230428268ULL)));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [(unsigned char)5] [i_3]))));
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2])))))));
        }
        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            arr_16 [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4 - 2])) ? (((unsigned int) (unsigned short)52723)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 1])))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1052322154)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (9163835738660229238LL) : (((/* implicit */long long int) arr_3 [i_2] [i_2] [i_4])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 7; i_5 += 3) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) -1249617889);
        /* LoopSeq 3 */
        for (unsigned int i_6 = 4; i_6 < 9; i_6 += 3) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (~(arr_3 [i_5] [i_5 + 2] [i_6 - 1]))))));
            var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_5]))))) : (((/* implicit */int) arr_1 [i_5] [i_6]))));
        }
        for (long long int i_7 = 3; i_7 < 8; i_7 += 1) /* same iter space */
        {
            arr_24 [4ULL] |= ((/* implicit */unsigned long long int) var_9);
            var_28 = ((/* implicit */unsigned char) (-(8391920032230428245ULL)));
        }
        for (long long int i_8 = 3; i_8 < 8; i_8 += 1) /* same iter space */
        {
            var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)139))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)209)) + (((/* implicit */int) (signed char)-54)))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (short i_10 = 3; i_10 < 8; i_10 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) ((3342255349222244340LL) != (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_10] [i_10 + 1] [i_10 - 3])))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned char)27)))))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_0))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_8 - 2] [i_8 - 1] [i_8 + 2])) ? ((-(((/* implicit */int) arr_1 [i_9] [i_10])))) : (((/* implicit */int) arr_17 [i_10 + 2] [i_8 + 2]))));
                        var_34 = ((/* implicit */unsigned int) ((int) arr_10 [i_10 - 1]));
                    }
                } 
            } 
        }
        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) ((((/* implicit */long long int) 1630114835U)) != (arr_20 [i_5] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_26 [i_5] [i_5] [(signed char)1])) ? (-1304127992) : (((/* implicit */int) arr_29 [i_5] [(unsigned char)2] [(unsigned char)2] [i_5]))))));
        arr_33 [i_5] [i_5] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19908))) : (arr_20 [i_5] [i_5 + 1] [i_5]));
        arr_34 [i_5] [i_5] = ((/* implicit */short) -2097859748);
    }
    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_36 [i_11])))) ? ((~(arr_36 [i_11]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41749))) | (arr_36 [i_11])))));
        arr_38 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */long long int) arr_35 [i_11])) : (arr_36 [i_11])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)8313))))) : (((((/* implicit */_Bool) arr_36 [i_11])) ? (arr_37 [i_11] [i_11]) : (arr_37 [i_11] [i_11])))));
    }
}
