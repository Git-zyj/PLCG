/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120785
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [(unsigned short)6]);
        var_18 *= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (16218744152979835334ULL))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2098764549)) ? (((/* implicit */int) arr_2 [8])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            var_19 = 2098764549;
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_16)))) : ((~(((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_1])))))))));
                arr_11 [i_3] [i_2] [i_2] [i_1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
                var_21 *= ((/* implicit */unsigned long long int) ((7830429756325783048LL) - (4888333032052961264LL)));
            }
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(-7688568542246061427LL))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) arr_8 [i_1]);
                            var_24 ^= ((((/* implicit */long long int) ((((/* implicit */int) (signed char)64)) * (16128)))) <= ((~(7688568542246061426LL))));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 1743761952)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_2 - 1]))))));
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) arr_18 [i_2 + 1] [i_1]))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((14297645142096295373ULL) ^ (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
            {
                arr_27 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (20ULL) : (((/* implicit */unsigned long long int) -9223372036854775806LL)))) : (arr_14 [i_1] [3LL] [4LL])));
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    var_27 = ((/* implicit */int) ((long long int) 2554208898063344207ULL));
                    var_28 = ((/* implicit */signed char) -1LL);
                }
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13869947760804787552ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_11 + 2] [i_7]))));
                    var_30 = ((/* implicit */int) (~(-7688568542246061427LL)));
                    arr_35 [i_10] [i_7] [4LL] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(arr_16 [i_1] [i_1] [i_10] [i_11] [(signed char)20] [i_11 + 1])));
                    arr_36 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned short) (short)-9505);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) 1494337402)) ? (10ULL) : (((/* implicit */unsigned long long int) -19LL))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_1] [i_7] [i_10])))))));
                    arr_39 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_10] [i_10]))) ^ (3478774321U))));
                    var_33 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) 1340974691U)) / (-7688568542246061454LL))));
                }
                for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    var_34 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (4149098931613256242ULL)));
                    arr_43 [i_1] [i_7] [i_10] [1ULL] [i_10] = ((/* implicit */unsigned long long int) ((((10388775392682122179ULL) * (4149098931613256220ULL))) <= (((/* implicit */unsigned long long int) arr_28 [i_13] [i_10] [i_1]))));
                }
                for (int i_14 = 2; i_14 < 20; i_14 += 3) 
                {
                    var_35 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_14 + 2]))));
                    arr_46 [i_1] [i_1] [i_10] [i_1] = ((/* implicit */int) arr_25 [i_1]);
                }
                var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [6ULL] [i_7] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_40 [i_1] [i_7] [i_10] [i_1])));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned short) 4194303U);
                var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (-((((_Bool)0) ? (var_6) : (var_12))))))));
            }
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_1] [i_15] [i_15] [i_17]))));
                arr_55 [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24576))) < (3478774321U))))));
            }
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
            {
                var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_18])) ? (arr_47 [6] [6] [i_1]) : (arr_45 [i_18] [i_1] [i_1] [i_1])));
                arr_58 [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (-(((-1LL) * (-4LL)))));
                var_41 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775805LL)) - (arr_40 [20ULL] [i_15] [14LL] [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_5)))) : (((/* implicit */int) ((14297645142096295369ULL) <= (var_4)))));
            }
            arr_59 [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((1486194925) + ((+(((/* implicit */int) (_Bool)1))))));
        }
        for (int i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            arr_62 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_52 [i_1] [i_19] [i_1]))));
            var_42 = ((/* implicit */signed char) ((((_Bool) arr_34 [i_1] [(unsigned short)14] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_19]))) + (17523466567680ULL))) : (((/* implicit */unsigned long long int) (+(2154915007092453813LL))))));
            arr_63 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) -2098764528)) <= (1340974691U)));
        }
        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1])) ? (((var_6) * (((/* implicit */unsigned long long int) arr_49 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    var_44 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    var_45 = ((/* implicit */unsigned long long int) var_14);
}
