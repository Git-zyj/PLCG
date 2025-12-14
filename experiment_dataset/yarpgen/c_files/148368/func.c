/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148368
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_3])) ? ((~(3012026099U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */int) (-(0ULL)));
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1 - 3] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2])))))) != (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1576202468794935445LL)))))) % (min((4689933713007981941LL), (((/* implicit */long long int) (short)-1))))))));
                        var_14 = ((/* implicit */unsigned int) ((3693141505104048647LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_14 [i_4] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((min(((-(var_12))), (((long long int) -2167283250247113102LL)))), ((~(((((/* implicit */_Bool) var_12)) ? (4996567832704522154LL) : (((/* implicit */long long int) -1130534161))))))));
                    }
                    var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_9 [i_1 - 3] [i_1 + 1])), (min((209345449), (((/* implicit */int) arr_9 [i_0] [i_1])))))), ((~(((((/* implicit */_Bool) (unsigned short)42636)) ? (((/* implicit */int) arr_11 [i_1] [i_2])) : (((/* implicit */int) arr_12 [4U] [i_0] [i_0] [i_2]))))))));
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */int) ((short) ((((((/* implicit */long long int) -1075567523)) & (-7986566321890256167LL))) % (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22900))) & (-7986566321890256167LL))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_5);
    var_17 += (~(min((((/* implicit */int) var_2)), ((~(((/* implicit */int) (unsigned short)42636)))))));
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_18 |= ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) (short)20422)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) -7986566321890256167LL)) ? (((/* implicit */int) (unsigned short)42607)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
        var_19 = ((/* implicit */_Bool) var_10);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) min((4095U), (((/* implicit */unsigned int) (unsigned short)22900))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31286))) : (((((/* implicit */_Bool) 7986566321890256166LL)) ? (1032192LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24581))))))) : (arr_17 [i_5] [i_5])));
        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)57877)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22919)))))));
    }
    for (signed char i_6 = 4; i_6 < 15; i_6 += 1) 
    {
        var_22 = ((/* implicit */long long int) arr_18 [i_6]);
        arr_21 [i_6] [i_6] = ((/* implicit */_Bool) -1LL);
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((long long int) min((arr_18 [i_7 - 2]), (((/* implicit */short) (_Bool)1)))));
                    arr_30 [3LL] [i_6] [3LL] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42636))) / (((long long int) (-(861601808U))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) 1930028983U);
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 11; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            arr_38 [i_9 - 3] [i_9 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4193280U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_9]))));
            /* LoopSeq 3 */
            for (long long int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (0LL)))) ? (((((/* implicit */_Bool) var_4)) ? (1074683791610189618LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_9] [i_9 - 4] [i_9]) || (((/* implicit */_Bool) (signed char)3))))))));
                var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10)))) ? (((/* implicit */int) ((1311922050) <= (((/* implicit */int) (unsigned short)22900))))) : (((/* implicit */int) var_8))));
            }
            for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                arr_47 [i_9] [i_10 - 1] [i_12] = ((((/* implicit */int) (unsigned short)42395)) <= (arr_42 [i_9 - 2] [i_10] [i_12]));
                var_27 = ((/* implicit */int) 7588815411144762481LL);
                var_28 -= ((/* implicit */unsigned int) (+(2147483644)));
            }
            for (long long int i_13 = 2; i_13 < 13; i_13 += 1) 
            {
                arr_51 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9 - 1] [i_10 + 1] [i_13 - 2])))));
                arr_52 [i_9] [i_10] [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) ((-2147483643) != (((/* implicit */int) (unsigned short)1920)))))));
            }
        }
        arr_53 [i_9] = ((/* implicit */_Bool) ((int) 2887648551115386646LL));
        arr_54 [i_9] = ((/* implicit */signed char) (~(2817050996U)));
    }
    for (short i_14 = 0; i_14 < 11; i_14 += 1) 
    {
        arr_58 [i_14] [i_14] = ((/* implicit */unsigned char) 8084901860917969535LL);
        var_29 ^= ((/* implicit */int) ((((arr_19 [i_14]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_14] [i_14] [11])) ? (((/* implicit */int) arr_41 [i_14] [i_14] [i_14])) : (-2038146737)))) : (((((/* implicit */_Bool) 7986566321890256180LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6790441666220265592LL))))) < (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_44 [i_14] [i_14])) ? (arr_45 [i_14] [i_14] [i_14]) : (arr_49 [(unsigned short)4] [i_14] [6U]))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-66)))))))));
        arr_59 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((short)19932), (((/* implicit */short) ((((/* implicit */int) (unsigned short)55954)) <= (((/* implicit */int) (signed char)-1))))))))) % (min((arr_17 [i_14] [i_14]), (((/* implicit */long long int) (-(var_0))))))));
    }
}
