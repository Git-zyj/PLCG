/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136646
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = max((((/* implicit */unsigned long long int) (_Bool)1)), (13231808984406135169ULL));
        arr_6 [i_1] = min(((((_Bool)1) ? (13231808984406135164ULL) : (5214935089303416452ULL))), ((+((-(13231808984406135164ULL))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [(signed char)6])))) && (((/* implicit */_Bool) max((5214935089303416452ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)31))));
            var_18 &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (signed char)-32))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-31))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [(_Bool)1] [i_2] [i_2])))) : ((((_Bool)1) ? (5214935089303416452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
            arr_16 [i_2] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (13231808984406135169ULL) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_4]))) : (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) ^ (((/* implicit */int) arr_10 [i_2] [i_4] [i_4])))))));
            var_20 -= ((/* implicit */long long int) ((short) max(((_Bool)1), ((_Bool)1))));
            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_4] [i_4])))) : (((/* implicit */int) ((short) arr_7 [i_4])))));
        }
        for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 3) 
        {
            var_22 += ((/* implicit */unsigned short) (short)30141);
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_13 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) & (arr_9 [i_2] [(unsigned short)18])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) arr_13 [i_5 + 1] [i_5 - 3])))))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
        {
            var_24 = ((/* implicit */signed char) min((11785291127680453802ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6 + 1] [i_2])) ? (((/* implicit */int) arr_14 [i_6 - 2] [i_2])) : (((/* implicit */int) arr_14 [i_6 + 3] [i_2])))))));
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) - (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_8] [i_6])) ? ((((_Bool)1) ? (arr_27 [i_2] [i_6] [(short)1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_26 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min((((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)19869))))), (min(((short)-1), (((/* implicit */short) arr_18 [i_2] [i_7]))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_28 += (_Bool)1;
                var_29 += ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30141))) >= (arr_19 [i_6])))) : (arr_24 [i_6 - 1] [i_6 - 1] [i_6 + 1]))));
                var_30 = ((/* implicit */short) (signed char)43);
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_31 = ((/* implicit */long long int) arr_28 [i_2] [i_6] [i_11] [(short)19] [i_6] [i_11 - 1]);
                var_32 = ((/* implicit */_Bool) (signed char)-113);
                arr_35 [i_2] [i_2] [i_2] [12] = ((/* implicit */unsigned char) -548339258);
            }
            for (int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    arr_40 [i_6] [i_6 + 2] [i_6] [i_6] [i_6] |= ((/* implicit */long long int) max((max((arr_33 [i_12 + 3] [i_6] [i_12 + 3]), (((/* implicit */unsigned int) arr_26 [i_12 + 1] [(signed char)8] [i_12 + 1] [i_6])))), (((/* implicit */unsigned int) (short)30132))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_8 [i_2]))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    var_34 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) == (((/* implicit */int) min((arr_12 [i_6] [i_2]), (((/* implicit */signed char) (_Bool)1))))))))) : (((15308905574552943661ULL) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)113)))))))));
                    var_35 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) % ((+(((/* implicit */int) (signed char)-44))))))));
                }
                for (short i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    arr_48 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-43), (((/* implicit */signed char) (_Bool)1))))) + (((/* implicit */int) min(((short)30142), (((/* implicit */short) arr_47 [i_2] [i_2] [i_6] [i_12] [i_15] [(signed char)18])))))));
                    var_36 &= ((/* implicit */unsigned short) min(((+(arr_25 [i_2] [i_6]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_15] [i_15]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) - (16016214018471233179ULL)))))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30145)) ? (((/* implicit */int) (short)-30166)) : (((/* implicit */int) arr_47 [i_12 + 1] [i_2] [i_12 + 2] [i_12 - 1] [i_2] [i_6 + 1]))))) ? (((/* implicit */int) ((_Bool) 7989244730472227399LL))) : (((/* implicit */int) min(((unsigned short)30127), (((/* implicit */unsigned short) (_Bool)1)))))));
                    var_38 = ((/* implicit */long long int) arr_31 [i_2] [i_2] [i_2] [i_2]);
                }
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    arr_51 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_52 [(_Bool)1] [(_Bool)1] [i_12 + 3] [i_2] [i_12 - 1] [(_Bool)1] = ((/* implicit */unsigned short) (+(arr_46 [i_2] [i_6] [i_6] [i_6] [i_12] [(signed char)6])));
                    arr_53 [i_6 - 1] [i_6] [i_6] [i_16] [i_16] |= ((/* implicit */_Bool) ((long long int) ((_Bool) (short)-30139)));
                    var_39 = var_4;
                }
                arr_54 [i_2] [3] [i_12 + 1] [i_12] = ((/* implicit */unsigned int) arr_15 [i_12]);
            }
        }
        for (int i_17 = 0; i_17 < 21; i_17 += 2) 
        {
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)42)) % (((/* implicit */int) (short)-30143))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : (((((/* implicit */_Bool) arr_8 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30142))) : (-7989244730472227399LL)))))) ? (((/* implicit */int) (signed char)39)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)49)))))))));
            arr_58 [i_2] [19] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_2] [(signed char)20] [(unsigned short)13] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) max((arr_46 [i_2] [i_17] [i_17] [(unsigned char)5] [i_17] [i_2]), (arr_46 [i_2] [i_17] [i_17] [i_2] [(_Bool)1] [i_17]))))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            arr_62 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-59))))) ? (((/* implicit */unsigned long long int) ((int) (short)-30142))) : (max((((/* implicit */unsigned long long int) arr_28 [i_2] [i_2] [(unsigned char)15] [i_18] [i_18] [i_18])), (arr_32 [i_2] [i_2] [i_2] [i_18]))))))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                for (signed char i_20 = 1; i_20 < 19; i_20 += 3) 
                {
                    {
                        arr_67 [i_2] [i_18] [i_18] [i_20] |= ((/* implicit */unsigned short) (short)11663);
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (short)30142)))))) ? (((/* implicit */int) arr_29 [(unsigned short)4] [i_20 + 2] [i_20] [i_19] [i_20])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_20 + 2] [i_20 + 2] [i_20 + 2]))))))))));
                        var_42 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_38 [i_2] [i_19] [i_19] [i_2] [i_2] [i_2])))) + ((+(((/* implicit */int) (short)30141))))));
                    }
                } 
            } 
            arr_68 [i_2] [i_2] = ((/* implicit */short) ((7989244730472227393LL) < (((/* implicit */long long int) ((/* implicit */int) (short)30141)))));
            var_43 &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-30143)) % (((/* implicit */int) (signed char)-43))));
        }
        arr_69 [i_2] = ((min((arr_21 [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2])))) < (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_29 [i_2] [i_2] [19] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_23 [i_2] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_2] [i_2] [i_2])))))))));
    }
    var_44 = ((/* implicit */long long int) (~((+(((((/* implicit */int) var_6)) << (((((/* implicit */int) (short)30141)) - (30138)))))))));
}
