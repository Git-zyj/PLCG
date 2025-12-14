/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159255
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) 1731154367)) ? (10942651957213755841ULL) : (16375858122852497544ULL));
        arr_5 [i_0] = ((/* implicit */unsigned short) 2716900133U);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((unsigned long long int) var_11))));
                        var_15 += ((/* implicit */unsigned int) var_9);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_20 [(signed char)3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))));
                            arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) 562949953421308LL);
                            var_16 = ((/* implicit */short) (~(arr_9 [i_0 - 1])));
                            var_17 = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned int) var_2)), (arr_13 [i_2 + 1] [i_2] [i_2 - 1] [i_1 - 3]))));
                        }
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 16375858122852497544ULL))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 4; i_5 < 11; i_5 += 4) 
                        {
                            var_19 += ((/* implicit */long long int) 0U);
                            var_20 -= ((/* implicit */unsigned int) arr_19 [i_1 - 3] [i_0 - 2] [i_0 - 2] [i_0] [(short)4]);
                            var_21 -= ((/* implicit */_Bool) var_11);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_0))));
                            arr_24 [i_0 + 2] [i_0 + 2] [i_2 + 1] [i_0 + 2] [(unsigned short)3] = ((((/* implicit */_Bool) -1731154367)) ? (((unsigned long long int) 1731154397)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1731154367)) ? (-160351864) : (((/* implicit */int) var_3)))), (min((-1731154367), (1731154367)))))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (160351864)))) : (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)10))))) / ((+(var_13)))))));
            arr_29 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (signed char)-19))) > (arr_23 [i_0] [i_0 + 2] [i_0] [(_Bool)1] [10ULL] [(_Bool)1] [1ULL])));
        }
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_14 [i_0 - 2] [i_0 - 2] [i_7 + 4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 - 2] [i_7 - 1])) && (((/* implicit */_Bool) var_10)))))) : (((var_8) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
            arr_32 [(signed char)0] [i_7 + 2] [10U] = ((/* implicit */unsigned int) arr_27 [i_0 + 1]);
        }
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 680217347812047463LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_31 [i_0])))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_31 [i_0 - 2])))))))));
            var_26 |= (-((+(16375858122852497544ULL))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) arr_18 [i_0] [i_0 + 2] [i_0] [i_0] [i_8 - 1])) ? (((/* implicit */unsigned long long int) 1731154367)) : (8531079719696433154ULL))))))));
            /* LoopNest 3 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_43 [i_0 + 2] [i_11] [i_0 + 2] [i_0 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) >> (((1731154367) - (1731154352))))))));
                            arr_44 [i_0 + 2] [i_8 + 1] [i_11] [i_0 + 2] [i_8] = ((/* implicit */long long int) (signed char)100);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (signed char)104))));
                var_29 = arr_14 [i_0] [(unsigned char)0] [i_0];
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_30 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [(unsigned char)3] [i_14] [(_Bool)1] [i_13] [i_13] [2]))) == (((var_8) ? (arr_45 [10] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_13] [(unsigned char)7])))))));
                            var_31 &= ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (arr_23 [i_8 - 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
                arr_55 [i_0 - 2] [i_8 - 1] [i_12] = ((/* implicit */long long int) (~((-(1731154366)))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            var_33 += ((/* implicit */unsigned int) max((min((arr_9 [i_0]), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)60)))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1)))))))));
            arr_58 [i_15] [i_15] [(short)1] = ((/* implicit */short) (~(7720309678623319465ULL)));
            var_34 = ((/* implicit */int) (-(arr_16 [i_15] [i_15] [i_15] [i_0] [i_0] [i_0] [i_0])));
            var_35 = ((/* implicit */unsigned short) 1731154367);
            /* LoopSeq 2 */
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_5)), (arr_28 [i_0 + 2] [i_0 - 1] [i_0 + 2]))), (((/* implicit */long long int) var_2))));
                            var_37 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-32)) != (1731154368)))), (arr_63 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 2])));
                            var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (arr_9 [i_0 - 1]) : (arr_64 [i_17] [i_15] [i_17] [(unsigned short)5] [i_0 + 2] [i_0] [i_18]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)196)))));
                        }
                    } 
                } 
                arr_65 [i_0] [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) var_10);
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (unsigned char)161))));
            }
            for (unsigned int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_40 = var_13;
                arr_69 [i_0] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)80))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)56765)) ? (((/* implicit */int) (unsigned char)60)) : (1731154367))), (((((/* implicit */int) (_Bool)1)) ^ (1731154367)))))) : (2708371905068513615LL)));
            }
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        arr_73 [i_20] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_0)), (var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_20])) ? (((/* implicit */int) arr_70 [i_20])) : (((/* implicit */int) arr_70 [i_20])))))));
        var_41 = ((/* implicit */unsigned long long int) 2138451487);
    }
    /* LoopSeq 1 */
    for (short i_21 = 3; i_21 < 16; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            for (short i_23 = 0; i_23 < 20; i_23 += 4) 
            {
                {
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (unsigned char)255))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) arr_81 [i_21] [i_22] [i_24]))));
                        var_44 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_70 [i_21 + 2]))))) && (((((/* implicit */_Bool) 2972353215409544211LL)) || (((/* implicit */_Bool) arr_72 [i_21 - 3]))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 20; i_25 += 4) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)5)), ((unsigned char)10)))) : (((((/* implicit */_Bool) var_2)) ? (arr_75 [i_26]) : (((/* implicit */int) (unsigned char)196))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-4247874448486092780LL))))));
                                arr_92 [i_21] [i_22] [i_25] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (signed char)127))), ((~(308242440)))))) ? (((/* implicit */int) arr_85 [i_21] [i_21] [i_21] [i_21 + 3] [i_21 + 3] [i_21 + 3])) : ((((~(((/* implicit */int) arr_71 [(unsigned char)20] [(unsigned char)20])))) << (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_27 = 4; i_27 < 19; i_27 += 4) 
        {
            for (long long int i_28 = 0; i_28 < 20; i_28 += 4) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) var_12))));
                        /* LoopSeq 2 */
                        for (short i_30 = 1; i_30 < 19; i_30 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (_Bool)1))));
                            var_48 = ((/* implicit */int) (-(((long long int) -160351865))));
                        }
                        for (short i_31 = 0; i_31 < 20; i_31 += 4) 
                        {
                            arr_109 [i_21] [i_27] [i_28] [i_27] [i_31] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1081421720U))));
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)12)) ? (arr_82 [i_21] [i_21] [i_21]) : (((((/* implicit */_Bool) (unsigned char)196)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_4)))))))));
                        }
                    }
                } 
            } 
        } 
        arr_110 [16U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)224)))))));
    }
}
