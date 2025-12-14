/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138732
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1 - 2] [(short)8] = ((((/* implicit */_Bool) ((long long int) (unsigned char)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((17469428796254743395ULL) > (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)254))))), (((((/* implicit */_Bool) 295895251)) ? (14122214963684017685ULL) : (((/* implicit */unsigned long long int) 1120404427)))))));
                var_17 = ((((/* implicit */_Bool) 342434802)) ? (min((15545102910590590161ULL), (((/* implicit */unsigned long long int) (unsigned char)165)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4324529110025533931ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21407))) : (2434125485827970797LL)))));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 6963302662966372838ULL)) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (9007199254740992ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_5) >> (((min((arr_1 [i_0] [i_1 + 1]), (415204181017461735LL))) - (415204181017461722LL)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_19 = arr_0 [i_2 - 1] [i_2 - 1];
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-6285))));
        var_21 = ((/* implicit */unsigned char) 5ULL);
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 4; i_3 < 15; i_3 += 4) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1047426123))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 1637162454)), (var_0)))) ? (((((/* implicit */_Bool) 1998980563354972614LL)) ? (-3797420712603648264LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)240))))) : (3128473590012797179LL)))))));
        arr_12 [i_3] [i_3] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 702960858U)) ? (702960842U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26833)))))), ((-(13081184639890868399ULL)))));
    }
    /* vectorizable */
    for (short i_4 = 4; i_4 < 11; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_18 [i_4] [(short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4 - 3]))));
            arr_19 [i_5] [i_4] [i_4 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)19)) ? (1615516135U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 + 1])))));
        }
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_16 [i_4 - 4] [i_4] [i_4]);
            var_24 = ((/* implicit */long long int) (-(arr_9 [i_4 - 3])));
            /* LoopSeq 2 */
            for (int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 5ULL))));
                            var_26 = ((((/* implicit */_Bool) arr_25 [i_4 - 4] [(short)1] [(short)1])) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                            var_27 = ((/* implicit */int) var_0);
                            arr_28 [7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_7 - 1])) ? (var_7) : (((/* implicit */long long int) 1120404427))));
                            var_28 = arr_21 [i_4];
                        }
                    } 
                } 
                arr_29 [i_7] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                arr_33 [i_6] [i_6] |= ((/* implicit */unsigned char) (short)21);
                arr_34 [i_4] [i_4 - 1] [i_4 - 3] [i_4 - 3] = ((/* implicit */unsigned int) (unsigned short)1982);
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((short) (short)30978)))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_40 [i_12] [i_10 + 1] [i_4] = ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_6 - 1] [i_11])) ? (var_3) : (((/* implicit */long long int) arr_16 [i_6] [i_6 + 1] [i_6])));
                            var_30 = ((unsigned char) arr_24 [i_4] [i_6] [i_4 - 4] [i_6] [0]);
                        }
                    } 
                } 
            }
            arr_41 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-18927)) + (2147483647))) >> (((/* implicit */int) (unsigned char)15))));
        }
        var_31 = ((12280572628245726913ULL) << (((arr_10 [i_4 + 1]) + (450906710))));
        var_32 = ((/* implicit */unsigned long long int) arr_26 [i_4 + 1] [i_4 - 3] [i_4 - 3] [i_4 - 4] [i_4]);
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)18)) ? (((3292409733U) << (((/* implicit */int) (unsigned short)13)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22)))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        arr_46 [i_13] [i_13] = ((/* implicit */int) (short)3655);
        var_34 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -1LL)) ? (4324529110025533931ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -4611686018427387904LL))) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) ((((/* implicit */long long int) -1487839656)) >= (-6294430489219245934LL)))))))));
        var_35 += ((/* implicit */int) (!(((/* implicit */_Bool) 4060989786760603366LL))));
        arr_47 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) 9976837868371630601ULL)) ? (arr_44 [i_13] [i_13]) : ((-(arr_45 [i_13] [i_13])))));
    }
}
