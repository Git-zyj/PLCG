/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181466
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
    var_14 ^= ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_2 [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */signed char) ((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) : (var_9)));
                    arr_8 [i_0] [0LL] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || ((_Bool)1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((long long int) arr_0 [i_0] [i_1]));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)715)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4555))) : (593648748U)));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [18] [i_1] [i_3])) ? (((/* implicit */unsigned int) var_8)) : (4027204722U)));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((int) -556917058)) & ((((_Bool)1) ? (-556917069) : (((/* implicit */int) (short)-16936))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((_Bool) (short)32767));
                            var_21 = ((/* implicit */unsigned short) 971959374);
                            var_22 = ((/* implicit */short) ((unsigned char) ((-556917073) >= (153476005))));
                            /* LoopSeq 3 */
                            for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-1LL)))) ? (((((/* implicit */long long int) var_11)) ^ (arr_13 [i_7] [i_6] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_1] [i_6] [i_7])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_8 + 1] [i_1])))))));
                                arr_28 [i_1] [i_1] [i_6] [i_7] = ((/* implicit */unsigned short) var_3);
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
                            {
                                arr_31 [i_9] = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 6392269735578007463LL)) : (15933123693890088719ULL)))));
                                arr_32 [i_0] [i_6] [i_7] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_0)) ? (var_0) : (-117226820)))));
                                var_25 = ((/* implicit */int) (_Bool)1);
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_1))));
                            }
                            for (unsigned char i_10 = 2; i_10 < 19; i_10 += 1) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [19U]) : (var_8))), (var_8)));
                                var_28 *= ((/* implicit */long long int) min((arr_16 [19LL] [19LL] [19LL] [i_7] [19LL]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((891540231097259240ULL) >> (((var_8) - (1308855613)))))))))));
                                arr_35 [i_0] [i_0] [i_1] [i_1] [i_6] [i_10] [i_0] = min((var_4), (((/* implicit */int) ((((/* implicit */unsigned int) -1)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))) : (2987101087U)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_2);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) 267762574U)) ? (1277313690U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (~(var_10))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 7098766854475188999LL))))) : (min((((/* implicit */int) (unsigned short)53475)), ((~(((/* implicit */int) var_3))))))));
                            arr_42 [i_0] [i_1] [i_1] [i_1] [i_11] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-556917060))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (short i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_31 += ((/* implicit */unsigned int) arr_43 [i_0] [5] [(_Bool)1]);
                            var_32 = ((/* implicit */int) max((var_32), ((+(arr_15 [i_14 - 3] [i_14 - 3] [(_Bool)1] [i_13] [i_13] [i_13] [i_13])))));
                            /* LoopSeq 1 */
                            for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                            {
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (1277313690U)));
                                var_34 = ((/* implicit */_Bool) (((!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_13))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_13)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
