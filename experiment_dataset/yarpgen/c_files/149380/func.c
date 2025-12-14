/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149380
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_5)) ? (703058604) : (arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (-7303933260838179056LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */long long int) (-(arr_2 [i_0] [i_0]))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_4 [0] [i_1 + 2])))) ? (((long long int) 7303933260838179046LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)1282)))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */long long int) (~(-276803707)))) + (2118889170595622031LL))), (((/* implicit */long long int) min((arr_3 [i_0]), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_3))))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) arr_4 [i_0] [i_2]);
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_2]) >= (arr_7 [i_0]))))) < (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [4ULL] [4ULL])) : (1801967200512666385ULL)))));
            var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)121))))) ? (min(((+(var_8))), (((/* implicit */long long int) ((unsigned int) (signed char)-55))))) : (((/* implicit */long long int) (-(-2128595911))))));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) min(((-(var_8))), (((((/* implicit */_Bool) (short)31556)) ? (-2118889170595622031LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))));
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_21 [i_0] [i_3] [i_0] [(short)0] |= ((/* implicit */int) min(((+(((((/* implicit */_Bool) arr_11 [6LL])) ? (((/* implicit */unsigned long long int) arr_11 [i_0])) : (1801967200512666385ULL))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_2)))))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1] [i_4])))) : (((((/* implicit */_Bool) max((var_3), (var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (15048078648005909976ULL)))) : ((~(var_5))))))))));
                    }
                } 
            } 
        }
        arr_22 [2] [2] = ((/* implicit */long long int) ((short) 403259331));
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            {
                arr_27 [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [(unsigned char)2] [i_6] [14LL])) & (var_10)));
                arr_28 [i_7] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)70))) ? (arr_23 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                arr_29 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) -9223372036854775792LL)) : (((unsigned long long int) arr_25 [i_6] [i_7] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_24 [i_6] [i_6]))) || (((/* implicit */_Bool) 34359730176LL)))))) : ((-(arr_23 [i_7])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned short i_10 = 1; i_10 < 11; i_10 += 1) 
            {
                {
                    arr_39 [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */int) (!(((1051300855) < (((/* implicit */int) arr_30 [i_8] [i_8]))))))) | (var_3)));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -1590532108)) != (4749963255345418094LL)));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((int) var_3))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_36 [4] [4] [4] [i_9])) : (((/* implicit */int) arr_31 [i_8] [i_9]))))), (((18446744073709551615ULL) << (((arr_24 [i_8] [i_9]) - (1293529845774285846LL))))))) : (((/* implicit */unsigned long long int) var_6)))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (arr_36 [i_10 - 1] [i_8] [i_8] [i_9])));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (signed char)-25))))) ? (((/* implicit */unsigned long long int) 7303933260838179055LL)) : (var_7)));
}
