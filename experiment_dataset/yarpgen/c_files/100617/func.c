/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100617
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)57444), (((/* implicit */unsigned short) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) var_4))));
        var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((unsigned short) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)11))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_6), (((((/* implicit */_Bool) 2625418747U)) ? (var_6) : (arr_4 [i_1 - 2])))))) ? (((/* implicit */int) ((signed char) arr_3 [i_1] [i_1 + 1]))) : ((~(((/* implicit */int) var_0))))));
    }
    for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40688)) / ((+(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 4]))) + (arr_5 [i_2 - 1])))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_3 [i_2 - 4] [i_2]))))))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)7)), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)71))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_15 [(_Bool)1] [i_4] = ((/* implicit */unsigned short) arr_4 [i_2 - 2]);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_12 [(unsigned short)11] [i_2] [i_2 + 1]))) + ((+(((/* implicit */int) var_5))))));
                        arr_16 [i_2 - 2] [i_3] [i_3 - 2] [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (_Bool)1))));
                        arr_17 [i_5] [i_3 - 1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [i_2 - 4])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                        var_22 -= ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))))), (var_6)));
        var_23 -= ((/* implicit */unsigned int) (unsigned char)3);
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            {
                arr_27 [i_7] [i_7] [13U] = ((/* implicit */short) (+(max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)19588)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) (short)14037)))))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    var_24 += ((/* implicit */short) ((((((/* implicit */int) (unsigned short)26865)) == (((/* implicit */int) (signed char)-93)))) ? ((+(((/* implicit */int) arr_22 [17U] [(_Bool)1])))) : (min((((/* implicit */int) arr_24 [i_8])), (((((/* implicit */int) arr_25 [i_7])) * (((/* implicit */int) var_3))))))));
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) max((arr_30 [i_7] [i_10] [i_9] [i_10]), (((short) (unsigned char)121))));
                        var_26 = ((/* implicit */unsigned short) (unsigned char)119);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 4; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) (unsigned char)126);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 3] [i_11 - 4] [i_11] [i_11] [i_11])) + (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */int) max((((/* implicit */short) var_3)), (var_4)))) : (((var_10) ? (((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 3] [i_11 - 4] [i_11] [i_11 - 4] [i_11])) : (((/* implicit */int) (unsigned short)56138))))));
                            var_30 -= ((/* implicit */unsigned short) (unsigned char)255);
                        }
                        for (signed char i_12 = 4; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_30 [i_12] [i_10] [i_9] [i_8])))));
                            arr_39 [(_Bool)1] [(unsigned char)13] [i_7] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)30636)) : (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */unsigned char) max((4142196277U), (((/* implicit */unsigned int) (unsigned char)0))));
                        }
                        var_33 -= ((/* implicit */short) ((((/* implicit */int) max((arr_29 [i_7] [(unsigned char)12] [i_9]), (arr_29 [i_10] [i_9] [i_8])))) - (((/* implicit */int) var_12))));
                    }
                    for (short i_13 = 1; i_13 < 23; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) var_11);
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (871960565U))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (3428326836U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_9] [i_9])) & (((/* implicit */int) (signed char)-122))))))))))));
                        var_36 = ((/* implicit */short) var_14);
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1565667393U), (((/* implicit */unsigned int) arr_25 [i_13 - 1]))))) ? (((/* implicit */int) arr_25 [i_13 + 2])) : ((+(((/* implicit */int) (short)25681))))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (min((2147483648U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    }
                    arr_42 [i_7] [i_9] = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) arr_34 [i_7] [i_7] [(_Bool)1] [i_7] [(signed char)22] [i_7])) / (((/* implicit */int) arr_24 [(unsigned short)6])))), (((((/* implicit */int) var_10)) + (((/* implicit */int) (short)-32761))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 24; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_14] [i_15 + 1] [i_16]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)112))))));
                                var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24847)) ? (((/* implicit */int) (unsigned short)47008)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)10313), (((/* implicit */unsigned short) (_Bool)1))))) ? (((((/* implicit */int) arr_48 [i_14] [(unsigned short)14] [i_7] [i_7] [i_7] [i_7] [i_7])) * (((/* implicit */int) var_3)))) : ((-(((var_13) ? (((/* implicit */int) arr_34 [i_14] [i_14] [i_8] [(unsigned short)13] [i_7] [(signed char)18])) : (((/* implicit */int) arr_28 [i_14] [i_7] [i_7]))))))));
                    var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_37 [i_8] [i_8] [i_8] [i_8] [i_7]), (((/* implicit */unsigned char) arr_25 [i_7])))))));
                    arr_50 [i_7] [i_8] [i_7] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (unsigned short)9421)), (1048575U)))))) ? (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_31 [18U] [i_7] [i_7] [i_7])))) : (((/* implicit */int) ((428235184U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                }
                var_43 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2557548245U)))))) != (((((/* implicit */_Bool) ((arr_38 [i_8] [i_7] [i_7] [(_Bool)1] [i_7] [i_7]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [(signed char)10] [i_7] [i_8] [i_8] [i_8]))) : (max((((/* implicit */unsigned int) arr_47 [i_7] [i_8] [i_7] [i_8] [i_7])), (var_11)))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((var_3), (arr_25 [i_17]))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_4), (arr_51 [i_7] [i_8] [i_7])))))))));
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        var_45 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(arr_54 [i_18] [i_17] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) (signed char)-26))))))));
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) : (max((268435455U), (((/* implicit */unsigned int) (unsigned char)249))))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12647))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))) : (((/* implicit */int) (unsigned char)173))));
                    }
                    var_48 = min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)5636)) ? (((/* implicit */int) (unsigned short)36975)) : (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))) | (arr_54 [i_17] [i_8] [i_7]))));
                }
                var_49 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_3)), ((-(arr_57 [i_7] [i_8] [i_8]))))) % (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) (signed char)-73)))))))));
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned char) var_3);
    var_51 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-54))));
    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) min((var_5), (((/* implicit */short) (unsigned char)17)))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_3)))))) == (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18276))))))))));
}
