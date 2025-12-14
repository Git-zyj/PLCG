/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121619
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0 + 4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)17804)))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (((((/* implicit */_Bool) 8388607ULL)) ? (min((((/* implicit */unsigned long long int) -1029756388102063025LL)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 21ULL))))))));
        arr_4 [5] [i_0] = ((/* implicit */unsigned long long int) ((long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)95)))));
    }
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (-(var_9))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_0))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_4))))))))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min((max((-3940674010847888246LL), (((/* implicit */long long int) (short)-24994)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_9)))))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned short) var_11))), (((((/* implicit */_Bool) (-(0ULL)))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_2)), (var_3)))))) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (var_10)))));
    }
    for (short i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        arr_14 [i_2] &= ((((/* implicit */_Bool) min((max((var_0), (((/* implicit */int) var_7)))), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */int) var_4)), (var_0))), (var_0)))) : (var_3));
        /* LoopSeq 2 */
        for (int i_3 = 3; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_17 [i_2] [i_3] = ((/* implicit */unsigned short) ((_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_9))))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 1) 
            {
                arr_22 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))), (min((((var_5) ? (((/* implicit */unsigned long long int) var_11)) : (var_10))), (((/* implicit */unsigned long long int) var_11))))));
                arr_23 [i_3] [i_4] [i_4] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551610ULL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32743)))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_5), (var_7))))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_14 *= ((/* implicit */short) min((max((-8), (((/* implicit */int) (signed char)-2)))), (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                arr_26 [(_Bool)1] [(_Bool)0] [8LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-16))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (max((((unsigned long long int) var_7)), ((~(var_3)))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    arr_29 [i_3] [i_2] [i_3 + 2] [i_5 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_7))) >= (max((var_11), (((/* implicit */long long int) var_8))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9)))))))));
                    arr_30 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_5)) >> (((var_10) - (1613853888543694265ULL))))));
                    arr_31 [i_5] [i_3] [i_5 - 1] [i_5 - 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                }
                for (unsigned int i_7 = 3; i_7 < 17; i_7 += 2) 
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned short) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((_Bool) var_4)))))))));
                    arr_36 [i_2] [i_2] [i_3] [i_2 + 1] [i_2 - 1] [i_2] = ((/* implicit */int) ((short) (+(((((/* implicit */int) var_2)) << (((var_9) - (3314063269U))))))));
                }
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_16 -= ((/* implicit */unsigned long long int) var_6);
                arr_40 [i_2] [i_3] [i_8] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(var_0)))), (((unsigned int) var_11))))) ? (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29261))) != (2719675824U))), (((_Bool) var_6))))) : (((/* implicit */int) var_2)));
                arr_41 [i_3] [i_3] = ((/* implicit */short) (-(min((min((var_11), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (+(var_9))))))));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    arr_45 [i_2] [(short)4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((var_6), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_8)), (var_9))) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))))));
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_7))))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) (+((+(var_9))))))));
                    arr_46 [i_2] [(signed char)1] [i_3] [(signed char)1] = ((/* implicit */unsigned short) var_10);
                }
            }
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                arr_49 [i_2] [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_2)), ((~((~(-16)))))));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)32743)), (2719675824U)));
            }
        }
        for (int i_11 = 3; i_11 < 15; i_11 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_0)) - (min((min((((/* implicit */long long int) var_9)), (var_11))), (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) var_5)))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_6))))) & (var_10)));
            var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))))), (min((min((var_3), (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))))));
            arr_52 [i_2 + 1] [i_2 + 1] [10U] = ((/* implicit */short) ((_Bool) var_8));
        }
        arr_53 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((18446744073709551611ULL), (var_3)))))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)32743)), (min((((/* implicit */int) var_5)), (7)))))) : ((+(var_11)))));
    }
}
