/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119080
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
    var_17 = ((/* implicit */unsigned char) var_1);
    var_18 &= ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)19573), ((unsigned short)45962)))) ? (((((/* implicit */_Bool) (unsigned short)19573)) ? (((1846746902295877184LL) * (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((((/* implicit */int) min((var_0), (var_6)))) >> (((/* implicit */int) min((var_1), (var_7)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5023)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45962))) : (12603833557144458206ULL))))));
        var_19 += ((/* implicit */_Bool) (unsigned char)84);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 *= ((long long int) (!(((/* implicit */_Bool) ((signed char) -1)))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((-1LL) % (-1LL))), (arr_4 [(_Bool)1] [(_Bool)1]))))));
        var_22 = ((/* implicit */unsigned char) var_14);
        var_23 ^= ((/* implicit */signed char) 5842910516565093410ULL);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((short) min((var_3), (((/* implicit */long long int) (unsigned short)33122)))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_18 [i_6] [i_6] [i_5] [i_6] [i_6] [i_5] [(signed char)17] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_6] [i_3] [i_4]))));
                            arr_19 [i_2] [i_3] [(unsigned short)2] [i_4] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) arr_4 [i_5] [i_3]);
                            arr_20 [i_6] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((min((arr_4 [i_5] [(unsigned char)12]), (((/* implicit */long long int) arr_5 [i_5])))) | (((min((((/* implicit */long long int) (_Bool)1)), (var_3))) | (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))));
                            var_24 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_3 + 2] [(_Bool)1] [i_3 - 1])) | (((/* implicit */int) arr_11 [i_3 + 2] [i_3 + 2] [i_3 - 1])))), (((/* implicit */int) min((arr_11 [i_3 + 2] [i_3 + 2] [i_3 - 1]), (arr_11 [i_3 + 2] [i_3] [i_3 - 1]))))));
                        }
                    } 
                } 
            } 
            var_25 ^= min((-1846746902295877185LL), (((/* implicit */long long int) (short)-30303)));
        }
        for (int i_7 = 2; i_7 < 21; i_7 += 1) /* same iter space */
        {
            var_26 ^= min((((/* implicit */short) (unsigned char)109)), ((short)25380));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (unsigned short)45963))));
            arr_24 [i_7] [i_2] [i_2] = (~(var_9));
            arr_25 [i_2] [(_Bool)1] [i_2] = ((/* implicit */signed char) var_4);
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                arr_29 [15U] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (((unsigned short) var_5))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_8] [i_7] [i_7 - 1])))))));
                var_28 = min(((short)-953), (arr_14 [i_7 + 3] [i_7] [i_7] [i_7 + 3] [i_7 + 2] [i_7 + 2]));
                var_29 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_15 [i_7 + 2] [i_7 - 2] [1] [(unsigned char)22])))), ((-(((/* implicit */int) (short)-14182))))));
                var_30 *= ((/* implicit */unsigned int) var_0);
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((unsigned long long int) var_13));
                            var_32 = ((/* implicit */unsigned long long int) arr_34 [i_10 - 2]);
                            arr_39 [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) ((8991111253809842091ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)2] [i_9] [22U] [i_10 - 2] [22U] [i_11] [i_12])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                var_33 = ((/* implicit */signed char) var_2);
                var_34 += ((/* implicit */unsigned int) ((arr_38 [i_13] [i_2] [i_9] [i_2] [i_2]) - (arr_38 [i_2] [i_2] [i_9] [i_13] [i_13])));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        {
                            var_35 &= ((/* implicit */unsigned long long int) (short)-953);
                            var_36 = ((/* implicit */short) var_15);
                            var_37 = ((/* implicit */unsigned long long int) arr_11 [i_13] [i_9] [i_2]);
                        }
                    } 
                } 
                arr_48 [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_2])) > (-8345836138989380204LL))))));
                /* LoopSeq 2 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_38 = ((/* implicit */long long int) ((((((/* implicit */long long int) 1812075068)) > (7910212996701406334LL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_16))) / (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_16] [i_9])) >> (((((/* implicit */int) var_8)) + (19538)))));
                }
                for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    arr_54 [i_9] = ((/* implicit */long long int) arr_5 [i_2]);
                    var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_2]))));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (((_Bool)1) ? (-1250583535) : (((/* implicit */int) var_8)))))));
                }
            }
            for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                arr_58 [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_41 [i_2] [i_2] [i_2]);
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12603833557144458206ULL)) && (((1442464929723061824LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        }
        arr_59 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (-6555008677860007018LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
        arr_60 [i_2] [i_2] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_42 [i_2] [i_2] [i_2] [i_2] [i_2])), (9455632819899709524ULL))), (((/* implicit */unsigned long long int) (!(var_7))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 24; i_19 += 3) 
        {
            for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                for (unsigned int i_21 = 3; i_21 < 21; i_21 += 4) 
                {
                    {
                        arr_68 [i_20] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_10)), (min((min(((unsigned short)19572), (((/* implicit */unsigned short) var_16)))), (((/* implicit */unsigned short) var_7))))));
                        arr_69 [i_21] [i_21] [i_20] [12U] [i_21] [i_21] = ((/* implicit */int) var_0);
                        var_43 = ((/* implicit */unsigned char) var_9);
                        var_44 = ((/* implicit */long long int) 100663296);
                    }
                } 
            } 
        } 
    }
}
