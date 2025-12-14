/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183471
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_1);
                        var_10 *= ((/* implicit */unsigned short) (-(arr_6 [i_1] [i_2] [i_3 - 1])));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((signed char) var_3);
    }
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_11 *= ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12667))) : (arr_14 [i_4] [i_5] [i_5])));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)239), ((unsigned char)249)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(unsigned short)10]))) : (((unsigned long long int) arr_20 [6] [(short)16] [(short)16] [i_7]))));
                        var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((16885590564576647840ULL), (((/* implicit */unsigned long long int) arr_4 [i_5] [i_6] [i_7 - 1]))))))) ? (((((/* implicit */_Bool) ((int) arr_3 [i_4]))) ? ((-(arr_1 [5]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                        var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)43)) ? (255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 + 1] [i_4] [i_7 - 1] [i_7 - 1]))))), (((/* implicit */unsigned long long int) arr_21 [i_7 + 2] [i_4] [i_7 + 2] [i_7]))));
                    }
                } 
            } 
            var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)186)), (3321683941320992191LL)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                arr_25 [i_4] [(short)8] [(short)8] [i_4] = ((/* implicit */unsigned char) arr_20 [i_4] [i_4] [i_4] [i_4]);
                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */int) arr_15 [12])) : (((/* implicit */int) var_0))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                arr_30 [i_9] [i_5] [i_9] |= ((/* implicit */short) ((unsigned char) (unsigned char)239));
                var_17 = ((/* implicit */unsigned char) arr_3 [i_5]);
                arr_31 [i_4] [i_4] [i_9] [i_9] |= ((/* implicit */unsigned short) (unsigned char)32);
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) arr_21 [i_4] [i_9] [i_5] [i_4])))))));
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (short i_12 = 3; i_12 < 15; i_12 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6700361760707919717ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)106))))) ? (((((/* implicit */_Bool) ((-5717171133906785513LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-117)))))) ? (((((/* implicit */_Bool) 1561153509132903773ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (1304633660946984881ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_12 - 1] [i_12 - 3] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_19 [i_11] [i_4] [i_10] [(unsigned short)15] [(signed char)0] [i_4]))))));
                            arr_38 [i_11] [i_11] [i_10] [i_11] [i_4] = min((((int) arr_6 [i_12 - 2] [i_12 + 1] [i_12 - 1])), (((/* implicit */int) var_0)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)42411)))))));
                        }
                    } 
                } 
                arr_39 [i_4] [i_5] [(short)6] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_5] [i_10])) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [(unsigned char)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))));
                var_21 = ((/* implicit */unsigned int) 1561153509132903769ULL);
            }
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_43 [i_4] [i_4] [i_13] [i_13] = (-(1561153509132903764ULL));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (unsigned int i_15 = 3; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (short)-4086))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (225432989)));
                            var_24 = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            }
        }
        arr_48 [i_4] = ((/* implicit */unsigned char) var_7);
        var_25 |= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */int) arr_42 [i_4])) : (((/* implicit */int) (short)22057))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) % (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)48654)) : (((/* implicit */int) arr_23 [i_4] [i_4] [4LL]))))))), (((/* implicit */unsigned int) var_5)));
        var_26 |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)234))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        var_28 = ((/* implicit */int) ((arr_50 [i_16]) << (((((/* implicit */int) (unsigned char)18)) - (18)))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_29 = (+(max((-2014310010), (((/* implicit */int) (unsigned short)0)))));
        var_30 = ((/* implicit */long long int) (short)12);
        var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-11)))) ? (min((((/* implicit */unsigned int) (~((-2147483647 - 1))))), ((~(var_2))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_8)))))))));
    }
    /* LoopNest 2 */
    for (short i_18 = 1; i_18 < 12; i_18 += 2) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            {
                arr_61 [i_18] [i_18] = ((/* implicit */int) ((unsigned long long int) (short)11));
                var_32 = min((min((189817565), (((/* implicit */int) (short)13621)))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_23 [i_18] [i_18] [i_18]))))));
                var_33 = ((/* implicit */int) max((var_33), (max(((-(((/* implicit */int) arr_19 [i_18] [i_18] [(unsigned short)6] [2ULL] [i_18] [14])))), (min((((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-13601)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (arr_29 [i_18] [i_18 - 1] [i_18 + 2] [(signed char)14])))))))));
                /* LoopNest 3 */
                for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 15; i_22 += 2) 
                        {
                            {
                                arr_68 [i_18] = ((/* implicit */unsigned char) ((int) ((signed char) (signed char)-123)));
                                arr_69 [i_18] [(unsigned short)1] [(signed char)9] [i_18] [(unsigned short)1] [i_18] = var_6;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
