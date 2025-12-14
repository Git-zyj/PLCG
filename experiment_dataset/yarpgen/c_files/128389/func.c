/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128389
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
    var_16 = ((/* implicit */unsigned char) ((signed char) var_12));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), ((~(min((((/* implicit */long long int) arr_2 [i_0])), (var_8))))))))));
        var_18 = ((/* implicit */_Bool) ((signed char) (~(min((var_14), (var_14))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-8452181405812283840LL), (((/* implicit */long long int) (signed char)58))))) ? (-8452181405812283840LL) : (((/* implicit */long long int) 425600798)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) var_5);
                        arr_13 [i_3] [i_3] [(unsigned char)12] [(unsigned char)12] [(unsigned char)10] [i_0 + 1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (425600798))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) (signed char)96)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) / (var_4))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (unsigned char i_6 = 4; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_21 [i_5] [i_4] &= (-(-3111566790301924554LL));
                    var_22 = ((/* implicit */unsigned long long int) arr_11 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]);
                    arr_22 [i_6] = ((/* implicit */long long int) arr_12 [i_6 + 1] [i_6] [i_6 - 4] [i_6 + 2] [i_6] [i_6 + 2]);
                    var_23 = ((/* implicit */unsigned long long int) arr_0 [i_4]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        arr_31 [i_8] [(signed char)9] [i_8] [i_8] = ((/* implicit */signed char) ((var_5) ? ((~(((/* implicit */int) (signed char)101)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_24 = ((signed char) (+(var_10)));
                            arr_35 [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_6 [(short)7] [(unsigned char)15] [(unsigned char)15] [(unsigned char)15]))));
                        }
                    }
                } 
            } 
        } 
        arr_36 [i_4] [i_4] = ((/* implicit */_Bool) var_14);
    }
    for (int i_11 = 1; i_11 < 18; i_11 += 4) 
    {
        arr_39 [i_11 - 1] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_38 [i_11 - 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_12 = 1; i_12 < 21; i_12 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) arr_38 [i_11 - 1])) : (((/* implicit */int) (short)-9778))));
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            arr_50 [i_15] &= ((((/* implicit */_Bool) -3111566790301924560LL)) ? (2106591046U) : (((/* implicit */unsigned int) -105128259)));
                            var_26 = ((/* implicit */short) ((((425600798) <= (((/* implicit */int) arr_40 [i_12] [i_14])))) ? (((((((/* implicit */int) arr_47 [i_11] [i_12] [16ULL] [i_11] [i_11])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_51 [i_11 + 1] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
        }
        for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
        {
            var_27 &= ((/* implicit */signed char) var_14);
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) var_13)) == ((~(((/* implicit */int) arr_49 [i_11] [11LL] [i_16] [i_17] [4U] [i_16] [i_18])))))))));
                    arr_60 [i_17] = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    for (int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        var_29 &= ((/* implicit */long long int) (short)4467);
                        arr_65 [(_Bool)1] [i_11] [i_16] [i_16] [i_17] [i_18] [i_19] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_37 [i_11] [i_19 - 1])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_44 [i_11 + 2]))))));
                    }
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */int) ((unsigned char) arr_38 [i_11 + 3]));
                    arr_70 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((var_5) ? (18194866148821499542ULL) : (((/* implicit */unsigned long long int) var_11))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [(unsigned char)20] [i_11 - 1] [i_20] [(signed char)1]))));
                        arr_73 [(_Bool)1] [16U] [i_17] [(short)6] [i_20] [(signed char)2] [(signed char)6] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 18194866148821499517ULL))) & (((/* implicit */int) (unsigned char)135))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9778)) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) (short)5481)))))));
                    }
                }
                for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) /* same iter space */
                {
                    arr_76 [i_11] [i_16] [i_17] [i_22] &= ((/* implicit */short) min((((/* implicit */int) var_13)), (((((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (var_6)))) << (((min((arr_58 [(_Bool)1] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_56 [i_11])))) - (65348ULL)))))));
                    arr_77 [i_11] [i_11] [i_17] [i_22] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_48 [i_11] [i_11] [16LL] [(_Bool)1] [i_11 + 4] [i_11 + 1])) ? (((/* implicit */int) arr_48 [i_11] [i_11 - 1] [0] [(signed char)15] [i_11 + 3] [i_11 + 1])) : (((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11] [i_11 + 4] [i_11 + 3]))))));
                }
                for (unsigned int i_23 = 0; i_23 < 22; i_23 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_57 [i_16] [i_16] [i_16])))) && (((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_13))))))))) >= (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) arr_72 [i_11] [i_11]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) | (var_15))) : (((long long int) var_5))))));
                    arr_80 [i_23] [i_23] = ((/* implicit */long long int) var_2);
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_16] [(_Bool)1] [i_17] [14U]))));
                }
                arr_81 [16] [(signed char)16] [i_17] [(unsigned char)14] = ((/* implicit */unsigned int) arr_44 [i_17]);
                var_35 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_11] [i_11])) ? (0U) : (((/* implicit */unsigned int) -326113573))))) ? (-326113573) : (((/* implicit */int) (signed char)-96))))) ^ (5193764549158969006LL)));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    arr_88 [i_11] [4U] [i_24] [(unsigned char)8] &= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_10)) : (var_12))), (((/* implicit */unsigned int) arr_42 [8U] [12] [12] [i_11])))), (((/* implicit */unsigned int) var_5))));
                    arr_89 [i_11] [i_24] [i_24] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_11] [i_11 + 1]))))), (min((((/* implicit */unsigned int) (unsigned char)255)), (4122166426U)))));
                }
                arr_90 [i_11 + 4] [10ULL] [8LL] &= ((/* implicit */signed char) min((arr_46 [6] [(_Bool)1] [(_Bool)1] [i_24]), (((/* implicit */long long int) var_5))));
            }
        }
        arr_91 [i_11] [15ULL] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-93))))) : (min((10960834656753252669ULL), (((/* implicit */unsigned long long int) 5920084349390582529LL))))))));
    }
    /* vectorizable */
    for (signed char i_26 = 0; i_26 < 15; i_26 += 4) 
    {
        arr_95 [i_26] [i_26] = ((/* implicit */unsigned long long int) ((unsigned char) arr_72 [i_26] [i_26]));
        var_36 = ((/* implicit */int) (~(var_15)));
        var_37 &= ((/* implicit */unsigned char) arr_38 [i_26]);
        arr_96 [i_26] = ((/* implicit */unsigned short) var_0);
    }
}
