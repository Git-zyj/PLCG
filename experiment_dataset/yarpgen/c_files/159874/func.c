/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159874
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
    var_15 = ((/* implicit */signed char) ((long long int) (~((~(((/* implicit */int) (short)-29390)))))));
    var_16 = ((/* implicit */int) (short)15800);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned char)212))) + ((~(((/* implicit */int) ((signed char) var_8)))))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)32)) & (((/* implicit */int) (((-(((/* implicit */int) var_3)))) == ((+(((/* implicit */int) (unsigned char)212))))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    var_19 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_10)))))));
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_5);
                                arr_15 [i_0] [i_1] [i_1] [(unsigned char)23] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)212)) >= (((((/* implicit */int) var_14)) - (((/* implicit */int) var_8))))));
                                var_22 |= ((/* implicit */unsigned long long int) ((((var_5) ? (((/* implicit */long long int) var_7)) : (-35066135363482733LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (short)-14371)))))));
                                arr_16 [i_0] [i_1] [9ULL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)28))));
                                var_23 |= ((/* implicit */short) (unsigned char)37);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)63765)) : (((/* implicit */int) ((unsigned short) 12368630247904015405ULL)))));
                                var_25 += ((/* implicit */unsigned int) (unsigned short)64769);
                                arr_26 [i_0] [i_0] [i_1] [i_5] [i_6] [(short)23] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31032))) : ((~(6385979374979969442ULL)))));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)187)) << (((((/* implicit */int) (unsigned short)5910)) - (5897))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (long long int i_9 = 1; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_27 = (-(var_9));
                                arr_34 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((var_7) <= (((/* implicit */int) var_5))));
                                var_28 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-22))));
                                var_29 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)1)))));
                                arr_35 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((int) (-(6385979374979969425ULL))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_11 = 3; i_11 < 22; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (~(((int) (short)5718))));
                            arr_43 [i_0] [i_0] [i_1] [i_1] [i_11] [i_1] [i_12] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (signed char)44)) / ((~(((/* implicit */int) (short)-30760)))))));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            var_32 = ((((/* implicit */int) (signed char)121)) / (((((/* implicit */int) (unsigned short)64767)) ^ (((/* implicit */int) (unsigned short)64235)))));
                            var_33 = ((/* implicit */short) 675299383);
                            var_34 *= ((/* implicit */unsigned long long int) ((short) ((unsigned int) (unsigned char)246)));
                            arr_46 [i_0] [i_0] [i_1] [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 2681510354353487010LL))));
                        }
                        for (long long int i_14 = 2; i_14 < 22; i_14 += 4) 
                        {
                            arr_50 [i_1] [i_1] [i_10] [i_10] [i_10] [5LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64746)) & (((/* implicit */int) (unsigned short)64751))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 8388607U)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) 1783447962544266024ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (467000511113893066LL))))) ^ (((/* implicit */long long int) (+(((/* implicit */int) ((3800431004U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))))))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_53 [i_0] [i_1] [i_1] [i_1] [i_15] = ((/* implicit */unsigned int) (short)-16606);
                            var_36 = ((/* implicit */unsigned short) -35066135363482733LL);
                        }
                        for (signed char i_16 = 1; i_16 < 22; i_16 += 1) 
                        {
                            var_37 |= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) | (((/* implicit */int) (unsigned char)199))));
                            var_38 = ((/* implicit */short) ((((((4286578687U) >> (((var_7) + (1314676412))))) << (((/* implicit */int) ((((/* implicit */_Bool) 1783447962544266024ULL)) && (((/* implicit */_Bool) var_9))))))) >= ((-(var_9)))));
                            var_39 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)6376)) % (((/* implicit */int) (unsigned char)4)))) ^ (((/* implicit */int) (unsigned short)32343)))) << (((((((/* implicit */_Bool) ((18021676059510800105ULL) << (((-1057671240) + (1057671244)))))) ? (((138104564) << (((((/* implicit */int) var_14)) - (38))))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_6)))))) - (138104563)))));
                            arr_58 [i_0] [(signed char)9] [i_1] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) var_14))))));
                        }
                        var_40 = ((/* implicit */short) 16663296111165285591ULL);
                    }
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_14))));
                    arr_59 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned short)64774)))) >> ((((-(621578858899436110ULL))) - (17825165214810115484ULL)))));
                }
            }
        } 
    } 
    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (8906788373390223706LL)));
}
