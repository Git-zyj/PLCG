/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109596
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) var_10)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_11 [i_2 - 1] [i_4] [i_2 + 1] [i_3 - 1] [i_3 - 1] [i_2]))))))));
                                var_15 = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (arr_4 [i_2 + 1])));
                        /* LoopSeq 4 */
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_5] [i_2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_8))))));
                            var_16 *= var_10;
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 + 1] [i_5])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 1] [i_5]))));
                            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-4648))));
                            var_19 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) var_10)))));
                            var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_5]))));
                            arr_25 [i_0] [i_7] [i_2] [i_5] [i_0] = ((/* implicit */int) ((long long int) 4953526379376780230ULL));
                        }
                        for (signed char i_8 = 2; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            arr_28 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1] [i_0] [i_2 + 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8 - 1] [i_0] [i_2] [i_0] [i_0])))))) ? ((~(((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 1] [i_0])))) : (((/* implicit */int) var_1))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0])) && (((/* implicit */_Bool) arr_26 [i_0]))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) var_12)))))));
                        }
                        for (signed char i_9 = 2; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) (short)4626))));
                            var_24 = ((unsigned short) (+(var_2)));
                            arr_32 [i_0 + 3] [i_0] [i_2 - 1] [i_0] [i_5] = ((((/* implicit */int) var_0)) >> (((arr_31 [i_0] [i_0 + 2] [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_9 - 2]) - (70502112U))));
                        }
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((unsigned int) var_4)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1] [i_2 - 1] [i_5] [i_5] [i_5]))))))));
                    }
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((-(((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) - (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_13 [i_2] [i_1] [i_2 - 1] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_2] [i_0 + 2] [i_0] [i_2 - 1]))) : (var_6)))))))))));
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_2] [12LL] [i_1])) ? (max((((/* implicit */unsigned long long int) var_7)), (min((5043401668040925051ULL), (((/* implicit */unsigned long long int) (short)-4657)))))) : (((/* implicit */unsigned long long int) (~(max((arr_9 [i_0] [12ULL] [i_1] [i_2]), (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_6)))) > (((((/* implicit */unsigned long long int) ((long long int) var_11))) + (var_2)))));
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 14; i_11 += 1) 
        {
            {
                var_29 = ((/* implicit */int) (-((((!(((/* implicit */_Bool) var_7)))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_11] [i_11] [i_11] [i_11])), (var_10))) : (arr_22 [i_10] [i_11] [i_10] [i_11] [i_10])))));
                arr_40 [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((6LL) > (((/* implicit */long long int) -760571429)))))));
                var_30 = (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_10])) != (((/* implicit */int) var_7))))));
                arr_41 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 9069760215127199480ULL)) ? (1016244297344246448ULL) : (((/* implicit */unsigned long long int) 165497786)))) >> (((-6LL) + (62LL))))))));
            }
        } 
    } 
}
