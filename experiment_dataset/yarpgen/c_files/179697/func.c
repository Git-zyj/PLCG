/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179697
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
    var_11 = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */int) var_4)) << (((/* implicit */int) (signed char)3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = 8689225323487027561ULL;
                    arr_9 [i_0 - 4] [i_0] [14U] = ((/* implicit */signed char) ((min(((!(arr_0 [i_0]))), (((((/* implicit */_Bool) (signed char)37)) && ((_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (18446744073709551615ULL)));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((arr_5 [i_2] [i_2 - 2] [i_2 - 2]), (((/* implicit */long long int) 0))))) + (16604591283092807513ULL)));
                    var_15 = ((/* implicit */unsigned long long int) (signed char)2);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (signed char)31);
                    var_16 = ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0]);
                    var_17 = ((/* implicit */int) var_10);
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        var_18 &= arr_19 [i_5];
        var_19 = ((/* implicit */signed char) var_3);
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (int i_8 = 4; i_8 < 10; i_8 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) 479012390866591946LL);
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 4294967271U))));
                        arr_34 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) ((long long int) 1165953225463730346ULL));
                        var_22 += ((/* implicit */int) max((max((min((1ULL), (((/* implicit */unsigned long long int) (signed char)-48)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)130), (((/* implicit */unsigned char) (_Bool)1))))) >> (((arr_21 [i_6]) - (464467691U))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_12 [i_6] [i_6]);
                        var_24 ^= ((/* implicit */short) arr_25 [i_6]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) (-(min((max((var_10), (((/* implicit */unsigned long long int) 1397983317)))), (((/* implicit */unsigned long long int) max((2367682633924127707LL), (((/* implicit */long long int) var_3)))))))));
                        var_26 ^= ((/* implicit */long long int) ((-600869990) | (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_27 += ((/* implicit */short) arr_40 [4U] [i_6] [i_11]);
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_8 + 2] [i_8] [i_8] [(_Bool)1])), (arr_3 [i_8 - 3] [i_8 - 3] [i_6])))) | (((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -6902542062846727308LL)))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_45 [i_6] [i_6] [i_6] [i_6]))));
                        var_31 = ((/* implicit */signed char) 2122233171260913739LL);
                    }
                    arr_46 [i_7] = ((/* implicit */unsigned long long int) arr_2 [i_7] [i_7] [i_7]);
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6]))) > (((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_7])) ? (min((arr_2 [i_7] [14LL] [i_7]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6])))))));
                    var_33 = ((/* implicit */unsigned short) arr_8 [i_8] [i_6] [i_6]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_13 = 3; i_13 < 11; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                for (short i_15 = 2; i_15 < 10; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_59 [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((((/* implicit */_Bool) 1724449995)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62456))) / (arr_39 [i_16]))) : (((/* implicit */long long int) min((((/* implicit */int) (short)15)), (417884698))))))));
                            var_34 *= ((/* implicit */_Bool) ((min((min((var_9), (-829755594))), (((/* implicit */int) arr_45 [i_13 + 1] [i_13 - 3] [i_13 - 1] [i_13 + 1])))) ^ ((~(((((/* implicit */int) arr_56 [i_6] [i_6] [i_6] [i_6] [i_6])) << (((((/* implicit */int) arr_49 [i_6] [i_14] [i_6])) - (30)))))))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_15 [i_6] [i_6] [i_6] [i_16]) << (((arr_15 [i_6] [i_6] [i_14] [i_15]) - (3590913790541766534LL)))))), (((((/* implicit */unsigned long long int) var_6)) ^ (arr_58 [i_6] [i_6]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_17 = 1; i_17 < 8; i_17 += 1) 
            {
                var_36 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_13]))))), (max((((/* implicit */unsigned int) arr_6 [i_6])), (var_6))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -329758634)) || (arr_24 [i_6] [i_13]))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [(signed char)7]))) | (-5888885936772861490LL)))))))));
                var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_32 [i_17 - 1] [i_13] [i_17 + 3] [i_17] [i_13] [i_17]), (arr_32 [i_13] [i_13] [i_17 + 2] [i_13] [i_13] [i_13]))))));
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_20 [i_13])) && (((/* implicit */_Bool) 13462724673384634977ULL)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_6])) * (((/* implicit */int) var_5)))) - ((-(((/* implicit */int) arr_45 [i_13 - 2] [i_13] [i_13] [i_13]))))))))))));
            }
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) max(((+(min((arr_52 [i_13] [i_13] [i_13 - 1] [i_13 - 1]), (((/* implicit */long long int) arr_27 [i_6] [i_6])))))), (((/* implicit */long long int) (unsigned short)3)))))));
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            arr_67 [i_6] [i_18] [i_6] = ((/* implicit */short) var_3);
            arr_68 [i_6] [i_18] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((((/* implicit */unsigned int) var_9)) != (1404675943U))) && (((/* implicit */_Bool) arr_62 [i_6] [i_6]))))), ((unsigned char)151)));
            var_40 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 1) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_66 [i_6] [i_6] [i_6])) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)130)))))));
            var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -1286069289)))))));
        }
    }
    for (short i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned short) ((unsigned char) (~((((_Bool)0) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))))));
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (-6902542062846727308LL)));
        /* LoopNest 2 */
        for (unsigned short i_21 = 1; i_21 < 10; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 12; i_22 += 2) 
            {
                {
                    var_45 = ((/* implicit */signed char) (~(((((2079521067U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) (short)-19752)) + (19769)))))));
                    var_46 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) >> (((((/* implicit */int) (short)25825)) - (25809)))));
                }
            } 
        } 
    }
}
