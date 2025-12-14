/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126998
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
    var_16 = ((/* implicit */unsigned short) min((16376U), (var_5)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))) + (4294950919U)));
            var_18 += ((/* implicit */signed char) min((16378U), (4294950919U)));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))))), (min((4094U), (((/* implicit */unsigned int) (unsigned short)55161))))));
            arr_8 [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1849651495U)) && (((/* implicit */_Bool) (signed char)84))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_14))));
        arr_10 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
        var_20 = ((/* implicit */unsigned int) max((var_20), ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) - ((+(4294950935U)))))))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) arr_19 [8ULL] [i_7 - 1] [i_5 - 1] [8ULL] [i_7])) ? (((arr_11 [i_3] [i_3]) ? (4294950944U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_4]))))) : (22931733U)))));
                            arr_21 [i_3] [3ULL] [13] [i_6] [i_7 - 1] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_3] [i_5 - 1] [i_3]))));
                            var_22 = ((/* implicit */unsigned short) 4294950920U);
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8386))) * (3072U)));
                            var_23 += ((/* implicit */_Bool) var_7);
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_6] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-1470925517051425258LL)))))));
                        }
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))) + (4294950926U))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) (-(((var_1) + (((/* implicit */unsigned int) var_8))))));
            arr_25 [i_3] = ((/* implicit */_Bool) -1);
        }
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                arr_30 [i_3] = ((/* implicit */int) arr_12 [1LL]);
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_9] [i_10]))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        {
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) ((arr_22 [(short)2] [(unsigned short)12] [i_9] [i_11] [i_12] [(short)2]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_23 [i_12] [i_12])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((arr_7 [10ULL] [10ULL]) || (((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_12] [i_3] [i_11] [i_12]))))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1262))) < (4294950923U))))))));
                            arr_35 [i_3] [(_Bool)1] [(_Bool)1] [i_12] [i_11] [i_11] |= ((/* implicit */unsigned short) (!((!(arr_32 [i_10 - 1] [i_12] [i_10 + 3])))));
                            var_29 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            var_30 = ((/* implicit */int) var_13);
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) (-(4294950939U)));
            }
            for (short i_13 = 2; i_13 < 13; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_32 ^= ((/* implicit */signed char) arr_40 [i_3] [i_9] [i_13] [i_3]);
                    arr_44 [i_3] [i_13] [i_9] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_13 - 1] [i_13 + 1] [i_13 - 2]) + (arr_13 [i_13 + 1] [i_13 + 1] [i_13])))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_3] [(unsigned short)9] [i_3] [i_14])) : (arr_33 [i_9] [i_9] [i_3] [i_3] [i_9] [i_3]))))) : (var_6)));
                    var_33 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_14])) ? (((/* implicit */int) arr_43 [i_13 + 1])) : (((/* implicit */int) arr_37 [i_3] [i_3] [i_3] [i_13]))))), (max((arr_42 [i_13 - 1] [i_13]), (arr_42 [i_13 - 1] [i_13])))));
                }
                for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    arr_47 [i_3] [i_3] [i_13] [i_3] [(short)6] [i_3] |= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_0 [i_3])), (((((/* implicit */_Bool) 1849651493U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3]))) : (16381U)))));
                    arr_48 [i_3] [14U] [i_13] [i_13] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)20496)), ((unsigned short)30593)));
                    arr_49 [i_3] [i_13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) var_0)), (arr_46 [i_3] [i_13] [i_3]))))))) ? (((((/* implicit */_Bool) ((2445315803U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)14469)))) : (((/* implicit */int) ((short) min((arr_17 [i_3]), (((/* implicit */unsigned int) (short)15309))))))));
                }
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_3 [i_3] [i_9] [i_3]), (arr_45 [i_3] [(unsigned short)7] [(unsigned short)7] [i_9] [i_9] [i_9]))))))), ((+(5832419614989596587ULL)))));
                arr_50 [i_3] [i_13] [i_13 + 1] [i_13] |= ((/* implicit */short) max((var_2), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_3] [i_3])), (var_2)))) ? (((unsigned int) arr_17 [i_13])) : (4294950944U)))));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_13] [i_13])) ? (((/* implicit */int) arr_27 [i_13] [i_13 - 1])) : (((/* implicit */int) (signed char)-1))))), ((-(((((/* implicit */_Bool) (signed char)1)) ? (2073556458U) : (var_5))))))))));
            }
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) arr_5 [i_3] [i_9] [i_9]))));
            arr_51 [i_3] [(signed char)13] [(short)13] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (arr_41 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_9]))))), (((/* implicit */unsigned int) var_6))));
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    {
                        var_37 += ((/* implicit */_Bool) min(((unsigned short)3), (((/* implicit */unsigned short) arr_15 [i_17] [i_9] [i_3]))));
                        arr_57 [i_16] [i_16] [i_16] [i_16] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(8620087569418373904ULL)))) && (((/* implicit */_Bool) var_9))));
                    }
                } 
            } 
            arr_58 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [11ULL] [(signed char)12] [i_3] [i_3] [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))));
        }
        var_38 = ((/* implicit */short) max((4294950914U), (((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned short) arr_53 [i_3] [i_3] [i_3])))))));
        var_39 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_3])), (min((((/* implicit */unsigned long long int) arr_54 [i_3] [i_3] [i_3] [i_3])), (((unsigned long long int) arr_3 [i_3] [i_3] [8U]))))));
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (unsigned short)1536))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (unsigned int i_21 = 1; i_21 < 22; i_21 += 2) 
                {
                    {
                        arr_70 [i_18] [(_Bool)0] [(_Bool)0] [i_18] |= ((/* implicit */signed char) arr_66 [12ULL] [i_21] [i_21 + 2] [i_21] [i_21] [i_21 + 1]);
                        var_41 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((arr_60 [i_18] [i_18]), (((/* implicit */unsigned int) (signed char)-112))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)36760)))) : (((((/* implicit */_Bool) 1347728703)) ? (((/* implicit */int) (unsigned short)54839)) : (((/* implicit */int) (signed char)8)))))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned short) ((signed char) (signed char)12));
        arr_71 [i_18] [i_18] = ((/* implicit */unsigned int) 18446744073709551605ULL);
        var_43 = ((((((/* implicit */_Bool) min((arr_69 [4U]), (((/* implicit */unsigned short) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (8419322683219578417ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)11)), (3136179501U)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
    }
    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) var_13))));
    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)65532)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned short)44488)) : ((+(((/* implicit */int) (signed char)2))))));
}
