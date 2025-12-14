/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111218
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)40)) ? (((((/* implicit */_Bool) ((var_14) & (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) var_8)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) -555562090)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)41)))) >> (((((/* implicit */long long int) -1250196361)) * (0LL))))))));
    var_18 = ((/* implicit */short) max((max((var_12), (((/* implicit */unsigned short) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))), (((/* implicit */unsigned short) ((signed char) var_7)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1] [(_Bool)1]))))) ? (min((9223372036854775807LL), (-7708508035203021077LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (-9LL)))));
            var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((arr_4 [(unsigned char)12] [i_1] [i_1 - 1]) & (arr_4 [i_1] [i_0] [i_0 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_9) << (0LL)))) > (arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) ((var_16) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3840)))))))));
            var_21 = ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_6 [i_0 - 1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [(short)12]))) : (13LL))));
            arr_10 [i_0] [(unsigned short)13] = ((/* implicit */_Bool) (+(7708508035203021057LL)));
            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)166)) >> (((4294967295U) - (4294967271U))))) ^ (((/* implicit */int) (short)-10346))))), (var_9)));
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            arr_13 [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) var_12);
            arr_14 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)159));
            var_23 = ((/* implicit */unsigned int) var_3);
            var_24 = ((/* implicit */unsigned short) 9LL);
        }
        var_25 = ((/* implicit */unsigned int) var_12);
        var_26 ^= ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20656))))), (((-7708508035203021057LL) / (var_16)))))));
        arr_15 [18] [18] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? ((-(0LL))) : (((((((/* implicit */_Bool) -7409136948348858499LL)) ? (((/* implicit */long long int) var_10)) : (var_16))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (-1LL) : (((/* implicit */long long int) 1008U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */int) var_8)) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) != (var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -7708508035203021073LL))))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) -3955327600770702156LL)) && (((/* implicit */_Bool) var_7))))))));
        arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2696245645U)) ? (((/* implicit */long long int) max((((var_6) << (((arr_1 [i_4 - 1] [i_4]) - (126496312))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65517)))))))) : (((((/* implicit */_Bool) min(((unsigned char)176), ((unsigned char)166)))) ? (((/* implicit */long long int) ((33554416U) % (((/* implicit */unsigned int) 2147483647))))) : (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_4 - 1] [i_4]) : (((/* implicit */long long int) -2147483647))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_24 [(unsigned short)12] &= ((/* implicit */unsigned char) -10LL);
        var_28 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_15)))) + (((/* implicit */int) (unsigned char)163))));
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((24746341) == (((/* implicit */int) ((var_10) == (((((/* implicit */unsigned int) var_14)) % (var_11)))))))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_30 = ((/* implicit */unsigned char) -2147483630);
            /* LoopSeq 1 */
            for (int i_8 = 4; i_8 < 15; i_8 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    arr_35 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */unsigned int) 20LL);
                    arr_36 [1LL] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (short)0))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)79), (((/* implicit */unsigned char) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) : (0LL)));
                }
                for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) max((arr_7 [i_6] [i_7]), (max((((/* implicit */long long int) (short)-10346)), (5LL))))))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max((var_1), ((unsigned char)91))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8] [(short)0]))) + (max((var_9), (((/* implicit */long long int) var_5)))))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_42 [i_6] [14U] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2757597771810302334ULL)) ? (((/* implicit */int) ((unsigned char) (unsigned char)96))) : (((/* implicit */int) (short)7570))));
                    var_33 ^= ((/* implicit */signed char) ((unsigned int) ((unsigned char) ((int) var_12))));
                }
                var_34 = ((/* implicit */short) max((((/* implicit */long long int) max((((((/* implicit */_Bool) 3055711349U)) ? (842677851) : (((/* implicit */int) (unsigned char)80)))), (((((/* implicit */_Bool) 8LL)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) arr_22 [i_7] [i_7]))))))), (((((/* implicit */_Bool) ((unsigned short) (short)10354))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (short)9397)) : (((/* implicit */int) (short)1747))))) : (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) arr_1 [i_7] [i_8])) : (var_9)))))));
            }
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                arr_45 [i_7] [i_7] = ((7708508035203021106LL) / (min((((/* implicit */long long int) max((var_4), (((/* implicit */short) (unsigned char)70))))), (max((((/* implicit */long long int) var_14)), (var_9))))));
                arr_46 [i_6] [i_7] [i_12] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 3453932021U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) : (2757597771810302334ULL)))));
                var_35 = ((/* implicit */long long int) (unsigned short)512);
                arr_47 [7LL] [i_7] [i_6] = ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0)));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_51 [i_13] [i_7] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3561638446U))));
                arr_52 [i_6] [i_7] [i_13] = ((/* implicit */long long int) (signed char)-104);
                arr_53 [i_6] [i_7] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) == (((((((/* implicit */int) (unsigned char)86)) > (((/* implicit */int) (short)-10346)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_6] [(unsigned short)0] [i_13]))) : (((((/* implicit */_Bool) -6125723450309583905LL)) ? (arr_40 [i_6] [i_6] [i_13] [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [(_Bool)1] [i_7] [i_13] [i_13])))))))));
            }
        }
        arr_54 [i_6] = ((/* implicit */signed char) (!(arr_3 [12] [i_6] [i_6])));
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) (signed char)0)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))))))) : (15689146301899249296ULL)));
        arr_55 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6125723450309583905LL)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (signed char)-89)))))));
    }
}
