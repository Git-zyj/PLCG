/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166941
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
    var_18 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (signed char)-126);
                    arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) var_7)) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1660)) ? (((/* implicit */int) var_14)) : (arr_3 [i_0])))) ? (((/* implicit */long long int) ((22) % (((/* implicit */int) (unsigned short)63885))))) : ((~(302313282176256216LL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) arr_0 [(short)18]);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1660)) ^ (((/* implicit */int) (unsigned short)7680))))), (((unsigned long long int) 1129353708)))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)-13602)) > (((/* implicit */int) (unsigned short)63876))))))))));
                                arr_24 [i_3] [i_5] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((-302313282176256200LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)1660)) - (1660)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) -302313282176256211LL)))))));
                                var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_8 + 1] [i_8 - 1] [i_5 - 1] [i_5 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))))) : ((~(arr_15 [i_5 - 1] [i_8 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_23 [(short)1] [(short)1] [4ULL] [i_3] [i_3])) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                {
                    arr_38 [i_10] [i_10] [i_11] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10]))) > (arr_10 [i_10] [i_11]));
                    var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((-302313282176256197LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) : (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (-302313282176256189LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))));
                    var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((17847226562150914783ULL) ^ (((/* implicit */unsigned long long int) arr_13 [i_10]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (1455198717U)))) : (((/* implicit */int) (short)14963))))) ? (((arr_5 [i_10] [4]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)28))))))))));
                }
            } 
        } 
        arr_39 [i_10] [i_10] = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) (unsigned char)222)))) ? (645681325U) : (((/* implicit */unsigned int) 1388323985)))) << (((((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)65535)))) + (24)))));
        var_25 |= ((/* implicit */long long int) ((unsigned int) 2357656542828111202ULL));
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_26 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) -302313282176256211LL)) || (((/* implicit */_Bool) (unsigned short)65516)))) || (((((/* implicit */_Bool) (signed char)50)) || (((/* implicit */_Bool) (signed char)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (302313282176256195LL)));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (signed char i_15 = 2; i_15 < 11; i_15 += 1) 
            {
                {
                    var_27 = ((((/* implicit */int) max((arr_32 [i_13] [i_13] [i_13]), (max((((/* implicit */short) arr_34 [i_14] [(unsigned short)10])), (arr_9 [i_13] [i_13])))))) >> (((((/* implicit */_Bool) arr_18 [i_15] [i_13] [i_15] [i_15] [(signed char)6] [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)228)) >> (((((/* implicit */int) var_17)) + (20784)))))) : (599517511558636833ULL))));
                    arr_47 [i_13] [i_14] [i_13] [i_13] = ((((((/* implicit */_Bool) max((302313282176256211LL), (((/* implicit */long long int) var_0))))) ? (((3296055494U) << (((((/* implicit */int) (short)18897)) - (18884))))) : (((unsigned int) 998911801U)))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)27886))))));
                    var_28 ^= ((/* implicit */signed char) 17847226562150914801ULL);
                    var_29 = (((-(((/* implicit */int) (unsigned short)33838)))) + (((/* implicit */int) ((_Bool) (signed char)92))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_34 [i_13] [i_13])), (var_10))))) | (((((/* implicit */_Bool) ((((/* implicit */int) (short)8191)) >> (((arr_10 [i_13] [i_13]) - (1971890613U)))))) ? (max((((/* implicit */unsigned int) (signed char)-76)), (2839768572U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_13]))))))))));
        /* LoopNest 3 */
        for (short i_16 = 4; i_16 < 11; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    {
                        arr_56 [i_13] [i_18] = ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (max((arr_0 [i_13]), (((/* implicit */long long int) (short)-2279)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_13])))))));
                        var_31 *= ((/* implicit */unsigned int) ((_Bool) (short)21613));
                        var_32 = ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_16 - 2]));
                    }
                } 
            } 
        } 
    }
    var_33 = var_11;
}
