/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145204
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
    var_17 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (34359737344ULL)))));
        var_18 |= ((/* implicit */unsigned short) ((unsigned long long int) 8321499136LL));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)0))));
            arr_7 [i_0] [i_1 + 3] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((18014398509481983ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) % (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) (short)16383)) : (2147483647)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) > (18446744073709551615ULL))))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned short) (+(((unsigned long long int) (short)(-32767 - 1)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65532))));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned long long int) (unsigned short)1)))));
            arr_15 [i_3] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)8));
            arr_16 [i_3] [(short)10] [(short)10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2147483647))));
            var_23 += ((/* implicit */unsigned long long int) ((short) (unsigned short)8));
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((31525197391593472ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                arr_21 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (short)64));
                var_25 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)(-32767 - 1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_26 [i_2] [i_4] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) 0ULL)))));
                arr_27 [i_2] [i_4] [i_6] = ((/* implicit */long long int) ((unsigned int) (unsigned short)65509));
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_30 [i_4] [i_2] [i_4] = ((/* implicit */short) (unsigned short)16128);
                /* LoopSeq 3 */
                for (short i_8 = 1; i_8 < 22; i_8 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)-16384)))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) ^ (-1LL)))));
                    var_27 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))))), ((~(4294967295U)))));
                    arr_33 [i_2] [i_4] [i_2] [(unsigned short)18] |= ((unsigned short) (((-(((/* implicit */int) (unsigned short)65535)))) < (((/* implicit */int) (unsigned short)65535))));
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                {
                    var_28 = ((unsigned short) ((33554431U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (unsigned short)65535))))) | (((unsigned int) (short)2047))));
                    var_30 = ((/* implicit */unsigned long long int) (unsigned short)240);
                    var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) | ((-(4294967295U)))));
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((51539607552ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16368)))))), ((~(4294967295U)))));
                }
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        arr_43 [i_2] [i_2] [i_7] [i_10] [i_2] [i_7] [i_11] |= ((/* implicit */long long int) ((((unsigned long long int) ((65535ULL) - (18446744073709551615ULL)))) % (18428729675200069633ULL)));
                        var_33 = ((/* implicit */unsigned int) min((var_33), ((-((~((~(4294967295U)))))))));
                        arr_44 [i_2] [i_4] [i_7] [i_10] [i_11] = max((((((/* implicit */_Bool) 16383ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (1ULL))), (((/* implicit */unsigned long long int) ((unsigned short) 16777216))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
                    {
                        arr_48 [i_2] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)32767)))) + ((-(8589901824ULL)))));
                        var_34 -= ((/* implicit */unsigned short) (+(16777216)));
                        arr_49 [i_2] [i_2] [i_7] [i_7] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) * (2251799813684736ULL)))));
                    }
                    for (unsigned int i_13 = 4; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        arr_54 [i_2] [i_2] [i_2] [i_7] [(short)2] [i_13] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                        arr_55 [i_2] [i_2] [i_2] [i_10] [i_13 - 4] [i_13] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned int i_14 = 4; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) ((int) ((_Bool) (+(((/* implicit */int) (short)32761))))));
                        var_36 = ((_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) 1U)), (18446744073709551615ULL))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) max((((((unsigned long long int) (short)32767)) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)3))))))), (((/* implicit */unsigned long long int) ((((288230376151711743ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65524)))))))))));
                        arr_60 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned short)0))))));
                    }
                    arr_61 [i_2] [i_4] [i_4] [i_2] |= ((/* implicit */long long int) ((unsigned long long int) ((short) (unsigned short)4)));
                }
                arr_62 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(70368207306752ULL)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned int) 0U)))))));
            }
            var_38 ^= (!(((/* implicit */_Bool) 0U)));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                var_39 = ((/* implicit */long long int) (-(((unsigned int) (unsigned short)65535))));
                var_40 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (unsigned short)8128))));
            }
            for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 4) 
            {
                arr_72 [(short)14] [i_17] [i_17] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (0U)));
                arr_73 [i_2] [i_2] [i_15] [i_17] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            }
            for (long long int i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                var_41 = ((0ULL) ^ (((/* implicit */unsigned long long int) 0U)));
                var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-1))));
                arr_76 [i_2] [i_2] [i_18 - 2] [i_18 + 1] = ((/* implicit */short) ((((/* implicit */int) ((short) (short)-16384))) >= (((/* implicit */int) (short)(-32767 - 1)))));
                var_43 += ((/* implicit */unsigned long long int) ((short) (short)(-32767 - 1)));
            }
            arr_77 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) >= (1U)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
            arr_78 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (2249600790429696ULL)));
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967295U)) - (9223372036854775807LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0ULL)))))))));
            var_45 -= ((/* implicit */short) ((unsigned short) 4294967295U));
        }
        arr_82 [i_2] = ((short) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65522)));
        /* LoopSeq 4 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_46 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (short)8160))) * (-13LL))), (((/* implicit */long long int) min((7U), (((/* implicit */unsigned int) -1)))))));
            arr_86 [(unsigned short)5] [i_20] [i_2] = ((/* implicit */short) (~(((((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (unsigned short)0)))) & (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)13)))))))));
            var_47 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) 18446744073709551615ULL))), ((unsigned short)4064)))) & (((/* implicit */int) ((unsigned short) (unsigned short)16384)))));
            var_48 += 0ULL;
            var_49 ^= ((/* implicit */unsigned long long int) ((unsigned int) min((4294967289U), (((/* implicit */unsigned int) (short)7680)))));
        }
        /* vectorizable */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            arr_89 [i_2] [i_21] [i_2] = ((/* implicit */unsigned short) (-(18U)));
            var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((short) ((_Bool) (short)127))))));
            arr_90 [i_21] [i_21] = ((/* implicit */unsigned short) ((4294967292U) * (0U)));
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_23 = 2; i_23 < 23; i_23 += 1) 
                {
                    arr_95 [i_21] [i_21 - 1] [i_23 + 1] = ((((/* implicit */_Bool) 1040187392LL)) ? (274810798080ULL) : (((/* implicit */unsigned long long int) -18014398509481984LL)));
                    var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1ULL)) ? (23U) : (((/* implicit */unsigned int) -5))));
                    /* LoopSeq 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))));
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (-(18446743798898753536ULL))))));
                    }
                    for (int i_25 = 3; i_25 < 22; i_25 += 1) 
                    {
                        arr_101 [i_25] [i_2] [i_22] [i_21] [i_21] [i_2] [i_2] = ((/* implicit */int) ((unsigned int) (unsigned short)65535));
                        arr_102 [i_25] [i_21] [i_21] [i_21] [i_2] = (-(274810798080ULL));
                        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(18014398509481995LL)))) : (0ULL))))));
                    }
                }
                for (unsigned short i_26 = 3; i_26 < 22; i_26 += 2) 
                {
                    var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))));
                    arr_106 [i_2] [i_2] [i_2] [i_21] [i_22 - 1] = ((/* implicit */short) (~(18446744073709551594ULL)));
                    var_56 = ((/* implicit */unsigned long long int) ((unsigned short) (short)8064));
                }
                for (short i_27 = 2; i_27 < 21; i_27 += 4) 
                {
                    var_57 = ((/* implicit */unsigned short) min((var_57), ((unsigned short)65535)));
                    var_58 = ((/* implicit */short) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0)))))));
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((0ULL) ^ (2305840810190438400ULL)))) && (((/* implicit */_Bool) (short)32760))));
                }
                arr_109 [i_2] [i_22] [i_21] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) (unsigned short)16320)));
                var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1970324836974592ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
            }
            for (unsigned long long int i_28 = 1; i_28 < 20; i_28 += 4) /* same iter space */
            {
                var_61 += ((unsigned long long int) 33554431ULL);
                arr_113 [i_2] [i_21] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (18U)));
                arr_114 [i_2] [i_21] [i_28 + 2] [i_28] = ((/* implicit */unsigned short) ((10ULL) ^ (18446744073709551615ULL)));
                var_62 = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)30720))));
            }
            var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)49209)))))));
        }
        for (short i_29 = 0; i_29 < 24; i_29 += 2) 
        {
            arr_118 [i_2] [i_2] [i_29] &= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (~(0ULL))))) ? (min((2047ULL), (576460752303292416ULL))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) ^ (2047ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) & (((/* implicit */int) (_Bool)1)))))))));
            var_64 = ((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((int) (_Bool)1)) : (((/* implicit */int) ((0) != (((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned long long int i_30 = 1; i_30 < 23; i_30 += 1) 
        {
            arr_121 [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 274810798080ULL)) ? (((/* implicit */unsigned long long int) -1)) : (2199023255551ULL)))));
            var_65 = (((~(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (short)32767))))));
            var_66 = ((/* implicit */unsigned long long int) max(((((-(((/* implicit */int) (unsigned short)32752)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))))), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)30)) != (((/* implicit */int) (unsigned short)32754))))) + (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))));
            var_67 = ((/* implicit */int) ((unsigned long long int) (short)-32767));
        }
    }
    for (unsigned int i_31 = 0; i_31 < 13; i_31 += 4) 
    {
        var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-1)))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_69 *= ((/* implicit */unsigned long long int) ((max((0ULL), (0ULL))) != (((unsigned long long int) (short)0))));
        var_70 = ((/* implicit */unsigned int) min((var_70), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)65535)))))))));
        /* LoopSeq 1 */
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_71 = ((/* implicit */_Bool) (short)32767);
            var_72 *= min((((/* implicit */short) ((_Bool) (short)32767))), (((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967295U)))));
            var_73 = ((/* implicit */_Bool) (unsigned short)65535);
        }
    }
    for (unsigned int i_33 = 1; i_33 < 17; i_33 += 4) 
    {
        arr_131 [i_33] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 0))) ? (max((((/* implicit */long long int) (_Bool)1)), (4611686018293170176LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)32756), ((short)(-32767 - 1))))))));
        arr_132 [i_33] = ((/* implicit */short) (+(min((min((1048574U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((0) > (((/* implicit */int) (unsigned short)49221)))))))));
        var_74 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (max((18ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((4294967295U) - (4294967290U)))))))), (((/* implicit */unsigned long long int) (short)0))));
    }
}
