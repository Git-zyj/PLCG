/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141463
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_1 [i_0]))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)98)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)98))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_1]);
        arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))) != (((/* implicit */int) arr_1 [i_1]))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (14898628406529432465ULL)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_11 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)98)), ((unsigned short)48318)));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_23 = 15699644203395207026ULL;
                        var_24 = ((/* implicit */signed char) arr_1 [i_2]);
                        arr_18 [i_2] [i_3] [i_4] [i_5 - 3] = ((/* implicit */signed char) arr_14 [i_2] [i_3] [i_4]);
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15699644203395207040ULL)) ? (((/* implicit */unsigned int) ((int) 0ULL))) : ((-(2074561562U)))));
                            var_26 = ((/* implicit */long long int) (signed char)98);
                            arr_26 [i_8] [i_6] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)29331)) ? (0LL) : (var_9))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3]))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_25 [i_6] [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 2]))));
                arr_27 [i_6] = ((/* implicit */unsigned long long int) (unsigned short)49982);
                arr_28 [i_6 + 1] [i_3] [i_3] [i_2] = ((/* implicit */signed char) 15699644203395207026ULL);
            }
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                var_28 += ((/* implicit */long long int) var_5);
                arr_31 [i_2] [i_3] [i_9] = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49982))) : (15699644203395207040ULL))) >= (((/* implicit */unsigned long long int) ((448005351) / (((/* implicit */int) (unsigned short)15553))))))));
                arr_32 [i_9] [i_3] [i_3] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)18))));
                var_29 = arr_25 [i_2] [i_3] [i_3] [i_3] [i_9];
                arr_33 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))));
            }
            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9078689096303700024ULL)) || (arr_1 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_9)))) ? (((/* implicit */long long int) min((717075779U), (var_4)))) : ((~(3884373562825185489LL)))))));
        }
        for (signed char i_10 = 0; i_10 < 15; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_31 = ((/* implicit */int) (~(((((unsigned long long int) var_4)) << (((((((/* implicit */_Bool) 3884373562825185489LL)) ? (2747099870314344591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) - (2747099870314344572ULL)))))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)237))));
                        var_33 = (-(((((/* implicit */int) arr_21 [i_2])) >> (((/* implicit */int) min((var_10), ((unsigned short)0)))))));
                        arr_42 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_13);
                        arr_43 [i_2] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62917))) : (max((((/* implicit */unsigned long long int) arr_20 [i_2] [i_10] [i_11] [i_12])), (2747099870314344590ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2]))))) : (0ULL)));
                    }
                } 
            } 
            arr_44 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((long long int) arr_13 [i_2] [i_2] [i_10] [i_10]));
            arr_45 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_34 [i_2] [i_10] [i_10]), (arr_34 [i_2] [i_2] [i_10]))))));
        }
        for (signed char i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) 448005351)) ? (6792459842128624472ULL) : (((/* implicit */unsigned long long int) 1175852239)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)57709)))))));
            arr_48 [i_2] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_35 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) 9502682165699460724ULL)))));
        var_36 = ((/* implicit */unsigned long long int) arr_21 [i_2]);
    }
    var_37 = ((/* implicit */int) var_8);
    var_38 = ((/* implicit */signed char) var_10);
}
