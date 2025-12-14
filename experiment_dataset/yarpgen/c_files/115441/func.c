/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115441
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2]))))) >> (((arr_1 [i_0]) - (844665443072567066ULL)))));
        var_18 -= var_12;
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_19 ^= ((/* implicit */unsigned char) arr_8 [i_1] [i_2]);
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((int) 706473578513097037LL)) >> (((6772670155013964566LL) - (6772670155013964541LL)))));
            var_20 = ((/* implicit */_Bool) min((var_20), (arr_5 [i_1] [i_1])));
            /* LoopNest 3 */
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_2] [i_3] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) -7713235388771319878LL);
                            var_21 &= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                            var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_4]))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            /* LoopSeq 4 */
            for (int i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                var_23 = ((min(((~(20117978U))), (((unsigned int) var_10)))) >= (3113782385U));
                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 8612514754014401355ULL)) ? (((arr_16 [i_1] [10LL] [i_7] [i_7 - 2]) >> (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_24 [i_6] [i_7 - 2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))));
            }
            for (long long int i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                arr_31 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1904124335444459756LL)), (var_10)))) ? (((((/* implicit */long long int) 948621189U)) | (3080206321414626875LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 6698013544393787891LL))))));
                arr_32 [i_1] [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((min((((/* implicit */unsigned long long int) 1401650851539342414LL)), (11650057069444987965ULL))) ^ (min((arr_4 [i_8]), (((/* implicit */unsigned long long int) var_11)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_38 [i_1] [1ULL] [1ULL] [i_1] [(unsigned short)0] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) 3043277821365177611LL));
                            var_25 = ((/* implicit */unsigned char) (-(-6772670155013964567LL)));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), ((-(arr_12 [i_6] [i_9] [i_10])))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_41 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((((/* implicit */_Bool) arr_23 [i_1] [i_6])) ? (var_0) : (((/* implicit */int) (unsigned char)138))))));
                var_27 *= ((/* implicit */long long int) ((_Bool) (~(arr_39 [i_1]))));
                /* LoopSeq 1 */
                for (unsigned char i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 3826251099236576954ULL)) ? (2471717970493162817LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27569)))));
                        arr_46 [3LL] [i_13] &= ((/* implicit */long long int) ((unsigned long long int) arr_22 [i_13]));
                        arr_47 [8] [8] [i_11] [i_11] [i_13] = ((/* implicit */int) ((long long int) arr_27 [i_6] [i_11 - 1] [i_12 - 1]));
                        var_29 *= var_1;
                    }
                    arr_48 [i_1] [i_1] [i_1] [i_11] [i_12] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_1] [10] [i_1]));
                }
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_52 [i_1] [i_6] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_5 [i_14 - 1] [i_14 - 1]), (arr_5 [i_14 - 1] [i_14 - 1])))) ^ ((-(((/* implicit */int) arr_5 [i_14 - 1] [i_14 - 1]))))));
                /* LoopNest 2 */
                for (short i_15 = 2; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 4; i_16 < 11; i_16 += 3) 
                    {
                        {
                            arr_58 [i_1] [i_1] [i_14 - 1] [i_15 - 2] [i_16] = max((((/* implicit */unsigned long long int) ((max((4168429997710882665ULL), (((/* implicit */unsigned long long int) arr_39 [i_16])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 818181207U))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -5445989420824755728LL)) < (3590527011999418859ULL)))), (min((((/* implicit */unsigned long long int) -3080206321414626875LL)), (var_10))))));
                            var_30 = ((/* implicit */short) (~((~(var_2)))));
                            var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_15 + 1]))))) && (((/* implicit */_Bool) min((arr_17 [i_14 - 1] [i_15 - 1] [i_1]), (arr_17 [i_14 - 1] [i_15 - 1] [i_1]))))));
                            arr_59 [i_1] [i_6] [i_1] [i_15 - 1] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((1096114626), (((/* implicit */int) arr_28 [i_1] [(_Bool)1] [i_1]))))), (948621189U)))), ((+(var_5)))));
                            var_32 = ((/* implicit */short) (~(arr_12 [8ULL] [i_14] [i_16 + 1])));
                        }
                    } 
                } 
                var_33 = (-(17120968432900235984ULL));
                arr_60 [i_14 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3080206321414626875LL)) ? (var_15) : (min((4210505475035722429LL), (((/* implicit */long long int) (~(948621199U))))))));
            }
            /* LoopSeq 3 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) (-(4713370687288101680LL)));
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    var_35 = ((/* implicit */short) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_10))) ? (((/* implicit */unsigned long long int) (~(3694058991U)))) : (((unsigned long long int) var_15))))));
                    var_36 = ((arr_63 [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) (-(max((arr_44 [i_1] [i_6] [11ULL]), (((/* implicit */unsigned int) var_7))))))));
                }
                for (int i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    var_37 += ((/* implicit */unsigned char) (~(var_7)));
                    arr_69 [(short)11] [i_17 + 1] [i_17] [i_17] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (1536558153)));
                }
                var_38 = ((/* implicit */short) min((min((14620492974472974672ULL), (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 8339587257907657620LL)) < (var_8)))))))));
            }
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                var_39 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1]))));
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((4844942897144670087ULL) ^ (var_10)))));
                var_41 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)63227))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_43 [i_1] [i_6] [i_20] [(short)3] [10] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
            for (unsigned long long int i_21 = 3; i_21 < 11; i_21 += 2) 
            {
                var_43 *= ((/* implicit */unsigned int) arr_66 [i_21 - 1] [i_21] [i_21 + 1] [i_21 - 3] [i_1]);
                var_44 &= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) 12225200195346816754ULL)))));
                var_45 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((14620492974472974667ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)304))) * (1048575ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 8704352046026583577ULL)))))));
                arr_75 [(unsigned short)4] [(_Bool)1] [i_21] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9344)) >> (((/* implicit */int) ((((long long int) 11256195480353676779ULL)) != (((/* implicit */long long int) arr_53 [10ULL] [i_6])))))));
            }
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) 
    {
        var_46 = ((/* implicit */long long int) (+(arr_77 [i_22] [i_22])));
        var_47 = ((/* implicit */unsigned int) min((var_47), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_22])) ? (arr_79 [i_22]) : (arr_79 [i_22])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)30465))))) : ((+(3877458541U)))))));
        arr_80 [i_22] [i_22] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned short) var_7))), ((~(arr_79 [i_22])))));
        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_78 [i_22] [i_22]), (((/* implicit */short) (_Bool)0))))))))) : (min((min((((/* implicit */unsigned long long int) var_7)), (12225200195346816754ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2249707576U))))))));
    }
    for (long long int i_23 = 2; i_23 < 11; i_23 += 1) 
    {
        arr_83 [i_23] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-9344))))) ? (((unsigned long long int) 8704352046026583578ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61004)) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), (var_1))))))))));
    }
}
