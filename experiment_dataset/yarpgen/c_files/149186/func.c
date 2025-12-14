/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149186
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (signed char)-2))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) -1295204499)) % (arr_2 [i_1 - 1] [i_0])));
            var_13 += ((/* implicit */_Bool) ((8544245111980955698ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((8847341608487217862ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (var_3))))))), (((((/* implicit */_Bool) var_3)) ? (((long long int) 1508615913U)) : (4098363262907411142LL)))));
            var_14 |= ((/* implicit */_Bool) min((((12936564819963447278ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) min(((signed char)69), ((signed char)26))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)26))) / (-3706468708711254958LL))) != (((/* implicit */long long int) -764448207))));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned long long int) -3001126935902967663LL)), (min((((/* implicit */unsigned long long int) var_7)), (5510179253746104338ULL)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)98))))))) ? (max((((/* implicit */long long int) var_5)), (165472814027072081LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((7509200913686094273ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38111))) : (var_5)))))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_0]))) ? (((((-3170447071681827089LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_5] [i_2])))))) || (((/* implicit */_Bool) (unsigned char)158))));
                            var_19 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) arr_2 [i_6] [i_0])) / (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (3532797595336439049LL))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [(unsigned short)6] [(_Bool)1] [i_6])) - (764448206)));
                            arr_23 [i_2] [i_2] [i_5] [i_6] [(unsigned short)3] [7] [i_0] = ((/* implicit */signed char) ((((arr_8 [(signed char)1] [(signed char)1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [(_Bool)1] [(short)1]))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) != (5142649811449103694ULL))))));
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)84)), (min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_8])) != (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))), (764448207)))));
                            arr_26 [i_0] [i_6] [i_0] [(signed char)1] [i_0] = ((/* implicit */long long int) ((4193885333U) != (((/* implicit */unsigned int) -1579554781))));
                        }
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            arr_29 [i_9] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */long long int) min((min((12936564819963447278ULL), (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) % (8847341608487217862ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8058)) & (((/* implicit */int) ((((/* implicit */int) var_8)) != (arr_3 [i_0])))))))));
                            var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) max(((unsigned short)40869), ((unsigned short)12385)))) + (min((var_4), (((/* implicit */int) (signed char)77)))))) ^ (((int) max((((/* implicit */unsigned long long int) (signed char)-117)), (arr_12 [i_0] [i_0] [i_9] [i_6]))))));
                            var_23 = ((/* implicit */short) var_7);
                            arr_30 [i_9] [i_0] [i_5] [i_0] [i_0] = ((signed char) min((max((16117564150485961246ULL), (((/* implicit */unsigned long long int) (signed char)-76)))), (((/* implicit */unsigned long long int) 1368001338U))));
                        }
                        var_24 = ((/* implicit */long long int) ((short) (-(var_7))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_5)), (arr_33 [i_10] [i_2] [(unsigned short)1]))) % (((/* implicit */long long int) (-(((((/* implicit */_Bool) -1836938747)) ? (2326670027U) : (((/* implicit */unsigned int) 1166625767)))))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)173), (((/* implicit */unsigned char) (signed char)-26))))) > (((/* implicit */int) arr_27 [i_0]))))) / (max((((/* implicit */int) (unsigned char)48)), (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (short)-16871)) : (((/* implicit */int) arr_28 [i_0]))))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_2] [i_2] [i_2] [i_11] [(signed char)3]))) | (-2434619254614400135LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_36 [i_0] [i_2] [i_11])));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((signed char) 735319945U)))));
            }
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned char i_13 = 2; i_13 < 12; i_13 += 3) 
            {
                for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
                {
                    {
                        arr_45 [i_0] [i_0] [i_0] [(signed char)0] [i_13] [i_14] = ((/* implicit */unsigned int) arr_21 [i_0] [i_12] [i_13] [i_14]);
                        arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) 6518565302308647662LL));
                        var_29 = ((/* implicit */_Bool) max(((+(((10937543160023457342ULL) >> (((var_5) - (2647109811U))))))), (max((((((/* implicit */_Bool) arr_39 [i_0] [i_12] [9U] [1LL])) ? (arr_44 [(signed char)12] [2ULL] [i_12] [11ULL]) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)73)) != (((/* implicit */int) (unsigned short)4733)))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned short) var_4);
    }
}
