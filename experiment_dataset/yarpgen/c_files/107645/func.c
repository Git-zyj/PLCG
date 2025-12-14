/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107645
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        arr_3 [i_0] = ((/* implicit */int) (((((-(arr_1 [i_0] [i_0]))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)40383))))))))));
        arr_4 [3U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) : (min((2698574957U), (((/* implicit */unsigned int) (signed char)38))))));
        arr_5 [20] = arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)32736)) == (((/* implicit */int) (short)32736)))) ? (((/* implicit */int) (short)-13525)) : (((/* implicit */int) (unsigned char)239))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_16 [i_4] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_4])) ? (arr_10 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) arr_11 [i_1] [i_1]);
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)30337))));
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) 0);
            arr_20 [i_5] [i_5] = ((((/* implicit */int) ((unsigned char) (signed char)38))) == (((/* implicit */int) ((_Bool) (short)7767))));
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_5] [i_7 - 2])) ? (((/* implicit */int) (signed char)37)) : (arr_19 [i_6 + 1] [i_5] [i_7 - 1])));
                        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_18 [i_5]))))) < (arr_24 [i_5] [i_6 - 1] [i_6 + 1])));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            arr_27 [i_1] [i_8] [i_8 - 1] = (short)3667;
            var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_22 [i_8 - 1] [i_8 + 1]))));
        }
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            arr_30 [(_Bool)1] = ((long long int) arr_18 [i_9]);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)39689)))) & (arr_21 [i_1] [i_9])));
        }
        for (signed char i_10 = 1; i_10 < 17; i_10 += 3) 
        {
            arr_33 [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (arr_21 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))) - (((((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) & (arr_10 [i_1])))));
            arr_34 [i_1] [i_10] [13U] = arr_14 [19] [i_10 + 4] [i_1] [i_10];
        }
        for (unsigned char i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 2; i_12 < 20; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1] [i_11 + 2])) ? (arr_21 [i_1] [i_11 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))));
                        arr_41 [i_1] [i_1] = ((/* implicit */int) ((arr_15 [i_11] [i_11 + 1] [i_12 - 2] [i_12 + 1]) >> (((arr_15 [i_11] [i_11 + 1] [i_12 - 2] [i_12 + 1]) - (2790959687946865706ULL)))));
                        arr_42 [i_13] [i_12] [i_11] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)33007))))) % (((/* implicit */int) (unsigned short)16655))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) (+(arr_35 [i_11 + 2] [i_11 + 2])));
        }
    }
    for (short i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)239), (((/* implicit */unsigned char) arr_6 [i_14])))))))) : (var_8))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                arr_52 [i_14] |= ((((/* implicit */_Bool) arr_11 [i_14] [i_15])) || (arr_12 [i_14]));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 20; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_59 [i_18] [i_17] [i_16] [i_16] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) arr_55 [i_16] [i_16] [i_17 - 2] [i_17] [i_17 - 1])) < (((/* implicit */int) arr_55 [i_16] [(short)11] [i_17 - 2] [(short)11] [(signed char)14]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65528)) >> (((16607740007106989145ULL) - (16607740007106989134ULL)))));
                            var_24 = ((/* implicit */unsigned long long int) (!(var_11)));
                            var_25 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                var_26 = ((((((/* implicit */_Bool) 809103810)) ? (((/* implicit */int) var_2)) : (var_8))) <= (arr_43 [i_14] [i_16]));
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (+(((arr_10 [i_14]) & (((/* implicit */long long int) var_1)))))))));
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 17; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((var_28), (582622753)));
                            arr_68 [i_20] = var_11;
                        }
                    } 
                } 
                arr_69 [i_15] [i_14] = ((arr_43 [i_19] [i_19 - 1]) ^ (((/* implicit */int) var_12)));
                var_29 = (signed char)60;
            }
            var_30 = ((((/* implicit */_Bool) (short)7753)) ? ((((_Bool)1) ? (805636818) : (((/* implicit */int) var_5)))) : (arr_62 [i_14] [i_14] [2U] [i_14] [i_15] [i_15]));
        }
        arr_70 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)7757))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_14] [i_14] [i_14])) ? (((/* implicit */int) arr_9 [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_9 [i_14] [i_14] [i_14])))))));
    }
    var_31 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 2) 
    {
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 2) 
        {
            {
                arr_77 [i_22] [i_22] = ((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) arr_6 [i_22])), (2162492598456860343LL))));
                var_32 = ((/* implicit */unsigned int) (unsigned char)239);
                var_33 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (unsigned short)25846)) ? (arr_15 [i_22] [i_22] [i_23] [i_23]) : (((/* implicit */unsigned long long int) 3991633322339441265LL)))), ((~(arr_67 [i_22] [i_22] [i_22] [i_22] [i_22] [(_Bool)1]))))) % (((/* implicit */unsigned long long int) ((8323072) - (-886343562))))));
            }
        } 
    } 
}
