/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146119
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) == (849726638096387541LL)));
            var_16 = min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (var_9))), (((/* implicit */unsigned int) arr_3 [i_1])))));
            var_17 = ((0) >> (((arr_2 [i_0]) - (5992803282200720427LL))));
            var_18 += ((/* implicit */short) (((!((_Bool)1))) ? (min((var_9), (((/* implicit */unsigned int) (-(var_6)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (var_0)))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) arr_2 [i_3]);
                arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 8546154464704028105LL)) ? (((/* implicit */unsigned long long int) 1683770552U)) : (8768195340988540083ULL)))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (-(var_5)));
                    var_20 = var_0;
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -575370547)) ? (((/* implicit */unsigned int) -2147483630)) : (arr_9 [i_0] [i_4]))))));
                }
                for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    arr_23 [i_2] [i_2] [i_4] = ((/* implicit */long long int) 1683770551U);
                    var_22 = ((_Bool) arr_14 [i_0] [i_2] [i_4] [i_6]);
                    var_23 = var_5;
                }
                for (short i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    var_24 = ((/* implicit */signed char) 2170002554U);
                    var_25 ^= ((/* implicit */unsigned long long int) 2124964742U);
                    var_26 = ((/* implicit */short) max((var_26), (var_0)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) (~(2611196743U)));
                    var_28 = ((/* implicit */_Bool) ((arr_8 [i_4] [i_0]) ? (((/* implicit */int) arr_8 [i_4] [i_8])) : (((/* implicit */int) arr_8 [i_0] [i_2]))));
                }
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_0 [i_9])))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_31 ^= ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [3ULL] [i_0]);
                        var_32 = ((/* implicit */short) var_11);
                    }
                    var_33 = var_14;
                    var_34 = ((/* implicit */long long int) max((var_34), (arr_32 [i_0] [i_2] [i_4] [i_9] [i_4])));
                    var_35 = ((/* implicit */int) min((var_35), (((int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))))));
                }
                for (int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    var_36 *= ((/* implicit */_Bool) var_14);
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) arr_9 [i_0] [i_2]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_46 [i_0] = ((/* implicit */int) (+(arr_39 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])));
                            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                            arr_47 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_13);
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (-(18024858194180213386ULL))))));
                            var_40 = ((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) > (var_12)))))));
                        }
                    } 
                } 
                arr_48 [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-127))));
            }
            var_41 -= ((/* implicit */unsigned int) (_Bool)1);
            var_42 = ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)0))) / (var_4)));
            var_43 = ((/* implicit */signed char) ((((1719387068) < (-575370570))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(2611196757U)))));
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            arr_51 [(_Bool)1] &= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2))))) <= (((/* implicit */long long int) ((arr_44 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            arr_52 [i_15] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((27ULL), (arr_7 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_15]))) : (min((((/* implicit */long long int) 2611196774U)), (arr_4 [i_15] [i_15] [i_15])))))));
            var_44 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((arr_6 [i_0]) - (((/* implicit */long long int) 2091193905U)))))));
            arr_53 [i_0] [i_0] [i_15] = min(((~(var_9))), (((((/* implicit */_Bool) var_8)) ? ((+(3917317958U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            arr_56 [i_0] = ((/* implicit */int) (~(((-3424968326334373136LL) ^ (-6948530436963062546LL)))));
            var_45 = var_14;
        }
        var_46 = ((/* implicit */unsigned int) min((var_46), (min((((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), ((~(var_4)))))), ((((!(((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [(signed char)12] [(signed char)12])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))) : (arr_44 [i_0] [i_0] [8ULL] [(short)10])))))));
        arr_57 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(unsigned char)12] [i_0] [i_0] [i_0] [i_0] [(unsigned char)12])) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))), ((+(-3424968326334373136LL)))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_47 = min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) arr_40 [i_17] [i_17] [i_17] [i_17])))));
        var_48 *= ((/* implicit */long long int) (_Bool)1);
    }
    var_49 = ((/* implicit */unsigned short) var_12);
    var_50 = min((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) : (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(var_13))) : (((/* implicit */int) var_3))))));
    var_51 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_3)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22244))))) > (var_1)));
}
