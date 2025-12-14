/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164634
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 776312372U)) ? (9116268243316975876ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62686)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_8)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44201)))))));
    var_17 &= ((/* implicit */short) (+(((/* implicit */int) (short)-32399))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (~(((arr_7 [12U] [i_1] [i_0]) << (((arr_5 [i_0] [i_0] [i_0] [i_0]) - (1660416887U))))))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                    arr_11 [i_1] [i_1] [i_1 - 1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) 3720523975U)) ? (3164645261U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) * (((long long int) (unsigned short)62706))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((!((_Bool)1))) ? (((((/* implicit */unsigned long long int) 776312400U)) % (14197401211443414330ULL))) : (4249342862266137263ULL))))));
                    var_20 = ((/* implicit */long long int) (~(arr_0 [i_0 - 1] [i_0])));
                    var_21 = arr_12 [i_1] [i_1] [i_2] [i_4] [i_0] [i_0];
                }
                /* vectorizable */
                for (unsigned int i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    var_22 += ((/* implicit */_Bool) ((short) var_15));
                    var_23 += ((/* implicit */_Bool) 4249342862266137311ULL);
                    arr_19 [i_0] [2ULL] [(unsigned short)4] [i_5 - 3] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1604525529U)) ? (((/* implicit */unsigned long long int) 776312384U)) : (16122579101313131448ULL)));
                    arr_20 [i_1] = ((/* implicit */unsigned int) (+(4553978581928439876LL)));
                }
                arr_21 [i_0 + 2] [i_1] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2])) ? (7640605828109516295LL) : (((/* implicit */long long int) ((unsigned int) (unsigned short)62705)))))) & (arr_14 [i_0 + 1] [i_0 + 2] [i_1 - 2] [i_1 + 3] [i_2 - 1] [i_2 + 1]));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_28 [i_6] [i_1] [i_1] = ((/* implicit */_Bool) (short)18033);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)62705)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 3518654901U)), (-2763954556606746498LL)))) ? (min((((/* implicit */long long int) (unsigned short)62686)), (-7015819076095207123LL))) : (((long long int) arr_4 [i_6] [i_0])))) : (((/* implicit */long long int) ((arr_12 [i_7] [i_6] [i_6] [i_2] [i_0] [i_0]) >> (((/* implicit */int) ((_Bool) (unsigned short)6225))))))));
                            var_25 |= ((/* implicit */unsigned int) (-(14826104168134282549ULL)));
                        }
                    } 
                } 
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_31 [i_1] = ((/* implicit */short) min((min((arr_14 [i_0 - 1] [i_1] [(unsigned short)8] [i_0 - 1] [i_1 - 1] [i_0 - 1]), (arr_22 [i_1] [i_1 + 1] [i_1] [2ULL] [i_1 - 2]))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3854))) : (arr_6 [i_0 - 1] [i_1] [i_0])))));
                var_26 *= ((/* implicit */unsigned short) arr_17 [(unsigned short)12]);
                var_27 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [(short)5] [i_0] [i_0 + 1] [i_0])))) ? (((((/* implicit */_Bool) ((short) -1451284302197170086LL))) ? (1451284302197170085LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30097)))))))) : (((/* implicit */long long int) 1604525530U))));
                arr_32 [i_0] [i_1] [i_8] = ((/* implicit */unsigned short) (~(533334067054556613ULL)));
                var_28 += 4249342862266137245ULL;
            }
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_18 [i_1 + 3] [i_1 - 1] [i_1 - 1] [1ULL]) ? (((/* implicit */int) arr_18 [i_1 + 2] [(_Bool)1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_18 [i_1 - 1] [(short)0] [i_1 + 1] [(_Bool)1]))))) ? (max((((/* implicit */unsigned long long int) -1451284302197170086LL)), (14826104168134282549ULL))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30113))))), (min((arr_22 [i_0] [i_0] [(unsigned short)11] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0 + 2] [i_1] [i_0] [i_0]))))))));
            arr_33 [i_1] [i_1] = ((/* implicit */short) min((10634304352985786251ULL), (((/* implicit */unsigned long long int) (unsigned short)62712))));
            var_30 = max((((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7640605828109516312LL)) ? (566912804302602086LL) : (-1451284302197170106LL)))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22782)) << (((14203641621836738349ULL) - (14203641621836738339ULL)))))))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) (short)30101)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 14826104168134282574ULL)))) : (min((arr_22 [i_0] [i_0] [i_0] [(short)2] [i_0]), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
            var_32 = ((/* implicit */unsigned int) (~(-7943342147026248099LL)));
        }
        for (unsigned short i_10 = 2; i_10 < 9; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                for (unsigned int i_12 = 4; i_12 < 9; i_12 += 4) 
                {
                    for (short i_13 = 2; i_13 < 12; i_13 += 2) 
                    {
                        {
                            arr_46 [i_0] [i_0] [i_10] [i_10] [i_11] [i_10] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_33 ^= ((/* implicit */_Bool) ((unsigned int) (unsigned short)35908));
                            var_34 -= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-30081)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */_Bool) 12524670982118241286ULL)) ? (((/* implicit */unsigned long long int) 683524177U)) : (1572900329428198414ULL))), ((~(arr_30 [i_10] [i_10] [i_14]))))) : (max((((/* implicit */unsigned long long int) (unsigned char)122)), (((((/* implicit */unsigned long long int) -8691186349138910484LL)) & (5922073091591310308ULL)))))));
                        arr_51 [i_0] [i_10] [i_14] [i_15] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_43 [i_0] [i_10])))) ? (((((/* implicit */_Bool) arr_13 [i_10] [i_14 - 2])) ? (arr_42 [i_15] [i_15] [i_14] [i_10] [8ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)133)))))))) ? (((/* implicit */int) (_Bool)1)) : (max((((((/* implicit */int) (unsigned short)7751)) << (((((((/* implicit */int) (short)-8927)) + (8947))) - (18))))), ((~(((/* implicit */int) arr_44 [i_0]))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 2; i_16 < 9; i_16 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_16 - 2] [i_16] [i_16] [2U] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_17 = 2; i_17 < 11; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    {
                        arr_61 [i_16] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3611443117U)) ? (((/* implicit */int) (unsigned short)33264)) : (((/* implicit */int) (short)-8927))))) ? (((((/* implicit */int) (unsigned char)133)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53015))) - (9847957625723109735ULL))) - (8598786447986494891ULL))))) : ((((!(((/* implicit */_Bool) (short)8902)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50148)) && (((/* implicit */_Bool) 4775624427503711137ULL))))) : (((/* implicit */int) min(((unsigned short)40314), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        var_37 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_30 [i_17] [i_17] [i_17])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_0] [i_17] [(unsigned char)0]))))) >> (min((5922073091591310348ULL), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_16]))))))) ? (((/* implicit */unsigned long long int) arr_48 [i_18] [i_0] [i_0] [i_0])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1751548248728341415LL)))) ^ (((((/* implicit */_Bool) (unsigned char)50)) ? (5922073091591310308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31624))))))));
                        var_38 ^= ((/* implicit */short) (unsigned char)205);
                    }
                } 
            } 
        }
        arr_62 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((unsigned short)32267), (((/* implicit */unsigned short) (short)-2198))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)52))))) ? (min((((/* implicit */unsigned long long int) arr_43 [i_0] [i_0])), (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [11ULL])) ? (((/* implicit */int) arr_45 [i_0])) : (((/* implicit */int) (unsigned short)25222)))))))));
        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25221))) : (((((/* implicit */_Bool) max(((unsigned char)114), ((unsigned char)219)))) ? (max((((/* implicit */unsigned long long int) (short)-8927)), (arr_15 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) 1308606817U)))))))));
        var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (-(2986360478U))))));
    }
    for (unsigned int i_19 = 1; i_19 < 11; i_19 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 3) 
        {
            for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
            {
                for (long long int i_22 = 1; i_22 < 11; i_22 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_23 = 0; i_23 < 13; i_23 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned char)141))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) (unsigned char)64)), (3622521406U)))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned char)58))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (114926515483374835ULL))))) : (min((((/* implicit */long long int) (unsigned short)40314)), (arr_35 [i_23]))))))))));
                            var_42 = ((/* implicit */_Bool) -8032159532845661792LL);
                        }
                        /* vectorizable */
                        for (long long int i_24 = 2; i_24 < 9; i_24 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23186)) && (((/* implicit */_Bool) 1912794739U)))))));
                            arr_78 [i_19] [i_20] [i_19] [i_19] [i_19] [i_19] [(unsigned short)12] = ((/* implicit */unsigned long long int) arr_52 [i_19] [(unsigned short)5]);
                            var_44 = ((/* implicit */short) ((unsigned short) (_Bool)1));
                            arr_79 [i_19] [i_19] [i_21] [i_19] [i_20] [i_24 + 3] = ((/* implicit */short) ((-8880258622739118415LL) ^ (((/* implicit */long long int) 3672678750U))));
                        }
                        var_45 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3672678750U)) ? (17647356257533752824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52998)))));
                        var_46 += ((/* implicit */_Bool) (+(arr_56 [i_19] [(unsigned short)11])));
                        arr_80 [i_19] [(unsigned short)10] [i_19] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_43 [i_19 - 1] [i_19 + 1]), (arr_43 [i_19 + 1] [i_19])))) ? (min((arr_43 [i_19 - 1] [(short)11]), (((/* implicit */unsigned int) (unsigned char)107)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_19 - 1] [i_19]))))))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) var_2))));
    }
}
