/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128395
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) min((arr_2 [i_0] [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) (_Bool)1))));
                var_16 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (9786000974829259052ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), (((/* implicit */short) arr_1 [i_0] [i_1])))))) : (3419548517U))) != (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_12) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1] [i_1 + 2])))))))));
                var_17 += ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) (+(var_3)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) ((unsigned long long int) var_8));
                        var_20 |= ((/* implicit */unsigned long long int) 3972008227U);
                        arr_16 [i_2] [i_5] [i_2] = var_13;
                        arr_17 [i_5] = ((/* implicit */short) arr_13 [i_2] [i_2]);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_21 ^= ((/* implicit */long long int) (short)7936);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3972008227U)) ^ (arr_15 [i_2] [i_3] [i_4] [i_3]))))));
                        var_23 = ((/* implicit */unsigned long long int) (short)-13874);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */signed char) var_3);
        arr_23 [i_7] [i_7] = ((/* implicit */_Bool) 11804748368697754603ULL);
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_7 + 1])) & (((/* implicit */int) (short)13873)))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_26 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_9] [i_8] [i_7]))));
                        var_27 = ((/* implicit */unsigned char) 778433379U);
                        var_28 = ((/* implicit */long long int) ((((unsigned long long int) var_3)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                }
            } 
        } 
        arr_31 [i_7] [i_7] = ((/* implicit */int) ((long long int) ((unsigned long long int) var_4)));
        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7 + 2] [20ULL])) || (((/* implicit */_Bool) 3516533917U))));
    }
    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 19; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 2; i_14 < 18; i_14 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            var_30 = ((/* implicit */short) var_7);
                            arr_43 [i_12] [i_12] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            var_31 *= ((/* implicit */signed char) max((((unsigned char) ((((/* implicit */_Bool) 1254409543339838421ULL)) ? (var_2) : (((/* implicit */int) arr_13 [i_12] [i_12]))))), (((/* implicit */unsigned char) arr_21 [i_11]))));
                            arr_44 [i_11] [i_11] [i_12] [i_13] [i_12] [i_13] = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) 18116931048199604406ULL))))))));
                        }
                        for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_3))))))) & ((((+((-9223372036854775807LL - 1LL)))) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12 + 1] [i_11 - 1])))))));
                            arr_47 [i_12] [i_12] = ((/* implicit */short) var_10);
                            var_33 = ((/* implicit */unsigned long long int) arr_21 [i_11]);
                        }
                        arr_48 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((var_7) > (arr_15 [i_12] [i_12 + 2] [i_12] [i_12])))), ((+(arr_15 [i_12] [i_12 - 1] [i_11] [i_12])))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) arr_24 [i_12 - 1] [i_12 - 1]);
            var_35 = ((/* implicit */unsigned int) min((var_35), ((~(3024718844U)))));
        }
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
        {
            var_36 += ((/* implicit */short) (+(((unsigned long long int) arr_10 [i_11] [i_11] [i_11 + 3]))));
            var_37 |= (+(-8231948933036583827LL));
        }
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            arr_53 [i_11] [i_11] [i_11] = min((((/* implicit */long long int) 299005226)), (((long long int) arr_24 [i_11] [i_11 + 1])));
            arr_54 [1U] [i_11] [i_11] = ((/* implicit */unsigned int) 8529752710406520717ULL);
            arr_55 [i_11] = ((/* implicit */long long int) ((short) ((((/* implicit */int) (short)22108)) % (299005226))));
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_26 [i_11 + 3]) >= (((/* implicit */unsigned int) var_2))))) % (((/* implicit */int) ((unsigned short) arr_25 [8LL] [i_11 + 3] [i_11])))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    {
                        var_39 = ((/* implicit */int) max((((((var_8) ^ (((/* implicit */unsigned long long int) var_2)))) % (max((8529752710406520710ULL), (((/* implicit */unsigned long long int) -550147358)))))), (((var_8) ^ (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) var_5)))))))));
                        var_40 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_20 [i_11 + 2])) > (((/* implicit */int) var_13)))), ((!(((/* implicit */_Bool) (short)(-32767 - 1)))))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_11)) ? (arr_59 [i_11 - 2] [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 2] [i_11 - 2]) : (arr_59 [i_11 - 2] [i_11 - 2] [i_11] [2U] [i_11 + 2] [i_11])))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_21 = 2; i_21 < 18; i_21 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 21; i_22 += 2) 
        {
            for (int i_23 = 2; i_23 < 19; i_23 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 2; i_24 < 18; i_24 += 3) 
                    {
                        arr_74 [i_21] [i_22] [i_22] [i_24] = ((/* implicit */_Bool) (unsigned char)1);
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (+(arr_51 [i_21 - 1] [i_21 + 1]))))));
                        arr_75 [i_24] [i_22] = ((/* implicit */unsigned short) arr_14 [i_21] [i_21] [i_21]);
                        arr_76 [i_22] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) ^ (arr_49 [i_21] [i_21] [i_23 + 2]))))));
                    }
                    arr_77 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_21] [i_22] [i_21] [i_21])) ? (arr_60 [i_21] [i_21] [i_21] [i_22]) : (arr_60 [i_23 + 1] [i_23 + 2] [i_22] [i_21 - 2])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_25 = 3; i_25 < 18; i_25 += 4) 
        {
            for (unsigned int i_26 = 1; i_26 < 19; i_26 += 4) 
            {
                {
                    var_43 = ((/* implicit */short) arr_25 [i_21] [i_25 - 1] [i_25 - 1]);
                    arr_82 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) arr_67 [i_21 - 2] [i_26 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_27 = 1; i_27 < 20; i_27 += 2) 
                    {
                        for (unsigned int i_28 = 2; i_28 < 20; i_28 += 1) 
                        {
                            {
                                var_44 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_21 - 1]))));
                                var_45 = ((/* implicit */long long int) (+(var_5)));
                                var_46 = ((/* implicit */int) var_4);
                            }
                        } 
                    } 
                    arr_89 [i_21] [i_21] [i_21] [i_26 + 2] = ((/* implicit */unsigned int) var_8);
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_21 + 3]))) ^ (4183680475U)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_29 = 2; i_29 < 18; i_29 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */int) max((var_48), (((((/* implicit */int) (short)-11051)) + (arr_90 [i_29 - 1])))));
        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_29 + 2] [i_29 + 2])) ? (arr_9 [i_29 + 2] [i_29]) : (arr_9 [i_29 + 1] [i_29 + 1])));
    }
    var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) ^ (3774779650U)))));
}
