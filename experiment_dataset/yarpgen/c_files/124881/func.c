/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124881
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
    for (int i_0 = 3; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 874573160U)) || (((/* implicit */_Bool) (short)-3655)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2927231378350976277LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (((unsigned int) (signed char)113)))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(-777976830))))));
            var_21 = ((/* implicit */signed char) max((((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_5 [i_1])))) >> (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)247)))))), (((/* implicit */int) var_12))));
        }
        for (unsigned char i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (-1514863133) : (((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0]))))));
                    arr_13 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)226))) && (((/* implicit */_Bool) ((unsigned short) (unsigned char)247)))))), (arr_9 [i_0 - 2] [i_0] [i_0 - 2])));
                }
                var_23 = ((/* implicit */unsigned short) 2059308895U);
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                var_24 = (~(939524096));
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)25181)))))) >= (2059308886U)));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))) % (4160749568U)));
                var_27 += ((/* implicit */unsigned char) ((arr_8 [i_0 - 2] [i_2 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 + 2])))));
            }
            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-86)), (arr_5 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29500))) : (2196875771904LL)))))) ? (((int) (short)-28138)) : (((/* implicit */int) (unsigned short)0))));
        }
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 23; i_7 += 2) 
            {
                for (unsigned char i_8 = 3; i_8 < 24; i_8 += 3) 
                {
                    {
                        arr_24 [i_0] [i_6] [i_6] [i_7 - 3] [i_8 - 1] = ((/* implicit */signed char) -1224291621);
                        var_28 += ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-274542500)));
                        var_29 -= ((/* implicit */unsigned int) (~(max((((-1819432716) ^ (777976835))), (((/* implicit */int) (short)-30828))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */int) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-23501)) : (((/* implicit */int) (unsigned char)29))))), (arr_7 [i_0 - 2] [i_6] [i_6])))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) ((int) (unsigned char)39));
                        var_32 += ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (signed char)-113))));
                    }
                } 
            } 
            var_33 = ((/* implicit */signed char) max((2016836956U), (((/* implicit */unsigned int) (signed char)-110))));
        }
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) max((((/* implicit */int) ((short) 15284989215005807982ULL))), (((((/* implicit */int) arr_26 [i_0 + 1] [i_0])) << (((((/* implicit */int) arr_26 [i_0 - 3] [i_0 - 2])) - (94))))))))));
    }
    for (int i_11 = 3; i_11 < 24; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 4) 
        {
            var_35 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_15 [i_12 + 2] [i_12 + 3] [i_12 - 1] [i_11 - 3]) < (arr_15 [i_12] [i_12 - 1] [i_12 + 2] [i_11 + 1])))), (arr_4 [i_11])));
            arr_35 [i_12] [i_11] = ((/* implicit */long long int) var_2);
        }
        for (long long int i_13 = 1; i_13 < 23; i_13 += 4) 
        {
            arr_40 [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) var_10);
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 1; i_15 < 23; i_15 += 2) 
                {
                    {
                        var_36 -= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) -1819432720)) ? (((/* implicit */int) arr_1 [i_11 - 2])) : (((/* implicit */int) arr_22 [i_11 + 1] [i_13 + 2] [i_15] [i_15 + 2] [i_13 + 2]))))));
                        var_37 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2631427759U)), (7347736179009932212LL)));
                        var_38 = ((/* implicit */unsigned int) max((((max((((/* implicit */long long int) (unsigned short)863)), (-4239465583281510244LL))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_36 [i_13] [i_13]))))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_26 [i_11] [i_11])) ? (3194511934U) : (((/* implicit */unsigned int) var_13)))))))));
                        arr_46 [i_11] = ((/* implicit */_Bool) min((max((-162454825), (((/* implicit */int) var_18)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (8054308127152469609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58)))))) ? (((/* implicit */int) (short)-21832)) : (((/* implicit */int) arr_18 [i_11 + 1]))))));
                    }
                } 
            } 
        }
        for (int i_16 = 2; i_16 < 23; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((4112183366U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_40 = ((/* implicit */signed char) var_10);
                            var_41 *= ((/* implicit */_Bool) max((min((arr_23 [i_19] [i_16] [i_11 - 1]), (((/* implicit */unsigned int) arr_17 [i_11] [i_11] [i_11 - 1])))), (((/* implicit */unsigned int) ((arr_14 [i_11]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21824))) != (1149019166U)))))))));
                        }
                    } 
                } 
            } 
            arr_57 [i_16] |= ((/* implicit */short) var_3);
            var_42 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))), (min(((~(arr_49 [i_11] [i_11] [i_11 - 3]))), (((/* implicit */unsigned long long int) ((signed char) arr_30 [i_16 + 1])))))));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_43 -= ((/* implicit */unsigned short) arr_44 [i_11]);
            var_44 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_20] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)863))) : (1100455344U)))) || (((/* implicit */_Bool) var_6)))), (((((/* implicit */int) var_18)) != (((/* implicit */int) arr_19 [i_11 - 3] [i_11] [i_11 - 3]))))));
        }
        arr_61 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_11])) / (((((/* implicit */_Bool) (short)28137)) ? (((((/* implicit */_Bool) 3392160654U)) ? (777976841) : (2147483633))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) <= (arr_20 [i_11] [i_11] [i_11] [i_11]))))))));
    }
    for (int i_21 = 2; i_21 < 11; i_21 += 2) 
    {
        var_45 = ((/* implicit */short) 339076003);
        var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_21] [i_21] [i_21]))) || (((/* implicit */_Bool) min(((unsigned char)191), (((/* implicit */unsigned char) arr_1 [i_21]))))))) && (var_12)));
    }
    var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), ((short)28168)))))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_15))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -2147483633))))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_22 = 1; i_22 < 16; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_23 = 3; i_23 < 16; i_23 += 2) 
        {
            for (unsigned int i_24 = 0; i_24 < 18; i_24 += 3) 
            {
                {
                    arr_72 [i_23] = ((/* implicit */unsigned short) arr_18 [i_22]);
                    var_48 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2147483645)) ? (((int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) 1149019181U)) || (((/* implicit */_Bool) var_18))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483636)) ? (((/* implicit */int) (short)28137)) : (((/* implicit */int) (short)29741))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_18)))) : (arr_3 [i_22 + 1])))));
                }
            } 
        } 
        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) (-(((unsigned int) ((unsigned long long int) var_12))))))));
    }
    for (unsigned short i_25 = 1; i_25 < 18; i_25 += 4) 
    {
        var_50 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) arr_38 [i_25] [i_25] [i_25])) > (175662414U))) ? (((/* implicit */unsigned long long int) arr_38 [i_25] [i_25] [i_25])) : (arr_49 [i_25 + 2] [i_25] [i_25])));
        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (arr_25 [i_25 + 1] [i_25 + 2] [i_25 + 1] [i_25 + 2]) : (min((arr_25 [i_25 + 1] [i_25 + 2] [i_25 + 1] [i_25 + 2]), (((/* implicit */unsigned int) (short)-28126))))));
        arr_75 [i_25] [i_25] = ((/* implicit */unsigned short) (!(((((int) var_9)) <= (arr_17 [i_25 + 2] [i_25] [i_25])))));
    }
    for (unsigned int i_26 = 4; i_26 < 10; i_26 += 2) 
    {
        var_52 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) ((arr_8 [i_26] [i_26]) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), (((unsigned long long int) arr_73 [i_26 + 2] [i_26 + 1]))));
        /* LoopNest 2 */
        for (unsigned int i_27 = 0; i_27 < 13; i_27 += 1) 
        {
            for (signed char i_28 = 2; i_28 < 10; i_28 += 1) 
            {
                {
                    var_53 = ((/* implicit */int) ((((long long int) arr_51 [i_26 - 3] [i_26] [i_26] [i_26])) / (((/* implicit */long long int) (-(max((arr_0 [i_27]), (((/* implicit */unsigned int) arr_44 [i_26 - 4])))))))));
                    var_54 ^= ((((/* implicit */_Bool) (+((+(var_17)))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((((/* implicit */_Bool) arr_3 [i_28 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_26 + 2] [i_27] [i_26 + 2] [i_26 + 2])) ? (1692174474) : (((/* implicit */int) arr_2 [i_27]))))) : (3392160643U))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_29 = 0; i_29 < 13; i_29 += 3) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (unsigned char i_31 = 2; i_31 < 9; i_31 += 2) 
                {
                    {
                        arr_92 [i_26] [i_29] [i_30] [i_26] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_6 [i_26] [i_26 - 1] [i_26])))) ^ (((/* implicit */int) ((unsigned char) -2147483639)))));
                        arr_93 [i_26] [i_26] [i_26] [i_31] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)102))))) ? (((/* implicit */int) (short)28137)) : (((/* implicit */int) arr_51 [i_26 + 2] [i_29] [i_30] [i_30])));
                        arr_94 [i_29] [i_29] [i_29] [i_29] [i_29] [i_26 + 1] = ((/* implicit */unsigned char) var_4);
                    }
                } 
            } 
        } 
    }
}
