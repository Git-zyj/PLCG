/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152428
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = min((max((var_6), (((/* implicit */long long int) arr_6 [i_1] [i_1 + 2] [i_1])))), (((/* implicit */long long int) max((arr_6 [i_1] [i_1 + 2] [i_1]), (var_4)))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned short) ((long long int) (+(arr_6 [i_0] [i_1] [i_1 - 1]))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21464)) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)31)) <= (((/* implicit */int) var_5)))) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)226)))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */int) (-(-1LL)));
                        arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_13 [i_1]) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1 + 2] [i_1 + 2])) : (var_4)));
                        arr_17 [i_1] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30915))) ^ (17471374527020946019ULL)));
                    }
                    var_13 = ((/* implicit */long long int) ((unsigned short) var_4));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-23214)), (((((/* implicit */_Bool) 975369546688605577ULL)) ? (1196765176U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)15)), (var_2)))))))));
                    var_15 ^= ((/* implicit */signed char) arr_11 [0]);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) var_7))) | (((((-3LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)1610)) - (1610)))))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0))));
        var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_6] [i_6]))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_0))))) ? (arr_23 [i_7]) : (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [2] [2]))) : (arr_23 [i_7]))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 17471374527020946039ULL))))), ((short)25984)))) ? (max((2838740868346789208ULL), (((/* implicit */unsigned long long int) -8LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_25 [18ULL] [i_8 + 1])), ((short)-11229)))))));
            var_21 = ((/* implicit */int) ((long long int) ((int) ((((/* implicit */_Bool) 17471374527020946033ULL)) || (((/* implicit */_Bool) (short)12179))))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_28 [i_9] [i_9] [i_9])), ((short)32747)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) var_3))))), (max((-3117276651772181447LL), (-1LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)21711))))))))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_23 = ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) & (7LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))));
                                arr_45 [i_9] [i_12] [i_11] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) (unsigned short)45396))) >= (((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_27 [i_9])))));
                                var_24 *= ((/* implicit */unsigned long long int) (unsigned char)189);
                                arr_46 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))) & (((17471374527020946026ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) % (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    arr_47 [i_9] [i_11] [i_10] [i_9] = ((/* implicit */short) min((min((arr_36 [i_9] [i_10] [i_9]), (((/* implicit */unsigned long long int) (short)29491)))), (((/* implicit */unsigned long long int) var_9))));
                    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) 17471374527020946039ULL)) && (((/* implicit */_Bool) var_8)))) ? (min((var_4), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) (short)23217))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((975369546688605586ULL), (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9]))))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_9)))));
        arr_48 [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_37 [i_9] [i_9] [i_9]) + (((/* implicit */int) var_10))))) ? (-1877315883) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-29491))))))));
    }
    for (unsigned short i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (short i_15 = 2; i_15 < 19; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (unsigned short i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) 17471374527020946039ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_60 [6] [6] &= ((/* implicit */short) 3960394722U);
                            arr_61 [i_14] [i_14] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (short)-23021)) : (((/* implicit */int) (unsigned char)229))))), (min((((/* implicit */unsigned int) var_2)), (arr_43 [i_14] [i_15] [i_17 + 2] [i_18] [i_18] [i_18])))));
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) arr_37 [i_16] [i_15] [i_16]))), (975369546688605585ULL)));
                        }
                        arr_62 [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3263575967U))) < (var_9))))) & (((var_3) ? (((/* implicit */long long int) var_4)) : (var_6)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_10), (arr_28 [i_14] [i_14 + 1] [i_14]))))));
        arr_63 [(short)20] |= ((/* implicit */unsigned int) ((min((min((((/* implicit */int) (short)-24011)), (-1886646770))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_28 [i_14] [i_14] [i_14])))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 975369546688605583ULL)))) >= (((((/* implicit */_Bool) 1848281971)) ? (arr_43 [0U] [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_43 [16] [i_14] [i_14] [i_14] [i_14] [16]))))))));
    }
    var_30 ^= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (short i_19 = 0; i_19 < 11; i_19 += 3) 
    {
        for (short i_20 = 0; i_20 < 11; i_20 += 2) 
        {
            {
                var_31 = ((((/* implicit */_Bool) ((-2035480936) | (((/* implicit */int) (unsigned char)34))))) ? (((((/* implicit */_Bool) var_5)) ? (1941774686) : (((/* implicit */int) arr_22 [i_20] [i_19])))) : (((/* implicit */int) arr_22 [i_19] [i_20])));
                arr_70 [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((975369546688605576ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) 7LL)) : (17471374527020946000ULL)));
                arr_71 [i_20] [i_20] [i_19] = ((((((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)163))))) & (((/* implicit */int) var_2)))) % (var_4));
            }
        } 
    } 
    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_1))));
}
