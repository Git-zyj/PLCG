/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182719
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_11 = min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)58))))), (var_5));
        var_12 = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [(short)10] [i_0])) == (((/* implicit */int) ((unsigned char) (signed char)25))))) ? (((/* implicit */int) var_6)) : (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)54553)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))))));
        var_13 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)-115)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (short i_4 = 4; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((long long int) arr_2 [i_4 - 4]));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 875099896))) ? (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))))));
                        arr_17 [9LL] [i_2] [i_2] [i_3] [i_4] [9LL] = ((((/* implicit */_Bool) -1454996877)) ? (8589934591ULL) : (((/* implicit */unsigned long long int) 2186549727U)));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((_Bool) arr_4 [i_1])))));
    }
    for (short i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) 4294967295U))));
        var_18 = ((/* implicit */unsigned short) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-427)) ? (3641483068285889667LL) : (((/* implicit */long long int) 258048U)))))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_24 [i_6] [i_6] = ((/* implicit */signed char) ((int) min((0U), (1056964608U))));
                    arr_25 [i_7] [i_7] [i_6] = ((/* implicit */short) (-(min((max((((/* implicit */long long int) 2858288066U)), (-4194304LL))), (((/* implicit */long long int) arr_6 [i_6 - 1]))))));
                    var_19 = ((/* implicit */signed char) (unsigned char)250);
                    var_20 = ((/* implicit */short) var_1);
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)105))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (var_9))))))));
    }
    var_22 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        var_23 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(0LL)))) ? (1378278598) : (((/* implicit */int) (signed char)7))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_24 = ((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_11 [i_8] [i_9] [i_9] [i_10])))) < (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5)))))))) * (min((((/* implicit */long long int) min(((short)32704), (((/* implicit */short) arr_28 [i_8] [i_8]))))), ((-(arr_26 [i_9]))))));
                    var_25 += ((/* implicit */long long int) (-((-(((/* implicit */int) var_5))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        var_26 = max(((((!(((/* implicit */_Bool) 9673104891489943543ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-6)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)243))))) : ((-(4294967295U))))), (0U));
                        var_27 = ((/* implicit */long long int) ((max((((/* implicit */int) max((var_8), (arr_6 [i_8])))), (-989726283))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (-1454996877) : (1122465732)))) == (arr_29 [i_9 + 1] [i_8]))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                    {
                        var_28 -= ((/* implicit */long long int) var_2);
                        var_29 = ((/* implicit */long long int) 11834069036294790184ULL);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) ((long long int) arr_40 [i_9 + 1] [i_8] [i_9]));
                        var_31 = ((/* implicit */unsigned int) ((max((arr_29 [i_9 + 1] [i_8]), (((/* implicit */unsigned int) arr_9 [16LL] [16LL] [i_9 - 1])))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [(_Bool)1]))) <= (18014394214514688ULL)))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_4 [i_8]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (17)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (1050510120) : (((/* implicit */int) (signed char)-112))))))))));
                        arr_41 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_8]) / (var_7)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (arr_6 [i_8]))))))) ^ (((/* implicit */int) min((arr_13 [i_8]), (min((var_8), (((/* implicit */unsigned short) var_5)))))))));
                        arr_42 [i_8] [i_9] [i_8] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_8] [i_9 - 1]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                    arr_48 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)201)) << (((248U) - (237U)))));
                }
            } 
        } 
        var_34 += ((/* implicit */signed char) ((((/* implicit */long long int) 1331439029)) / (8727096779857603822LL)));
    }
}
