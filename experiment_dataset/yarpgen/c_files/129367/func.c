/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129367
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
    var_15 = ((/* implicit */unsigned long long int) ((signed char) var_2));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-7345)) <= (min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)10))))))));
        var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 311930068333594983LL)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0 + 2])), (var_6)))) : (min((311930068333594983LL), (((/* implicit */long long int) min((var_10), (((/* implicit */short) arr_1 [i_0] [i_0 - 2])))))))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [14ULL]);
            arr_6 [19] = ((/* implicit */int) var_4);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (~(-311930068333594983LL)))) ? (((long long int) 311930068333594983LL)) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */int) var_0);
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (~(323404279U)));
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_8 [(unsigned short)10] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19)))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_0 - 2] [i_0 + 1])), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))))))) : ((~(((((/* implicit */_Bool) -311930068333594984LL)) ? (arr_2 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [8ULL])) ? (var_3) : ((-(((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2]))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_20 += 14454403640995032638ULL;
                arr_18 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) 1022094494);
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_23 [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((arr_2 [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_27 [0ULL] [0ULL] [i_5] [(_Bool)1] [i_5] [i_3] = ((/* implicit */unsigned int) var_7);
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_31 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0] [i_3]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))));
                        var_21 = ((/* implicit */unsigned short) 311930068333594984LL);
                        arr_32 [i_0] [i_3] [i_0] [i_6] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((((/* implicit */int) arr_1 [i_0] [i_7])) << (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0 + 1])) && (((/* implicit */_Bool) 674027780U))));
                        arr_35 [i_8] [i_3] [i_5] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (signed char)64);
                    }
                    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3]))));
                        arr_38 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)70)) ? (7480912441842144488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1])))));
                    }
                    arr_39 [i_5] [i_5] [i_5] [i_5] [21U] = arr_36 [i_0] [i_5] [(signed char)23];
                }
                for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((311930068333594983LL) - (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_3] [i_5] [i_0])))))) && (((/* implicit */_Bool) 311930068333594983LL))));
                    arr_43 [i_5] = ((((/* implicit */_Bool) -311930068333594984LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (311930068333594984LL));
                }
            }
            arr_44 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_33 [(signed char)14] [i_0] [i_0 + 1] [i_0] [i_3])) ? (var_0) : (((/* implicit */unsigned int) arr_33 [i_0 - 1] [i_3] [i_0 + 2] [16ULL] [i_3])))) : (((/* implicit */unsigned int) arr_33 [i_0] [i_3] [i_0 + 2] [6U] [i_3]))));
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_21 [i_0] [i_0 + 1] [i_0] [11]))) <= (((/* implicit */int) arr_0 [i_0 + 2]))));
        }
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_15 [i_0 - 2] [i_0] [i_0 - 1])))) ? (((15324046948484060407ULL) & (((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [i_0 - 1] [i_0])))) : (((/* implicit */unsigned long long int) var_12))));
    }
    for (unsigned int i_11 = 2; i_11 < 23; i_11 += 4) /* same iter space */
    {
        var_27 -= ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6))))) % (-515215320));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1165990074))))))))));
        var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_33 [i_11] [i_11] [i_11] [i_11 - 2] [i_11])))) && (var_8)));
        arr_49 [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) -311930068333594984LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-311930068333594985LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) <= (((/* implicit */int) var_4)))))))))));
        var_30 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (max((-311930068333594981LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 311930068333594983LL)))))))), (((/* implicit */long long int) var_8))));
    }
    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_31 |= ((/* implicit */_Bool) var_5);
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((var_1) && (((/* implicit */_Bool) arr_37 [i_12] [i_12])))) ? (min((min((((/* implicit */long long int) (unsigned char)33)), (-311930068333594983LL))), (((/* implicit */long long int) arr_20 [i_12])))) : (((((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_12])) ? (((arr_41 [(unsigned char)20] [i_12] [i_12]) ? (311930068333594983LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12] [i_12]))))))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_33 = ((/* implicit */short) ((((unsigned long long int) max((-515215320), (((/* implicit */int) (unsigned char)93))))) * (((/* implicit */unsigned long long int) arr_33 [(_Bool)1] [(unsigned char)8] [i_13] [i_13] [(unsigned short)24]))));
        var_34 = ((/* implicit */unsigned long long int) (~(-859789268)));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -311930068333594984LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13)))))) && (((/* implicit */_Bool) arr_50 [i_13] [i_13])))))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-122)))))))))))));
        var_37 |= ((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */unsigned int) arr_45 [i_13])))) % (((/* implicit */unsigned int) max((((515215322) << (((/* implicit */int) var_7)))), (((/* implicit */int) min(((unsigned char)27), (((/* implicit */unsigned char) arr_1 [i_13] [i_13]))))))))));
    }
    var_38 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
}
