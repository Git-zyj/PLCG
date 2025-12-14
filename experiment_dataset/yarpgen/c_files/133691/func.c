/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133691
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 2456326319999156869ULL))) ? ((+(-358132113))) : (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)220))))))) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) -358132113)));
    var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */int) (unsigned short)29680))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (unsigned short)29680;
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 358132111)) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (short)8191)) ? (321735356) : (358132102)))));
            var_17 -= ((/* implicit */unsigned char) 2140788430);
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)18592)) >= ((-(((/* implicit */int) var_13))))));
        }
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) var_1))) + (((/* implicit */int) arr_0 [i_2 - 2]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((_Bool) -321735351));
                            arr_19 [i_4] [i_4] [i_3] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_2] [i_3] [i_2 - 2] [i_5] [i_5]) ? (((/* implicit */int) arr_16 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2]))));
                            var_20 = ((/* implicit */short) (+(1048576)));
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_2] [i_3] [i_4] [i_6] &= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            arr_23 [4LL] [3LL] [(signed char)10] [(signed char)10] [i_6] = arr_18 [i_2 - 1] [5U] [i_2 - 1] [i_2] [i_2] [i_2];
                            var_21 += ((/* implicit */int) (unsigned short)35856);
                            var_22 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_13 [i_0] [i_3] [i_0]))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_28 [i_4] [(unsigned short)17] [(signed char)12] [i_4] [(signed char)12] [i_4] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_7])));
                        }
                        arr_30 [i_0] [i_2] [i_3] [i_0] [i_2 - 2] [i_2] = ((/* implicit */unsigned int) arr_17 [i_0] [i_2] [i_0] [14]);
                        var_23 -= ((/* implicit */long long int) (-((((_Bool)1) ? (45866377) : (1048576)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) ((signed char) 1454499194U));
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    var_25 -= ((/* implicit */unsigned char) (+((-(11799880891352970603ULL)))));
                    arr_37 [i_0] = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_8] [i_0] [i_9]);
                    var_26 *= ((/* implicit */long long int) (!(arr_18 [(short)3] [(short)3] [(short)3] [i_8 - 1] [i_8] [i_8 + 1])));
                    var_27 -= ((/* implicit */unsigned char) 2140788427);
                }
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        var_28 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_10] [i_10] [i_10])) > (((/* implicit */int) arr_4 [i_10] [i_10] [8ULL]))))), (5105254457802443549ULL)));
        arr_40 [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((short) 11248101846566457584ULL))))) ? (((((/* implicit */_Bool) 3055938932U)) ? (((/* implicit */int) arr_0 [i_10])) : ((~(((/* implicit */int) arr_13 [i_10] [i_10] [i_10])))))) : (((/* implicit */int) arr_38 [i_10]))));
        var_29 -= ((/* implicit */_Bool) max(((signed char)74), (((/* implicit */signed char) (_Bool)1))));
        var_30 *= ((/* implicit */int) ((unsigned short) max((arr_12 [i_10] [i_10] [i_10]), (((/* implicit */short) (_Bool)1)))));
    }
    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        arr_44 [i_11] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) (+(2140788430)))) : (max((((/* implicit */unsigned long long int) arr_38 [i_11])), (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
        arr_45 [(unsigned short)4] = ((/* implicit */int) (+(var_6)));
    }
}
