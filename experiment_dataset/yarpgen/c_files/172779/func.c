/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172779
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(0U))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 4; i_3 < 21; i_3 += 4) 
                {
                    var_17 |= ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
                    var_18 = ((/* implicit */unsigned long long int) var_13);
                    arr_12 [i_2] [i_2] [i_2] [i_1] [(short)15] = ((/* implicit */short) -6017191487588987628LL);
                }
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((_Bool) (unsigned short)65524));
                    var_20 &= ((/* implicit */short) ((unsigned long long int) var_1));
                    arr_17 [i_2] = (-(var_9));
                }
                var_21 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) var_13)));
            }
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_20 [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (-(-2)));
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) != (var_4))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        var_24 = ((/* implicit */int) ((unsigned char) (unsigned short)17148));
                        arr_26 [i_5] [i_7] [i_7] [3ULL] [i_7] [i_7] = ((/* implicit */unsigned int) var_9);
                    }
                    for (int i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned int) var_15)))));
                        var_26 = ((/* implicit */unsigned int) (~(25ULL)));
                    }
                    var_27 = ((var_15) && (((/* implicit */_Bool) (unsigned short)17148)));
                    arr_31 [i_5] [11] [i_5] [11] [i_6] = ((/* implicit */signed char) ((int) 2));
                }
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (2)))))))));
            }
            for (short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) 14146429766563378420ULL)) ? (var_9) : (var_5))))));
                    var_31 *= ((/* implicit */unsigned int) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 2; i_11 < 19; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) var_10);
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                    }
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    var_33 = ((/* implicit */int) ((unsigned int) 14146429766563378420ULL));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) 4300314307146173195ULL))));
                    arr_42 [(unsigned char)15] [0LL] [i_1] [i_0] = ((/* implicit */int) var_8);
                }
            }
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */int) ((var_9) > (((/* implicit */int) var_10))))) / (((/* implicit */int) ((1073741823) != (((/* implicit */int) (short)0)))))))));
                var_36 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17148)) ^ (((/* implicit */int) var_7))));
            }
            for (int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_37 = ((short) var_11);
                var_38 = ((/* implicit */signed char) 5);
                arr_50 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((14146429766563378427ULL) - (14146429766563378400ULL)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7)));
                arr_51 [i_0] [i_0] [(_Bool)1] [i_14] = ((/* implicit */unsigned long long int) (unsigned short)17158);
            }
            var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) var_6))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned char) (unsigned short)17149);
            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)17159))));
        }
        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) 
        {
            var_43 = ((/* implicit */unsigned long long int) var_14);
            var_44 = ((/* implicit */_Bool) max((var_44), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3858585943U)) ? (((/* implicit */long long int) var_5)) : (var_0)))) && ((!(((/* implicit */_Bool) (short)1))))))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_45 = 4300314307146173199ULL;
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)51)) || (((/* implicit */_Bool) (-(14146429766563378417ULL)))))))));
                            var_47 = ((/* implicit */signed char) (unsigned short)65523);
                        }
                    } 
                } 
            } 
            arr_66 [i_0] [i_0] [i_17] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) /* same iter space */
            {
                var_48 = ((/* implicit */long long int) var_4);
                var_49 = ((/* implicit */short) ((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)48362))));
            }
            for (unsigned short i_22 = 1; i_22 < 21; i_22 += 3) /* same iter space */
            {
                var_50 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((var_7) ? (var_9) : (var_9))) + (1928923191)))));
                var_51 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)59247)) == (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 20; i_23 += 2) 
                {
                    for (unsigned long long int i_24 = 1; i_24 < 18; i_24 += 3) 
                    {
                        {
                            arr_79 [i_0] [17ULL] [i_17] = ((/* implicit */int) var_12);
                            var_52 = ((/* implicit */long long int) (unsigned char)240);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (unsigned long long int i_25 = 4; i_25 < 21; i_25 += 2) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 4) 
            {
                for (int i_27 = 0; i_27 < 22; i_27 += 3) 
                {
                    {
                        arr_88 [i_0] [i_0] [17ULL] [i_0] = ((/* implicit */unsigned int) (signed char)34);
                        arr_89 [i_0] [i_0] [i_0] [i_0] = var_3;
                        var_53 = ((/* implicit */short) ((int) (_Bool)1));
                        var_54 = (_Bool)1;
                        var_55 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) 4300314307146173182ULL)))));
                    }
                } 
            } 
        } 
        var_56 = ((/* implicit */signed char) (short)31804);
    }
    var_57 ^= ((/* implicit */unsigned long long int) var_5);
    var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6))));
}
