/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173587
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) -1136163946)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (5094673827079846349LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) != (((((/* implicit */int) (unsigned short)32259)) / (((/* implicit */int) arr_1 [i_0])))))))));
        arr_4 [i_0] = ((long long int) 131071);
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_8 [i_1 - 1])) >> (((-7209939934715438403LL) + (7209939934715438421LL))))) % (min((((/* implicit */int) (signed char)22)), (-345636260)))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_1))));
    }
    for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_22 [i_2] [i_2] = ((/* implicit */_Bool) min((min(((~(((/* implicit */int) arr_8 [i_2])))), ((~(((/* implicit */int) (signed char)22)))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)32269)) >= (((/* implicit */int) arr_8 [i_2 + 2])))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) (-(-632493954)));
                                arr_27 [i_2] [i_2] [i_2] = (-(var_1));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-632493954), ((-(((/* implicit */int) (short)256))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_1))))) : ((+(3367316125U)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_17 = min((((((/* implicit */_Bool) (short)512)) ? (((/* implicit */unsigned int) -419281718)) : (3956673130U))), (((/* implicit */unsigned int) 5382225)));
                                arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) 3956673130U);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    arr_41 [i_2] [i_2] = ((/* implicit */unsigned long long int) max(((+((-(arr_13 [i_2]))))), (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_0)))))))));
                    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)41607)) ? (((/* implicit */int) var_11)) : (arr_30 [i_2] [i_2] [i_2] [i_2] [i_10] [i_2])))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_13))) - (arr_31 [i_2] [i_2] [i_2] [i_10] [i_10])))))));
                    arr_42 [(signed char)20] &= ((/* implicit */int) var_2);
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_25 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_10] [i_2 + 1])), (var_1)))) ? (arr_34 [i_2 + 1] [i_2 + 1] [i_9 + 1] [i_9 + 1] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_2 + 3] [i_2 + 3] [i_2 + 3])))))))))));
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) 3367316125U)), (((long long int) ((int) var_4)))));
        arr_43 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) min((-842642917), (((/* implicit */int) (!(((/* implicit */_Bool) -9))))))));
        /* LoopSeq 1 */
        for (unsigned int i_11 = 2; i_11 < 23; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                for (short i_13 = 1; i_13 < 24; i_13 += 3) 
                {
                    {
                        arr_51 [i_2] [i_11] [i_2] [i_11] = ((/* implicit */long long int) (unsigned char)87);
                        /* LoopSeq 1 */
                        for (long long int i_14 = 2; i_14 < 23; i_14 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)5511))))))) + (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_55 [i_12] [i_12] [i_2] = ((/* implicit */unsigned char) min(((((~(arr_44 [i_2] [i_2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15)))))))), ((_Bool)1)));
                        }
                        arr_56 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) (unsigned char)171)))), (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_38 [i_2 + 3] [i_11] [i_11 + 2]), (arr_38 [i_2 - 1] [i_2 - 1] [i_11 + 1]))))));
                arr_59 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_26 [i_2] [i_2] [i_11 + 1] [i_2 - 1] [i_2] [i_2 - 1])), (arr_37 [i_11] [i_11 + 1] [i_11]))))));
                arr_60 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_7);
                var_23 = ((/* implicit */unsigned short) (+(-5382219)));
            }
            for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) ((_Bool) (signed char)2));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */int) ((max((var_10), (((/* implicit */long long int) 4021715995U)))) >= (min((484085175570171429LL), (-3333916762932893010LL)))))), (arr_48 [i_2] [i_2] [i_11] [i_2]))))));
                var_26 = (+((+(var_10))));
                arr_64 [i_2] [i_2] = ((/* implicit */unsigned short) (~((-(((unsigned long long int) 3750066831U))))));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_39 [i_11 - 2] [i_2 + 1]))));
            }
            arr_65 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_0);
        }
    }
    for (short i_17 = 0; i_17 < 17; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            for (unsigned int i_19 = 2; i_19 < 13; i_19 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-3))))))), ((-(arr_13 [14ULL])))));
                    var_29 *= ((/* implicit */short) arr_17 [i_19 + 2]);
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-(484085175570171429LL))))));
        arr_75 [i_17] = ((/* implicit */unsigned short) ((max((((unsigned int) var_6)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) / (min((3750066831U), (((/* implicit */unsigned int) arr_16 [i_17]))))));
    }
    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != ((~(((/* implicit */int) var_4))))));
}
