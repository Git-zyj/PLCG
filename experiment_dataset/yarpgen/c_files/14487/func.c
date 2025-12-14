/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14487
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) -2217392961150348865LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30161))) : (-490098074968663586LL)));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                    arr_11 [i_0] = ((((((/* implicit */int) var_0)) + (((/* implicit */int) arr_7 [i_0])))) + (((((/* implicit */int) (short)-24777)) - (((/* implicit */int) arr_7 [(unsigned short)1])))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) min(((unsigned short)15138), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) (unsigned short)14844))));
        var_21 = ((/* implicit */short) (signed char)-76);
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) var_5);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1712868797U)))) || (((/* implicit */_Bool) (~(6471159529535202688LL))))))) < (((((/* implicit */int) (_Bool)0)) / (-894154757)))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 10; i_4 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((unsigned char) -7224869304119956581LL));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1684887540)) ? (((/* implicit */int) arr_9 [0U])) : (((/* implicit */int) (short)22099))));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (_Bool)1))));
                        var_26 -= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_13)));
                        var_27 *= ((/* implicit */unsigned char) -6782719066938528646LL);
                        var_28 = ((/* implicit */int) var_18);
                        arr_31 [15LL] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (_Bool)0);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) ((((7224869304119956578LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-12415))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_5] [i_5])) - (((/* implicit */int) var_18)))))));
        }
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_30 &= ((/* implicit */long long int) (((-(((((/* implicit */int) arr_24 [i_5] [i_5] [i_9])) - (((/* implicit */int) (short)-164)))))) * (((/* implicit */int) (short)-28736))));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) 7224869304119956581LL))));
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                var_32 *= ((/* implicit */short) var_12);
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0)))))));
                arr_37 [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) (signed char)68);
            }
            for (unsigned short i_11 = 3; i_11 < 16; i_11 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) max((var_34), (max((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-4739)))))), (-2269919937339245730LL)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    var_35 -= ((/* implicit */int) arr_26 [i_5] [i_11]);
                    var_36 *= ((/* implicit */_Bool) var_1);
                    var_37 = ((/* implicit */long long int) var_2);
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_11] [i_9] [i_11 + 1])) ? (((/* implicit */int) arr_32 [(_Bool)0] [i_9] [i_11 - 2])) : (((/* implicit */int) var_15))));
                }
                for (int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    arr_45 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((long long int) (unsigned short)38229)) == (((/* implicit */long long int) max((1227591818), (((/* implicit */int) (signed char)92)))))));
                    arr_46 [i_5] [i_9] [9U] [i_5] = ((/* implicit */unsigned int) -7224869304119956573LL);
                }
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (-7724031793306088117LL)))) ? ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (2930990968380668292ULL)))))) : (((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned short i_15 = 1; i_15 < 15; i_15 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) var_15))));
                            arr_52 [i_9] [i_14] = ((/* implicit */unsigned int) ((short) (short)9764));
                            arr_53 [i_5] [i_9] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_21 [i_15 - 1] [i_11 - 2])))) ? (arr_21 [i_15 + 2] [i_11 - 2]) : (arr_21 [i_15 + 1] [i_11 - 3])));
                        }
                    } 
                } 
            }
            for (unsigned short i_16 = 3; i_16 < 16; i_16 += 4) /* same iter space */
            {
                var_41 -= ((/* implicit */unsigned long long int) max((-7224869304119956581LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_16 + 1] [i_16 - 2] [i_5] [i_16 + 1])))))));
                arr_56 [i_9] [i_9] [14LL] [8ULL] = ((/* implicit */int) arr_23 [(unsigned char)9] [i_16 + 1] [i_16]);
                var_42 = ((/* implicit */int) (((~(arr_49 [i_9] [i_16 + 1] [i_16 - 3] [i_16 - 3] [i_16 - 3] [i_16 - 3]))) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
            var_43 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)255))))) + (var_7)));
        }
        /* LoopNest 3 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            for (short i_18 = 3; i_18 < 13; i_18 += 3) 
            {
                for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    {
                        var_44 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((short) var_13))) << (((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_0)))) - (54114))))));
                        var_45 = ((/* implicit */signed char) var_13);
                        arr_65 [(unsigned char)15] [i_17] [(unsigned char)15] [i_19] = ((/* implicit */signed char) ((_Bool) ((-4030556493444726550LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12548))))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (3808470893U)));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_57 [i_5]), (((/* implicit */unsigned short) (unsigned char)5))))), (((((/* implicit */int) arr_40 [i_5] [i_5] [i_5] [14LL])) * (((/* implicit */int) ((_Bool) arr_64 [i_5] [i_5] [i_5] [i_5] [i_5] [14LL]))))))))));
        var_48 = ((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)25842)) > (((/* implicit */int) var_15))))), (max((1227591818), (((/* implicit */int) var_13)))))) >= (((/* implicit */int) ((min((-1227591819), (((/* implicit */int) (signed char)127)))) == (-650128544))))));
    }
    /* vectorizable */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) 1994525575))));
        var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
    }
    for (short i_21 = 3; i_21 < 13; i_21 += 4) 
    {
        var_51 = ((/* implicit */_Bool) (+(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_63 [i_21 - 2] [i_21 - 3] [i_21 - 2] [i_21])))))));
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 14; i_22 += 1) 
        {
            for (int i_23 = 0; i_23 < 14; i_23 += 1) 
            {
                {
                    var_52 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [(short)16] [(short)16])))))) ? (((((/* implicit */_Bool) -650128544)) ? (((/* implicit */unsigned long long int) 7224869304119956580LL)) : (11111644407002156929ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (_Bool)1))))))));
                    arr_80 [i_21] = ((/* implicit */short) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        for (long long int i_25 = 0; i_25 < 14; i_25 += 3) 
                        {
                            {
                                var_53 *= ((max((((/* implicit */unsigned long long int) arr_57 [i_22])), (((7131718640935367446ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << ((((~(((/* implicit */int) arr_64 [i_24] [(signed char)14] [i_23] [i_24] [i_24] [i_23])))) + (286))));
                                var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) ((min((12201087271775161981ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_33 [i_21 - 2] [i_21 + 1] [i_21 - 1]), (arr_33 [i_21 - 3] [i_21 - 1] [i_21 + 1]))))))))));
                                arr_88 [i_24] [i_25] &= ((/* implicit */short) -1227591818);
                                var_55 -= ((/* implicit */unsigned long long int) arr_26 [(short)4] [i_24]);
                                arr_89 [i_21 - 2] [i_21] [i_21 - 2] [i_21 - 2] [i_25] = ((/* implicit */short) ((((5399248413616770713LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) 7224869304119956581LL)) ? (((/* implicit */int) (short)-19933)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) (unsigned char)78)) : (((((/* implicit */int) var_19)) + (((/* implicit */int) (unsigned char)161))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_13))) + (5284481853429728425LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 423900690)) ? (((/* implicit */int) ((short) -7224869304119956581LL))) : (((/* implicit */int) (short)31825))))))))));
    }
}
