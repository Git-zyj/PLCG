/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171785
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) min((var_6), (((/* implicit */short) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) arr_3 [i_0] [i_1] [11U]);
            arr_6 [i_1] [7LL] = ((/* implicit */signed char) ((long long int) arr_4 [i_1] [i_0]));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */short) var_3);
                        var_13 = ((/* implicit */long long int) (-(var_2)));
                        arr_13 [i_3] = ((/* implicit */long long int) var_8);
                    }
                } 
            } 
        }
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_16 [(unsigned short)15])) : (((/* implicit */int) arr_15 [(short)24]))))));
        /* LoopSeq 4 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_21 [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)29387)) == (((/* implicit */int) (unsigned short)36143)))))));
            var_14 = ((/* implicit */long long int) var_6);
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_15 = ((/* implicit */signed char) var_4);
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            arr_31 [i_4] [i_4] [i_6] [i_7] [i_7] [22LL] = ((/* implicit */unsigned long long int) var_7);
                            arr_32 [i_4] [(short)21] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_7 - 1]))))) > (((((/* implicit */_Bool) 6155003504158792260ULL)) ? (17683167738582839555ULL) : (((/* implicit */unsigned long long int) -1218334082))))));
                            arr_33 [i_4] [i_4] [i_8] [i_7] [i_4] = ((/* implicit */signed char) 13374145728598651074ULL);
                            arr_34 [i_4] = ((((/* implicit */unsigned int) (~(arr_19 [i_4] [i_4])))) != ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_27 [i_4]))))));
                        }
                    }
                } 
            } 
            arr_35 [i_4] = (i_4 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) var_8)) >> (((arr_18 [i_4] [i_4]) - (1461663687)))))) : (((/* implicit */short) ((((/* implicit */int) var_8)) >> (((((arr_18 [i_4] [i_4]) - (1461663687))) + (500654525))))));
        }
        for (unsigned short i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                var_16 |= ((/* implicit */int) min((arr_28 [i_4] [i_9]), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_9] [i_10] [i_10])) >> (((((/* implicit */int) var_6)) + (29635))))), (((/* implicit */int) max(((unsigned short)36139), (((/* implicit */unsigned short) arr_39 [i_9] [i_9] [(unsigned short)20] [i_9]))))))))));
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_37 [i_4] [i_10]))))) && (((/* implicit */_Bool) (+(arr_24 [i_10]))))));
            }
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_4] [i_9 - 1])))))) * (((((/* implicit */long long int) ((/* implicit */int) (short)-2412))) / (arr_26 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 1] [8U])))));
            var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_25 [i_9 + 1] [i_9 + 2])) / (((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1])))), (((((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) (unsigned short)29409)) : (((/* implicit */int) var_8))))));
        }
        for (long long int i_11 = 1; i_11 < 21; i_11 += 2) 
        {
            arr_43 [(_Bool)1] [(_Bool)1] [i_4] = ((((arr_18 [i_4] [i_4]) >> (((((/* implicit */int) var_6)) + (29641))))) & (((arr_18 [6] [i_4]) & (arr_18 [i_4] [i_4]))));
            arr_44 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-81)) - (((/* implicit */int) (unsigned short)29409))))) + (max((((/* implicit */unsigned int) arr_18 [i_11 + 2] [i_4])), (2673394456U)))));
            arr_45 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) arr_22 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_20 [i_4] [i_4] [i_11 + 1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4611686018427387904LL))))))));
        }
        for (int i_12 = 1; i_12 < 23; i_12 += 2) 
        {
            var_20 ^= ((/* implicit */short) max(((~((-(((/* implicit */int) arr_39 [i_4] [i_12] [i_4] [(signed char)6])))))), ((+(max((arr_38 [i_4] [i_12]), (arr_29 [(short)22] [(short)22])))))));
            /* LoopSeq 2 */
            for (unsigned short i_13 = 2; i_13 < 24; i_13 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_22 [i_12]))));
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_28 [i_13 - 1] [i_12 + 1]))) >= (((((/* implicit */_Bool) arr_22 [i_13])) ? (((/* implicit */int) arr_23 [i_4] [i_12 - 1] [i_4])) : (((/* implicit */int) (unsigned char)0))))));
                var_23 = ((/* implicit */short) max((((8342587992449798409LL) / (4530663570949163939LL))), (((/* implicit */long long int) max((arr_48 [i_12]), (arr_30 [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_13 + 1] [i_13 - 2] [i_13 + 1]))))));
            }
            for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                var_24 = ((/* implicit */short) (((~(((/* implicit */int) arr_51 [i_12 - 1] [i_4])))) - (((/* implicit */int) var_6))));
                var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)28586))));
            }
            var_26 = ((/* implicit */unsigned short) var_6);
            arr_55 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_12 + 2])) ? (((/* implicit */int) arr_22 [i_12 + 1])) : (((/* implicit */int) var_1))))) : (var_2)));
            var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_37 [i_12] [i_4])), ((~(((/* implicit */int) arr_37 [i_12] [i_4]))))));
        }
        var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)29396)))) ? (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_8))));
    }
    for (signed char i_15 = 2; i_15 < 10; i_15 += 3) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [6] [i_15 + 2] [6])) + (var_9)));
        arr_58 [i_15] [3U] = min((((/* implicit */unsigned long long int) 4938639567445783769LL)), (763576335126712054ULL));
        arr_59 [i_15] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_30 [(_Bool)1] [(signed char)0] [(signed char)0] [(signed char)0] [i_15] [i_15 + 1]))))));
    }
    var_30 = ((/* implicit */_Bool) var_10);
    var_31 = ((/* implicit */short) var_10);
}
