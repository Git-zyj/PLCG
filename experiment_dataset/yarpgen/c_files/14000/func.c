/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14000
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
    var_20 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) 7413915848154944006ULL));
        arr_4 [i_0] = ((/* implicit */short) 7413915848154943991ULL);
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            arr_7 [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 2])) < (((/* implicit */int) arr_1 [i_0 + 1]))));
            arr_8 [(signed char)8] [i_0] [i_1 + 2] = ((/* implicit */unsigned char) arr_1 [i_0]);
            arr_9 [i_0] [i_0] = ((/* implicit */short) 3789473722904073943ULL);
            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1])) : (((/* implicit */int) var_11))));
        }
        for (short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            arr_15 [(signed char)10] &= ((2097450142601561020LL) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_2 - 2]))));
            arr_16 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) == (((/* implicit */int) (unsigned short)65535)))) || (((/* implicit */_Bool) ((arr_13 [i_0] [15ULL] [i_2 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
            arr_17 [i_0] [(short)14] [2U] = ((/* implicit */short) ((unsigned long long int) arr_11 [(signed char)6]));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_21 [(short)0] |= ((/* implicit */signed char) (+(393183311)));
            arr_22 [i_0] [8LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 7413915848154944000ULL))) ? (4390666507246877166ULL) : (((/* implicit */unsigned long long int) 393183299))));
            arr_23 [i_0] [(unsigned short)2] = ((unsigned long long int) ((((/* implicit */int) (unsigned short)37073)) < (((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (int i_4 = 1; i_4 < 14; i_4 += 4) 
        {
            arr_28 [i_0] [i_4 - 1] [(unsigned char)12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0]))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_6 = 3; i_6 < 14; i_6 += 3) 
                {
                    arr_33 [i_0] [5LL] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((293112295) >> (((11814809252531941023ULL) - (11814809252531941013ULL))))) : (((((/* implicit */_Bool) 253341224)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0]))))));
                    arr_34 [i_0] [i_4 + 1] [i_5] [i_0] = ((/* implicit */long long int) (short)12130);
                    arr_35 [(short)0] [4ULL] [i_5] [i_6] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) ((6757951093705812769ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4412)))))) + (393183309)));
                    arr_36 [i_0] [i_4 - 1] [i_0] [i_6 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-67)) & (((/* implicit */int) (_Bool)1))))) != (4390666507246877169ULL)));
                    arr_37 [i_0 - 1] [i_0 - 1] [i_5] [10LL] [i_4] [(short)4] = ((/* implicit */short) arr_19 [i_0] [i_0] [i_0 - 2]);
                }
                arr_38 [i_0] [6LL] [i_5] = ((unsigned long long int) arr_27 [i_0 - 1] [i_4 + 1]);
                arr_39 [(signed char)0] [i_5] [i_0] [(signed char)0] = ((/* implicit */short) ((11032828225554607598ULL) + (arr_14 [i_0 - 1] [i_0 - 1])));
            }
            for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                arr_43 [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [8U]))) + (arr_20 [(unsigned char)6] [i_4 - 1] [i_4 + 1])));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        {
                            arr_49 [14U] [i_4] [i_7] [i_8] [i_9 - 1] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_50 [i_0] [15U] [15U] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_4 - 1] [i_8] [i_8] [i_8 + 3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_4 + 2])))));
                        }
                    } 
                } 
                arr_51 [i_4] [i_4] [i_4] [4LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-872249067) - (((/* implicit */int) (unsigned short)61332))))) ? (arr_20 [i_4 + 1] [i_4 + 1] [i_4 + 2]) : (((/* implicit */long long int) arr_41 [i_0] [i_0 - 2] [i_0 - 3]))));
            }
            arr_52 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_17)))) < (16822722466154817490ULL)));
        }
        arr_53 [(signed char)12] = ((/* implicit */long long int) ((_Bool) (-2147483647 - 1)));
    }
    for (long long int i_10 = 2; i_10 < 8; i_10 += 1) 
    {
        arr_58 [i_10] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(short)12]))))), ((-(((/* implicit */int) arr_25 [4LL]))))));
        arr_59 [i_10] [i_10] = ((/* implicit */unsigned int) var_0);
    }
    for (long long int i_11 = 2; i_11 < 23; i_11 += 1) 
    {
        arr_64 [i_11 + 1] = (short)-9911;
        arr_65 [i_11] = ((/* implicit */short) ((unsigned int) (+(-65575306))));
        arr_66 [i_11] |= ((/* implicit */long long int) var_11);
    }
    var_21 = ((/* implicit */unsigned int) max((7469518851365362613ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
}
