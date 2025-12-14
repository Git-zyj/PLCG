/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133620
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
    var_17 |= ((/* implicit */unsigned char) ((unsigned long long int) -2015228538));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        var_18 = 2015228527;
                        var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) (short)24944)), (2015228538)))) > (var_2)))), (((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_0)))))));
                        var_21 = 2015228538;
                        var_22 = ((/* implicit */unsigned char) ((long long int) max((max((var_14), (((/* implicit */int) arr_1 [i_2] [i_4])))), (((/* implicit */int) (unsigned char)6)))));
                        var_23 = (-(((/* implicit */int) var_7)));
                    }
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1])), (-2015228562)))) ? ((+(2015228538))) : (min((var_6), (((/* implicit */int) arr_0 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) var_0);
                                var_26 = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_8)) ^ (2015228549))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (~(2015228538)))))))));
                                var_27 = ((/* implicit */signed char) ((arr_1 [i_0] [i_5]) ? (arr_3 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_15) ^ (((/* implicit */unsigned int) 323276872)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) var_4);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            var_29 |= ((/* implicit */_Bool) var_14);
            var_30 |= ((/* implicit */unsigned char) -2015228524);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) | (2015228538)));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_16 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] [i_9]))))));
                        var_33 |= ((/* implicit */int) (unsigned char)6);
                        var_34 = ((/* implicit */_Bool) ((int) 2015228544));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            var_35 = ((/* implicit */int) 3365950245341788490LL);
            var_36 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) arr_21 [i_0] [(signed char)0] [i_0])) : (arr_4 [i_10])))));
            var_37 = ((/* implicit */long long int) (unsigned char)230);
            var_38 |= ((/* implicit */unsigned int) arr_1 [i_10] [i_0]);
            var_39 = ((/* implicit */unsigned long long int) var_9);
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            var_40 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                            var_41 = ((/* implicit */unsigned long long int) (+(((long long int) arr_2 [i_13] [i_12]))));
                        }
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)26)))) / (((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) (unsigned char)124);
                        var_44 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (unsigned char)120)) : (2015228538)))) & (((unsigned int) var_1))));
                        var_45 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_15]))));
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) & (((4836327240495155942ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
    {
        var_47 |= ((/* implicit */unsigned int) -2015228527);
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
            {
                {
                    var_48 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                    var_49 |= ((((/* implicit */_Bool) 11831312793330582829ULL)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (short i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_50 |= ((/* implicit */long long int) arr_36 [i_17] [i_18] [i_17] [i_19] [i_20] [i_21]);
                                var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_19 [i_17] [i_17] [i_17])) == (var_13))))))) ? (((/* implicit */int) arr_46 [i_17] [i_17])) : (var_13))))));
                                var_52 = ((/* implicit */_Bool) (unsigned char)230);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        var_53 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_18] [i_18]))) : (6240461975456799240ULL)))) ? (arr_12 [i_18] [i_18]) : (((/* implicit */int) ((signed char) var_12))))) & (((/* implicit */int) max((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_35 [i_17] [i_18] [i_22] [i_22])))), (((-2015228562) <= (((/* implicit */int) arr_26 [i_18] [i_22] [i_18])))))))));
                        var_54 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_17] [(unsigned char)4] [i_22] [i_17])) ^ (2015228562)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-44))))) : (min((arr_7 [i_18] [(signed char)9] [i_22]), (((/* implicit */unsigned int) var_6)))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
                        {
                            var_55 |= ((/* implicit */unsigned int) ((((var_1) && (((/* implicit */_Bool) 2015228541)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_27 [i_24]))))) : (((/* implicit */int) ((_Bool) var_11)))));
                            var_56 |= ((/* implicit */unsigned long long int) arr_45 [i_23]);
                        }
                        for (signed char i_25 = 0; i_25 < 18; i_25 += 1) 
                        {
                            var_57 = ((/* implicit */unsigned char) var_1);
                            var_58 = (+(((/* implicit */int) ((6240461975456799240ULL) >= (((/* implicit */unsigned long long int) 2015228562))))));
                            var_59 = ((/* implicit */_Bool) (unsigned char)6);
                        }
                        var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_33 [i_17] [i_18]) ? (((/* implicit */int) arr_33 [i_17] [i_18])) : (((/* implicit */int) var_11))))) ? (((long long int) -2015228561)) : (((/* implicit */long long int) ((/* implicit */int) min((arr_33 [i_17] [i_17]), (arr_33 [i_18] [i_18])))))));
                        var_61 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)124)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_18] [i_18] [i_18])))))));
                    }
                }
            } 
        } 
        var_62 = ((/* implicit */unsigned char) ((((12019690854560214851ULL) * (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) 1442027797))));
    }
}
