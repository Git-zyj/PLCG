/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161064
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
    var_10 = ((/* implicit */unsigned int) (~(var_8)));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    var_12 = min((9223372036854775784LL), (171218921215737825LL));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-171218921215737845LL), (-171218921215737815LL)))) ? (arr_1 [i_0] [i_0 - 2]) : (-171218921215737826LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) arr_3 [i_0]))));
        var_13 = 3238575565324523820ULL;
        arr_5 [i_0] = ((/* implicit */unsigned int) (((~(var_4))) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_2 [i_2 - 3] [11U]))));
                            var_15 = ((/* implicit */long long int) ((unsigned short) var_8));
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_4] [10LL] [7ULL] [i_1] [i_6] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26002)) ? (((/* implicit */int) (unsigned short)52398)) : ((+(((/* implicit */int) (unsigned short)52398))))));
                            arr_24 [i_6] [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) arr_13 [i_1] [i_2 - 1]));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_16 *= ((/* implicit */unsigned long long int) arr_21 [i_4] [i_4] [i_3] [i_3 + 2] [8U] [i_1] [i_4]);
                            var_17 = ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_27 [11ULL] [i_1] [i_1] [i_2] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        }
                        arr_29 [i_1] [i_1] [9LL] [i_3] [i_4] = var_8;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */long long int) arr_21 [i_1] [i_1] [i_3 + 3] [i_4] [(unsigned char)14] [(unsigned char)14] [2ULL]);
                        }
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_36 [i_1] [i_1] [i_4] [i_1] [(unsigned short)15] [i_1] [i_1] = ((/* implicit */unsigned short) arr_28 [i_3 + 3] [i_2] [i_3 + 3] [i_2 + 1] [i_9] [i_1] [i_1]);
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) 15208168508385027784ULL)));
                            arr_37 [i_1] [i_1] [i_2] [i_1] [i_3] [i_4] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)50583))));
                            arr_38 [i_1] [i_2] [i_1] [i_4] [i_2] = arr_32 [i_2 - 2] [i_3 + 1] [i_1] [i_3] [i_3 + 1];
                        }
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_1] [(unsigned short)8]));
                            var_22 = ((/* implicit */unsigned short) (+(((long long int) 268434432U))));
                            var_23 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_1);
                            var_25 = ((/* implicit */unsigned short) ((long long int) var_1));
                            arr_45 [(unsigned short)13] [i_2] [i_3] [(unsigned short)13] [i_1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_11 + 2] [(unsigned short)4] [2ULL] [i_1] [i_11]))));
                            arr_46 [i_1] [10ULL] [0U] [i_11] [i_1] = ((((/* implicit */_Bool) arr_43 [i_1] [i_1] [i_3] [i_4])) ? (((/* implicit */long long int) arr_2 [i_3] [i_3])) : ((~(arr_33 [i_1] [14U] [i_3 - 2] [i_4] [i_1] [i_4]))));
                        }
                        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((-171218921215737815LL) <= (171218921215737825LL)));
                            var_27 = var_1;
                        }
                        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) /* same iter space */
                        {
                            arr_52 [i_13 - 1] [i_1] [i_3] [i_1] [15LL] = ((/* implicit */unsigned long long int) arr_25 [3ULL] [3ULL] [i_3] [3ULL]);
                            var_28 = ((/* implicit */unsigned int) var_7);
                            arr_53 [14LL] [i_1] [i_3 - 2] [i_4] [5ULL] = ((/* implicit */unsigned short) (+(arr_48 [i_1] [i_3 - 2] [i_2 - 1] [i_2 - 1] [i_13 + 1])));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (-9223372036854775806LL) : (((/* implicit */long long int) 723460015U))));
    }
    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            var_30 = min((((/* implicit */long long int) var_1)), (9223372036854775807LL));
            var_31 = ((/* implicit */unsigned int) (-(((unsigned long long int) ((unsigned short) (unsigned short)48189)))));
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        {
                            arr_67 [(unsigned short)3] [i_15] [i_16] [i_17] [i_15] = ((/* implicit */unsigned long long int) arr_34 [i_17] [i_17 - 1] [i_17 - 1] [12U]);
                            arr_68 [i_17] [i_15] [i_16] [i_17 + 1] [10LL] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_18] [i_17] [i_16]))));
                        }
                    } 
                } 
            } 
            arr_69 [i_14] [i_14] [i_15] = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_12 [4ULL] [i_14 + 1] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) var_6)) : (16319302042951306428ULL))))), (((/* implicit */unsigned long long int) max((arr_57 [i_14] [i_14]), (((/* implicit */unsigned int) var_9)))))));
        }
        arr_70 [i_14 - 1] = ((/* implicit */unsigned short) 3080490103U);
        arr_71 [0LL] = ((/* implicit */unsigned char) arr_43 [10ULL] [2LL] [10ULL] [i_14 - 2]);
    }
}
