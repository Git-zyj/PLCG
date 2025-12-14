/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139218
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
    var_12 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) ((unsigned short) ((short) var_4)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) min((var_5), (((_Bool) (+(((/* implicit */int) (signed char)-15)))))));
            var_14 &= ((/* implicit */unsigned short) min((min((((var_8) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (((+(((/* implicit */int) (signed char)29)))) * (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)0] [i_1])) : (((/* implicit */int) var_9)))))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_14 [i_3] = arr_9 [i_3];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_2] [i_2] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_3] [i_5]))));
                        var_15 += ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) var_7))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_3] [i_4] [i_3] = (signed char)-17;
                        arr_21 [i_2] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) 6410666958745772688LL)))) ? (((/* implicit */long long int) arr_11 [i_3])) : (max((((/* implicit */long long int) min(((short)-15929), (((/* implicit */short) var_11))))), (arr_3 [i_3] [i_6])))));
                        arr_22 [i_2] [i_3] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (arr_2 [20LL])));
                        arr_23 [i_2] [i_3] [i_2] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)94))))) || (((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) (unsigned short)38469))));
                    }
                    arr_24 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_8 [i_4] [i_3] [12ULL])) / (arr_9 [i_3]))), (((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_8 [i_2] [(unsigned short)15] [i_4]))))));
                    arr_25 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((max((((var_8) ? (1302317194100775416ULL) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) != ((+(var_7)))))))));
                }
            } 
        } 
        arr_26 [i_2] = ((/* implicit */signed char) (unsigned char)3);
        arr_27 [i_2] = ((/* implicit */int) 9223372036854775807LL);
        arr_28 [i_2] [i_2] = ((/* implicit */_Bool) (signed char)105);
    }
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (signed char i_7 = 4; i_7 < 18; i_7 += 2) 
    {
        for (short i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_39 [11U] [11U] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (max((var_10), (((/* implicit */unsigned int) var_11)))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8] [i_9])))))))) ? (((6410666958745772688LL) / (((/* implicit */long long int) arr_4 [i_7])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_6)))))));
                    arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4040018420U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned int) var_5)), (var_7))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))))));
                    var_17 ^= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551604ULL)) || (((/* implicit */_Bool) (unsigned char)0))))), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))))));
                }
            } 
        } 
    } 
}
