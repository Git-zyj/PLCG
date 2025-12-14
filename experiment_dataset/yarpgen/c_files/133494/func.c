/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133494
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
    var_12 *= ((/* implicit */signed char) min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((140737479966720ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) var_7)) : ((~(var_5))))))));
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) (signed char)122))))), (((unsigned short) var_3))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_5)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : ((+(18080931426521420543ULL)))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((signed char) var_1))) : (max((var_5), (((/* implicit */int) var_2)))))) + (2147483647))) << (((140737479966708ULL) - (140737479966708ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2U] [i_0]))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)66)))) + (arr_2 [i_0])));
            var_17 = ((/* implicit */unsigned char) min((var_17), (var_10)));
            var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 140737479966718ULL)) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)3840))))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((-(18446603336229584889ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446603336229584895ULL)) || (((/* implicit */_Bool) var_2)))))))))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) arr_3 [i_2] [i_0])))))));
        }
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (unsigned char i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-42)) ? (arr_7 [i_0] [i_3 - 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) var_1))));
                        var_22 = ((/* implicit */long long int) var_10);
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_7))) >> (((arr_7 [i_5 - 2] [i_4 + 1] [i_3 - 2]) - (4078309653634202004ULL)))));
                        var_24 = ((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 2])) ? (arr_1 [i_5] [i_3 + 1]) : (arr_1 [i_4] [i_3 - 2]));
                    }
                } 
            } 
            var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7340032)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned char)21)))))));
        }
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_3)))) ? (arr_8 [i_0] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                            var_27 = ((/* implicit */unsigned char) ((long long int) arr_3 [i_6 - 2] [i_6 + 1]));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                            arr_27 [i_9] [i_7] = ((/* implicit */signed char) var_4);
                            arr_28 [i_8] [i_8] [i_0] [i_7] = ((/* implicit */int) (unsigned short)9);
                        }
                    } 
                } 
            } 
            arr_29 [i_0] [i_6] = ((/* implicit */unsigned long long int) (short)-3840);
            var_29 = (~(var_0));
            /* LoopNest 3 */
            for (short i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 9; i_12 += 3) 
                    {
                        {
                            var_30 ^= ((/* implicit */short) var_10);
                            var_31 = ((/* implicit */int) (short)-3840);
                            var_32 = ((/* implicit */long long int) (-(arr_19 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            var_33 += ((/* implicit */unsigned char) arr_19 [i_6 + 1] [i_0]);
        }
        arr_36 [i_0] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [3ULL])));
        var_34 = (signed char)-3;
    }
    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-125)))), (((/* implicit */unsigned short) (unsigned char)241))))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_39 [(unsigned char)11])) : (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)125)))) : (((/* implicit */int) arr_42 [i_14] [i_14] [i_13]))));
            /* LoopNest 3 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            arr_51 [i_13] [i_15] [i_16] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) (+(var_1)))) + ((-(140737479966693ULL))))), (max((((/* implicit */unsigned long long int) (signed char)-41)), (3234735570202969052ULL)))));
                            var_36 = ((/* implicit */signed char) min((1785823382U), (((/* implicit */unsigned int) (signed char)125))));
                        }
                    } 
                } 
            } 
            arr_52 [i_14] [i_14] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-(2130706432))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22859))) : (arr_40 [i_13] [i_13])));
        }
        var_37 ^= ((/* implicit */unsigned short) max((((unsigned int) arr_44 [i_13] [i_13] [i_13])), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_39 [i_13])) : (var_0))))))));
        var_38 = ((max((max((arr_49 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */int) (unsigned short)14336)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58089))))))) - (((/* implicit */int) min((min((((/* implicit */unsigned short) var_2)), (var_11))), (max((arr_44 [i_13] [i_13] [i_13]), (((/* implicit */unsigned short) arr_45 [i_13] [i_13] [i_13] [i_13]))))))));
    }
}
