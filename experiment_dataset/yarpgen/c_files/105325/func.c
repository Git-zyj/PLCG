/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105325
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [13] [i_1])))))) ? ((((+(((/* implicit */int) (unsigned char)31)))) << (((1809440630U) - (1809440617U))))) : (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_0] [i_0]))))));
            var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? ((+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) : (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8109920131183542446LL)) ? (((/* implicit */int) (unsigned short)24389)) : (((/* implicit */int) (unsigned char)237)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((4200352606U), (((/* implicit */unsigned int) var_4))))))) > (4294967295U)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                var_17 -= ((/* implicit */_Bool) var_5);
                var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)64926)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27862)))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)65513))));
            }
            for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) (_Bool)1);
                arr_11 [i_0] [i_1] [(unsigned char)4] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (2147483647))))) ? ((~((~(17465947358766650551ULL))))) : (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1] [15ULL]))) : (((/* implicit */int) max((arr_9 [i_0] [i_0] [i_3]), (((/* implicit */short) (_Bool)1))))))) * ((+(((((/* implicit */int) arr_0 [i_3] [i_3])) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0 - 1]))))))));
            }
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11750)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)219))));
        }
        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (~((-(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_8 [i_0] [i_5] [i_5] [(unsigned char)3]))))))));
                            var_23 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) 3642343476U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) : (652623832U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) < (67108863ULL)))))))), (((((((/* implicit */_Bool) 758757070016476879ULL)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_6])) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)58607))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17611527071756009161ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)632))) : (10066284109361489826ULL)));
        }
        var_25 *= ((/* implicit */unsigned short) (signed char)2);
    }
    /* LoopNest 2 */
    for (short i_8 = 2; i_8 < 19; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((int) ((((/* implicit */_Bool) -4143242461820945182LL)) ? (((/* implicit */unsigned long long int) 4039813561U)) : (8058603423728460041ULL)))) : (((/* implicit */int) (unsigned short)48817))));
                var_27 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned short)26278))))));
                var_28 = ((/* implicit */unsigned long long int) min((var_6), (max((((/* implicit */unsigned short) (short)22)), ((unsigned short)25870)))));
            }
        } 
    } 
}
