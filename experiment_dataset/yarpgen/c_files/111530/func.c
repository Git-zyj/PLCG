/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111530
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
            {
                arr_9 [i_0] [i_2] [i_2] = var_9;
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (short)31313);
                arr_11 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned short) ((short) ((signed char) (signed char)7))));
                arr_12 [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) max((((short) (signed char)21)), (((/* implicit */short) (signed char)7)))))));
            }
            for (short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (short)32767);
                    arr_18 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_0] [(short)3] = ((/* implicit */short) (signed char)127);
                    arr_19 [i_4] [i_4] [i_3] [i_4] = min(((~(((726337230) / (((/* implicit */int) var_9)))))), (((/* implicit */int) ((arr_5 [3LL] [i_0] [3LL]) != (((/* implicit */long long int) max((var_3), (var_3))))))));
                }
                for (signed char i_5 = 3; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_3] [10ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((signed char) var_3))), (arr_7 [i_0] [i_0] [i_0] [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) ((short) arr_23 [i_5 + 1] [i_5 - 2] [i_3] [i_5 + 1]))))));
                        var_20 -= ((/* implicit */int) (signed char)127);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_7] [14] [i_3] [i_1] [i_0] = ((/* implicit */int) arr_28 [(unsigned char)16] [i_1] [i_1] [i_1] [(signed char)18]);
                        var_21 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_3] [i_5] [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32640)))) : ((+(((/* implicit */int) (short)32640)))))));
                        arr_30 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_6 [i_5 - 2] [i_5 - 2]) ? (((/* implicit */int) min((((/* implicit */short) arr_6 [i_5 - 3] [i_5])), (var_13)))) : (((int) var_2))));
                        arr_31 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
                        arr_32 [i_7] [i_3] [i_1 + 1] = ((/* implicit */unsigned short) ((int) (+(arr_25 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 3] [i_5 - 2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */signed char) ((short) ((((_Bool) 0)) ? (min((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0])), (140737421246464LL))) : (((/* implicit */long long int) var_15)))));
                        arr_35 [i_0] [i_3] [i_8] [i_5] [i_8] = ((/* implicit */_Bool) ((long long int) arr_23 [i_0] [(_Bool)1] [i_3] [(_Bool)1]));
                        arr_36 [i_3] [i_3] = ((/* implicit */int) ((long long int) arr_15 [i_0] [(_Bool)1] [i_0] [i_5] [i_3] [i_3]));
                        var_23 = ((/* implicit */int) ((unsigned char) ((long long int) (short)5198)));
                        arr_37 [i_3] [(short)0] [i_5] [i_1] [i_1] [14] [i_3] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((_Bool) (short)18536))), (1253280352627249474ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 23ULL)))))));
                    }
                    arr_38 [i_3] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */int) ((short) (~(((/* implicit */int) var_1)))));
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    arr_43 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (short)21578)) & (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)64))))));
                    arr_44 [16LL] [i_3] [16LL] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_8)))), (-896956254))))));
                    arr_45 [i_3] [i_1 - 1] [i_1 - 1] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)19)), (max((((/* implicit */short) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_16)))))) ? (arr_42 [i_3] [i_1 + 1] [i_3] [i_9]) : (arr_16 [i_3] [i_3])));
                }
                arr_46 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)-17303))));
            }
            arr_47 [i_0] [i_1 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)2016))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            var_24 *= ((/* implicit */signed char) 17440160518366194676ULL);
            arr_50 [i_0] [i_0] = ((/* implicit */int) ((_Bool) ((signed char) ((unsigned char) var_11))));
        }
        for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            arr_54 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_20 [i_0] [i_11] [i_11]))));
            /* LoopSeq 2 */
            for (int i_12 = 1; i_12 < 16; i_12 += 3) /* same iter space */
            {
                arr_58 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_25 [i_0] [i_0] [i_0] [i_11] [i_11] [i_12 + 3]), (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min(((signed char)107), (((/* implicit */signed char) var_0)))))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (var_6)))));
                arr_59 [i_0] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_18))))));
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_64 [i_14] [i_14] = ((/* implicit */_Bool) var_16);
                            var_25 = ((/* implicit */_Bool) min((var_25), (((max((((/* implicit */long long int) ((short) var_10))), (4438109314242355969LL))) == (((/* implicit */long long int) var_7))))));
                            arr_65 [i_0] [i_14] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_34 [i_0] [i_12 + 3] [i_12] [i_11] [i_14])) + (((/* implicit */int) arr_34 [i_13] [i_12 - 1] [i_12] [i_13] [i_13])))));
                        }
                    } 
                } 
            }
            for (int i_15 = 1; i_15 < 16; i_15 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */short) (~(((/* implicit */int) ((((arr_39 [i_0] [i_0] [12ULL] [i_0] [i_15 + 2]) < (var_7))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1611624924)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))));
                arr_68 [(unsigned char)2] [i_11] [i_15] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36717))))))), ((~(((/* implicit */int) arr_13 [i_11] [i_15 + 1] [i_11]))))));
                arr_69 [i_0] [i_0] [i_15] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_66 [i_15 - 1] [i_15 + 1]), (arr_66 [i_15 - 1] [i_15 + 1])))) << ((((-(arr_16 [i_15 + 3] [i_0]))) + (1641756251183642422LL)))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            arr_72 [i_16] [i_16] = ((/* implicit */int) ((unsigned char) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_14))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-13)))))));
            arr_73 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((int) ((signed char) (short)496)));
        }
    }
    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        arr_76 [i_17] [i_17] = ((/* implicit */unsigned long long int) max((max((arr_24 [i_17] [i_17] [(short)14] [i_17]), (((/* implicit */long long int) (short)-18537)))), (((/* implicit */long long int) var_3))));
        var_28 = ((/* implicit */short) var_11);
        /* LoopSeq 1 */
        for (unsigned char i_18 = 2; i_18 < 8; i_18 += 1) 
        {
            arr_79 [i_18 + 1] [i_17] [i_17] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (((short) (_Bool)0))));
            arr_80 [i_17] [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_14 [i_18] [i_17] [i_17] [i_18 - 1]), (arr_14 [i_18] [i_17] [i_17] [i_18 + 1]))))));
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_85 [i_19] [i_19] = ((/* implicit */short) min(((~(17193463721082302142ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (short i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                for (unsigned short i_22 = 3; i_22 < 22; i_22 += 1) 
                {
                    {
                        arr_95 [i_19] = ((/* implicit */short) max((72057044282114048ULL), (((/* implicit */unsigned long long int) (signed char)-66))));
                        var_29 = ((/* implicit */signed char) var_8);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_91 [i_22 + 1] [i_22 + 2] [i_22 - 1] [i_22 - 2]))));
                        arr_96 [i_19] [i_20] [i_20] [i_21] [i_19] [(_Bool)1] = ((/* implicit */long long int) arr_81 [i_19]);
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */signed char) min((((/* implicit */long long int) var_2)), ((~(((-1216305995040513818LL) & (((/* implicit */long long int) var_5))))))));
    var_32 = ((/* implicit */long long int) ((signed char) min((((/* implicit */int) var_17)), (max((var_3), (((/* implicit */int) var_2)))))));
    var_33 = ((/* implicit */unsigned short) (+(var_7)));
}
