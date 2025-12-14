/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125330
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
    var_12 ^= ((((/* implicit */_Bool) 18446744073705357312ULL)) ? (var_5) : (((long long int) var_9)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */int) var_3);
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) (-(1929180217)));
                            arr_12 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -5119590477888671983LL);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            var_16 ^= ((/* implicit */unsigned char) arr_11 [(unsigned char)0] [(signed char)18] [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_0))));
                        var_18 = var_1;
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)43350)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_0])) != (var_6))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */int) ((((/* implicit */long long int) -1039855996)) ^ (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
            var_21 = ((/* implicit */unsigned char) ((9223372036854775807LL) | (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-74)))))));
        }
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)74))))) : (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) -9223372036854775778LL);
                        var_23 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_4))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_11 = 2; i_11 < 18; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) 1039855990);
                            var_25 = ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((/* implicit */signed char) ((arr_7 [i_0] [0] [i_8] [i_0]) <= (var_10)));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) && ((!(((/* implicit */_Bool) -1570421738363648457LL))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (long long int i_16 = 3; i_16 < 17; i_16 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(var_0))))));
                        arr_46 [(signed char)0] [i_15] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_33 [i_0] [i_15] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-75))) : (-158687996492791247LL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_17 = 1; i_17 < 15; i_17 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_14] [i_14] [i_17 + 3] [i_14] [i_17] [(short)4] [i_17])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 3; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned short i_19 = 4; i_19 < 17; i_19 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) arr_3 [11LL] [11LL]);
                            arr_54 [i_0] [i_17] [i_14] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_17 + 3] [i_17 + 3] [i_17]))) ^ (var_5));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)74)))))) != (arr_34 [i_0] [i_14])));
            }
            for (int i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
            {
                arr_59 [i_0] [i_14] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_28 [i_20 + 2] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((-1187518666) >= (-65536)))) : (((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 16; i_21 += 1) 
                {
                    for (long long int i_22 = 1; i_22 < 18; i_22 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_10 [i_21 + 3] [i_20 + 1] [i_20 + 1] [i_21 + 1] [i_22 + 1]))));
                            var_33 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_20 + 3] [i_21] [i_22 - 1]);
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */short) var_10);
        }
        for (unsigned long long int i_23 = 1; i_23 < 17; i_23 += 1) 
        {
            var_35 = ((/* implicit */long long int) (+(-1)));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)68)) : ((-2147483647 - 1))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
            var_37 = ((/* implicit */_Bool) var_9);
        }
        var_38 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [(signed char)9] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
    {
        arr_70 [i_24] = ((((/* implicit */_Bool) var_5)) ? ((-(4194303LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)220))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_36 [(signed char)4] [(signed char)4] [(signed char)4] [i_24] [(signed char)4])))) : (((/* implicit */int) (unsigned char)37))));
    }
    for (signed char i_25 = 0; i_25 < 10; i_25 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */long long int) min((var_40), ((~(((var_5) | (min((var_11), (((/* implicit */long long int) var_2))))))))));
        arr_74 [(unsigned short)4] [i_25] = ((/* implicit */_Bool) var_6);
    }
}
