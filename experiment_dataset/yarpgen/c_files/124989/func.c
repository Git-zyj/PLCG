/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124989
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
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((-(2877960699U))))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((unsigned short) (unsigned char)255))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_14 = ((/* implicit */int) ((((/* implicit */long long int) 2877960690U)) <= (var_9)));
                arr_8 [i_0] = ((/* implicit */unsigned int) var_5);
            }
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((((var_2) + (((/* implicit */long long int) -217285678)))) + (((/* implicit */long long int) max(((-(1417006596U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))))))));
                var_16 = ((var_5) ^ (((/* implicit */int) max((((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) var_6))))), ((unsigned char)203)))));
                var_17 += ((/* implicit */_Bool) ((max((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_4)))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)37689)))))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned int) (signed char)71)), (var_11))))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_3]))))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26664)))))))));
            }
        }
        var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    }
    var_19 = ((/* implicit */unsigned int) (short)-8);
    var_20 &= ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)0));
    /* LoopSeq 3 */
    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_13 [i_4]))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4])) || (((/* implicit */_Bool) arr_13 [i_4]))))))) != (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (14346226314355774587ULL)))) | (1191354453))))))));
        var_23 = ((/* implicit */_Bool) (((!(arr_12 [i_4] [i_4]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4] [i_4])) % (((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) arr_12 [i_4] [i_4]))))))) : (((((/* implicit */unsigned long long int) -217285680)) - (4100517759353777024ULL)))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((unsigned int) var_11));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((int) (+(var_12)))))));
        var_26 = ((/* implicit */signed char) var_6);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((var_0) < (((/* implicit */long long int) (~(var_5))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_5))));
    }
    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned short i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_27 [i_8 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((unsigned short)27856)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned short) ((-217285670) != (((/* implicit */int) (signed char)0))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [(unsigned short)17] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned char)2])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7]))) : (arr_27 [i_7])))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */long long int) 1494303699U))))) ? (((long long int) var_5)) : (var_2))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */long long int) 1794734290U)) != (arr_25 [i_6 + 1] [i_6 + 1] [i_8 - 1]))))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_6 - 2])) ? (var_0) : (((/* implicit */long long int) -557659578))));
                        var_34 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_6 - 1])) : (((/* implicit */int) var_7))));
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_36 = ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_2)));
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                    {
                        arr_36 [1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14670)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((arr_32 [i_11] [i_8] [i_7] [i_6] [i_6] [i_6 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))))))));
                        arr_37 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (signed char)-1))));
                        var_38 = ((/* implicit */unsigned long long int) var_10);
                    }
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        arr_40 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)254)))))) : ((~(5222359931325806601ULL)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0))));
                        var_39 = ((/* implicit */_Bool) min((var_39), ((_Bool)1)));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (unsigned char)228))))))));
                    }
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_6 + 1] [i_7] [i_8] [i_8 + 1]))))) / (min((((long long int) arr_24 [i_6] [i_6 + 1] [(_Bool)1])), (((/* implicit */long long int) arr_34 [i_6 + 2] [i_6 + 2]))))));
                    var_42 += ((/* implicit */int) var_8);
                }
            } 
        } 
        var_43 = ((/* implicit */_Bool) -1403340121);
    }
    var_44 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) * (((/* implicit */int) var_10))));
}
