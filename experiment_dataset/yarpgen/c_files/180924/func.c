/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180924
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
        arr_3 [2LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-9240))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1])) ? (-2361230890630506542LL) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [(unsigned short)10] [(unsigned short)10])))) ? (arr_4 [i_1] [i_1]) : (max((((/* implicit */int) (signed char)-108)), (arr_4 [i_1] [i_1])))))))))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_1] [(unsigned char)9] [i_1])) == (var_13)));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                arr_12 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)1)) >> (((((long long int) arr_4 [(short)4] [i_3])) + (949717532LL)))))));
                arr_13 [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (max((((/* implicit */unsigned int) (signed char)115)), (23U))))));
            }
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_17 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)36428)) && (((/* implicit */_Bool) 6427934164188699468ULL)))))) >> (((max(((+(((/* implicit */int) arr_11 [i_1])))), (((/* implicit */int) (!(var_18)))))) - (91)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)36428)) && (((/* implicit */_Bool) 6427934164188699468ULL)))))) >> (((((max(((+(((/* implicit */int) arr_11 [i_1])))), (((/* implicit */int) (!(var_18)))))) - (91))) + (25))))));
            arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_1] [1LL] [i_1])))) ? (((((/* implicit */_Bool) -4456795605784668212LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-90)), (var_7))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_18))) ^ (21U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))));
        }
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_16 [i_6]))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) arr_16 [i_1]));
                        var_23 |= ((var_13) - (((/* implicit */long long int) arr_25 [i_5] [i_5 + 1] [(short)0] [i_5 - 1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(4364868141151636994LL))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_1] [i_5 - 1] [(_Bool)1])) && (((/* implicit */_Bool) arr_28 [(signed char)12] [i_5] [i_8] [(signed char)12])))) ? (((((/* implicit */_Bool) 4364868141151637001LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24652))) : (arr_28 [i_1] [i_5 + 1] [i_8] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8]))));
                    }
                } 
            } 
            var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9212)) ? ((~(((/* implicit */int) arr_23 [i_1] [i_1] [i_5] [i_5])))) : (((/* implicit */int) (short)-32742))));
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_5 - 1])))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_1);
                            arr_38 [i_12] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */int) arr_33 [(short)7] [i_1]);
                            arr_39 [i_1] [i_11] [i_12] = ((/* implicit */long long int) (+(arr_4 [i_5 + 1] [i_5 - 1])));
                            arr_40 [i_1] [i_1] [(unsigned short)2] [i_1] [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)36446)) ^ (8)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) : (max((((/* implicit */unsigned long long int) (short)-24655)), (max((((/* implicit */unsigned long long int) (unsigned short)36450)), (arr_15 [i_1] [i_1] [i_13])))))))));
            var_31 ^= ((/* implicit */unsigned int) arr_24 [i_13] [(signed char)4] [i_1] [i_13]);
            var_32 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) max((arr_8 [i_13] [i_13] [i_13]), (((/* implicit */int) (unsigned short)61778))))), (arr_33 [i_1] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5436)))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            for (int i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((_Bool) ((((((/* implicit */int) arr_21 [(unsigned char)4] [i_14] [i_15])) ^ (((/* implicit */int) var_16)))) + (((/* implicit */int) max(((unsigned short)32387), (((/* implicit */unsigned short) (short)9260)))))))))));
                        var_34 = ((/* implicit */long long int) max((((/* implicit */int) (((~(((/* implicit */int) arr_44 [i_1])))) >= (((/* implicit */int) ((short) arr_7 [i_1])))))), ((-(((((/* implicit */_Bool) 15U)) ? (arr_34 [i_15 - 2]) : (var_12)))))));
                        var_35 += ((/* implicit */unsigned int) var_11);
                        var_36 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_8 [i_15 + 1] [4LL] [(short)8])), (arr_28 [9] [i_15 - 1] [i_15] [i_15 - 1]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4)) || (((/* implicit */_Bool) arr_14 [i_1] [i_15 - 1] [i_1]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 16; i_17 += 1) 
        {
            for (signed char i_18 = 2; i_18 < 14; i_18 += 1) 
            {
                {
                    arr_56 [i_1] [i_17] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!((!((_Bool)1))))))));
                    var_37 |= ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) 18372820374373785059ULL))))), (((unsigned short) (short)13384))))), (max((var_13), (((/* implicit */long long int) max((((/* implicit */signed char) var_8)), (arr_11 [(unsigned short)8]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        for (int i_20 = 2; i_20 < 15; i_20 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) min((var_38), (var_8)));
                                arr_64 [i_18] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)29085))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-9251)), (var_0)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */int) (short)4088)), (-968324911)))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) var_19)))))))));
}
