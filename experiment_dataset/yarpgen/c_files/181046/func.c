/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181046
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
    var_18 = ((/* implicit */signed char) min((((unsigned char) ((unsigned long long int) (unsigned short)6085))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)6080), (((/* implicit */unsigned short) var_17))))))))));
    var_19 = ((/* implicit */long long int) var_11);
    var_20 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3143341960050650597LL)) < (((((/* implicit */_Bool) (unsigned short)59455)) ? (15908741913434053000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)59439))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_22 |= ((/* implicit */signed char) arr_4 [(unsigned char)6]);
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_1 - 1] [i_1]))))) ? ((+(((/* implicit */int) arr_8 [i_3] [(short)6] [i_1 + 3])))) : (((/* implicit */int) ((signed char) arr_9 [i_1] [i_1 + 3] [i_2 + 3] [i_3])))))));
                    var_24 += ((/* implicit */int) ((short) (unsigned short)6072));
                    var_25 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2])))) : (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_3]))))) : ((-(0))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_23 [i_4] [i_5] [i_5] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)92)) ? (arr_17 [i_6 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_4] [i_4] [i_4 + 1] [i_4 + 3] [i_4 - 1] [i_4 + 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5])))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)59452)) <= (((((/* implicit */_Bool) arr_17 [i_7])) ? (((/* implicit */int) arr_18 [i_4 + 3])) : (((/* implicit */int) arr_19 [i_4] [i_5])))))))) : (((unsigned int) (-(((/* implicit */int) (unsigned short)59455)))))));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_14 [i_4] [i_4 + 1]) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_21 [(signed char)2] [i_5] [(signed char)2] [i_7]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (int i_9 = 4; i_9 < 14; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */long long int) arr_32 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_14 [(_Bool)1] [i_10]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4]))))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_32 [i_4 + 2] [i_4 + 2] [i_9] [i_10])) : (((/* implicit */int) (signed char)38))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */int) (unsigned short)6056)) : (((/* implicit */int) (signed char)-86))))) : (((unsigned long long int) min((((/* implicit */int) arr_22 [i_4] [5U] [(unsigned char)9] [(signed char)9] [i_4 + 1])), (1451311606)))))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) 521952279U)) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 3]) : (((/* implicit */int) (short)16604))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
            {
                for (signed char i_14 = 1; i_14 < 9; i_14 += 4) 
                {
                    {
                        arr_41 [i_11] [i_11] [i_12] [i_13 + 2] [i_14 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [i_11] [14U] [i_11])) ? (((/* implicit */int) (unsigned short)59444)) : (((/* implicit */int) (unsigned short)59450))))))) ? (arr_29 [i_11] [i_13] [i_13]) : (((/* implicit */int) (!(((/* implicit */_Bool) 31U)))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1451311629)), (-764726150649964754LL)))) ? (((/* implicit */int) (unsigned char)171)) : (min((7), (30)))))), ((-(2088419901U))))))));
                        arr_42 [i_11] [i_12] [6] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) 1451311629)), (arr_2 [i_11]))) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_13 [i_13 + 1])) - (arr_12 [i_11] [(unsigned char)7] [(unsigned char)7]))) - (486543696)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_11] [i_12] [i_13 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_11] [i_12] [(_Bool)0] [(signed char)4] [i_14]))) : (arr_17 [i_11])))))) : ((-(((((/* implicit */_Bool) (short)-16384)) ? (arr_17 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16386)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) (signed char)-50)) && (((/* implicit */_Bool) (signed char)-49)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) -1451311626))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3161883450U))))) : (((/* implicit */int) (unsigned short)8190))))) : ((((!(((/* implicit */_Bool) arr_36 [i_15] [i_13])))) ? (((((/* implicit */_Bool) (signed char)49)) ? (arr_20 [i_11] [i_11] [13] [i_11] [i_11] [5LL]) : (((/* implicit */long long int) 861742738)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                            arr_45 [i_11] [i_12] [i_12] [i_12] [i_14] [i_14 + 1] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)4096))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (10107853534826347685ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52)))))) ? (((int) (signed char)-65)) : ((+(((/* implicit */int) arr_10 [9ULL] [i_13] [i_15]))))))) ? (((((/* implicit */_Bool) arr_28 [(unsigned short)4] [i_13] [i_13 + 2] [i_14 - 1])) ? (arr_28 [(unsigned char)1] [i_11] [i_13 + 2] [i_14 - 1]) : (arr_28 [i_13 + 1] [i_13] [i_13 + 2] [i_14 + 1]))) : (((/* implicit */long long int) 1398165582U))));
                            arr_46 [6U] [(short)3] [i_13 + 2] [i_14 - 1] [9] = ((/* implicit */short) arr_7 [i_14] [i_13] [i_11]);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned short)18105)) : (((/* implicit */int) (signed char)55)))) ^ (((((/* implicit */_Bool) arr_28 [i_11] [i_12] [i_13] [i_14])) ? (30) : (30)))))) ? (min(((-(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_12])) ? (arr_2 [i_13]) : (((/* implicit */long long int) 4294967295U))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59426))) - (1972839784U)))) ? (((((/* implicit */_Bool) (signed char)117)) ? (-463523676) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_30 [(short)3] [i_11] [i_13 - 1] [i_14 - 1])))))));
                        }
                    }
                } 
            } 
            arr_47 [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) (+(min(((~(arr_2 [i_11]))), ((-(arr_44 [i_11] [i_11])))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 2; i_16 < 9; i_16 += 2) 
            {
                var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))));
                var_35 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 121750244U)) ? (((/* implicit */int) arr_9 [i_12] [(_Bool)1] [i_12] [i_12])) : (0)))) || ((_Bool)1))) && ((!(((/* implicit */_Bool) arr_34 [i_12] [i_16 - 1]))))));
                arr_50 [(_Bool)1] [i_16] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) (unsigned short)31)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (4173217035U)))));
            }
            var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_13 [i_12]) ? (((/* implicit */int) arr_13 [i_12])) : (((/* implicit */int) arr_13 [i_12])))))));
        }
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_44 [i_11] [i_17])))) ? (((((/* implicit */int) arr_31 [i_11] [i_11] [8] [i_11] [i_11])) | (((/* implicit */int) min((arr_32 [i_11] [i_17] [i_17] [i_17]), (((/* implicit */short) (unsigned char)15))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_17] [i_17] [i_17])) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)-79))))))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (((~((-(arr_2 [i_11]))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))))))));
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-55)))))))));
        }
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    {
                        arr_62 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -1936392606))) ? (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_43 [i_20] [i_18] [i_19] [i_20])))) : (((unsigned long long int) -8807957952736054295LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_11])) ? (((((/* implicit */int) arr_10 [i_19] [i_19] [i_19])) / (((/* implicit */int) (signed char)117)))) : ((+(((/* implicit */int) (unsigned short)65487)))))))));
                        var_40 ^= ((/* implicit */int) (signed char)62);
                        arr_63 [(unsigned short)0] [i_11] [i_18] [i_19] [(unsigned short)0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) min((arr_54 [(unsigned char)0] [6] [6]), (((/* implicit */long long int) arr_19 [i_11] [i_18]))))) ? (((/* implicit */int) arr_40 [i_11] [(unsigned char)9] [i_11])) : ((-(-2147483646))))));
                        arr_64 [i_11] [i_18] [i_19] [i_19] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (short)17310))) : (2974356661297958788LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_20] [(_Bool)1] [i_19] [i_18])) || (((/* implicit */_Bool) (short)-16602))))))))));
                    }
                } 
            } 
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [0ULL] [i_11] [i_11])) ? ((+(((/* implicit */int) arr_19 [i_11] [11])))) : (((/* implicit */int) min(((short)17310), (((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [8LL] [i_11] [i_18]))))))))));
        }
        arr_65 [i_11] = ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_44 [i_11] [(unsigned char)7]))))))) * ((-(((/* implicit */int) arr_52 [i_11] [i_11] [2U])))));
    }
    for (long long int i_21 = 1; i_21 < 17; i_21 += 4) 
    {
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)55))))) ? (arr_67 [i_21 - 1] [i_21 + 2]) : (min((((/* implicit */unsigned int) (signed char)-1)), (arr_67 [i_21] [i_21])))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_66 [i_21])) >= (((((/* implicit */_Bool) arr_67 [i_21 + 1] [i_21])) ? (((/* implicit */unsigned int) arr_66 [i_21])) : (3520114430U)))))) : ((-((~(((/* implicit */int) (_Bool)1))))))));
        arr_68 [i_21] = ((/* implicit */unsigned char) arr_66 [i_21]);
    }
}
