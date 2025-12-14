/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141973
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
    var_11 &= ((/* implicit */signed char) min((max((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (_Bool)1))))), (var_2))), (((/* implicit */long long int) min(((+(var_4))), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        var_13 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (var_10)));
        var_14 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)121)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(((/* implicit */int) (signed char)96)))) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (min((11LL), (((/* implicit */long long int) (_Bool)1))))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */signed char) (-(((var_5) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9)))))))));
            var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((arr_8 [i_2]), (arr_8 [i_2])))) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) : (7335506067612369852ULL)))));
            var_16 = ((/* implicit */long long int) max((var_16), ((-(-9LL)))));
            var_17 = ((/* implicit */unsigned long long int) ((long long int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_0 [i_1] [i_2])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned long long int) 4232633517682091697LL);
                        arr_17 [i_4] [i_2] [i_2] [i_4] = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-9220)) || (((/* implicit */_Bool) (signed char)-96))))) > (((/* implicit */int) var_1))))), (((signed char) min((-199840303895431691LL), (((/* implicit */long long int) arr_3 [i_4])))))));
                        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_4)) : (((9LL) + ((~(-13LL))))));
                    }
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            arr_31 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4232633517682091697LL)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (_Bool)1))));
                            var_20 = (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)5505))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                arr_34 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5494))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_5]))) + (var_2)))) ? (11111238006097181764ULL) : (((/* implicit */unsigned long long int) (-(var_8)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_22 *= ((long long int) arr_7 [i_5] [i_9]);
                    var_23 = ((/* implicit */signed char) (+(var_8)));
                    arr_39 [i_1] [i_9] = ((/* implicit */long long int) arr_24 [i_1]);
                    arr_40 [i_1] [i_5] [i_1] [i_9] [i_1] = (signed char)44;
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_19 [i_11]) + (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) (~(var_8))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_48 [i_11] = ((/* implicit */long long int) ((signed char) arr_2 [i_5]));
                        arr_49 [i_5] [i_11] [i_5] [i_11] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60030)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(-1514919382414006497LL))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_53 [i_11] = ((/* implicit */_Bool) (~(var_6)));
                        var_26 = ((/* implicit */_Bool) var_4);
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)66)))))));
                    }
                    arr_54 [i_11] [(_Bool)0] [i_5] [i_11] = ((/* implicit */unsigned int) ((8LL) * (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_28 = ((/* implicit */signed char) 2677148710U);
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (_Bool)1);
                        var_30 = ((/* implicit */unsigned int) (!(((_Bool) arr_26 [i_11] [i_5]))));
                    }
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1617818590U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) ((_Bool) var_2)))));
                        var_32 ^= var_0;
                        var_33 = ((/* implicit */_Bool) var_6);
                    }
                }
                var_34 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 3172871185U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (var_5))));
            }
        }
        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            var_35 = ((/* implicit */signed char) max(((((-(((/* implicit */int) arr_44 [i_16] [i_16] [i_16] [i_1])))) + ((+(((/* implicit */int) (signed char)-104)))))), (((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_16] [i_16]))));
            arr_64 [i_1] [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (2306210996887998507LL)));
            var_36 = ((/* implicit */_Bool) var_10);
        }
    }
    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
    {
        var_37 = ((/* implicit */long long int) ((-4232633517682091686LL) == (var_5)));
        arr_69 [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), (var_3)))) < (((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_7))))))))) <= (((((((/* implicit */_Bool) -6148481356108883638LL)) ? (4243599871258067026ULL) : (((/* implicit */unsigned long long int) -6599126936332849551LL)))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)5505)), (arr_29 [i_17] [i_17] [(unsigned char)2] [i_17 - 1] [i_17 - 1]))))))));
    }
}
