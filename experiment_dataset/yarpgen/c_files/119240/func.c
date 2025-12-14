/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119240
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
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_3), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)67))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_15);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_1] = var_13;
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((arr_4 [i_0]) ^ (((/* implicit */int) (signed char)3)))))));
                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)3)) ? ((((+(-178908610))) / (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (~(var_5)));
                            var_20 -= ((/* implicit */unsigned char) min((arr_10 [i_0] [i_0] [(signed char)23] [i_0]), (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), ((unsigned char)218))))));
                            arr_16 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)57))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-64)))))));
                            var_21 = ((/* implicit */int) ((unsigned char) (((!(((/* implicit */_Bool) (signed char)-58)))) ? (min((((/* implicit */int) var_3)), (var_8))) : (((/* implicit */int) (signed char)2)))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) || (((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) 951332984))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            arr_28 [6] [i_1] [i_5] [6] [i_7] [i_5] = arr_8 [i_7] [i_6] [i_5] [8];
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) min(((~(((/* implicit */int) (signed char)-64)))), (((/* implicit */int) (unsigned char)24)))))));
                        }
                    } 
                } 
                arr_29 [i_0] [i_1] [(unsigned char)20] [i_5] = ((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [i_0] [i_0]));
            }
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                arr_32 [i_0] [i_1] [i_0] [i_8] = var_13;
                arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (unsigned char)3)))) ^ (((((/* implicit */int) var_13)) / (((/* implicit */int) var_3))))));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_10 = 2; i_10 < 21; i_10 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-9)))))));
                arr_40 [(unsigned char)2] [i_9] [(unsigned char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)191))) : (min((((/* implicit */int) (signed char)18)), (178908628))))))));
            }
            /* vectorizable */
            for (signed char i_11 = 3; i_11 < 24; i_11 += 1) 
            {
                arr_44 [i_0] [i_9] [i_11] = ((arr_13 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11]) ^ (arr_18 [i_0] [i_0] [i_0] [i_0]));
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-10)) & (((/* implicit */int) (signed char)-123)))))));
            }
            arr_45 [i_9] [i_9] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)(-127 - 1))), (var_14)));
            arr_46 [i_9] = ((/* implicit */signed char) min(((((+(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_9] [i_9])))) & (((/* implicit */int) arr_2 [i_9])))), (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (unsigned char)197)) : (((((/* implicit */_Bool) (signed char)64)) ? (var_10) : (((/* implicit */int) (signed char)110))))))));
        }
        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                for (unsigned char i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        {
                            var_25 = (~(((/* implicit */int) (unsigned char)193)));
                            arr_59 [i_0] [i_12] [(unsigned char)3] = ((unsigned char) ((((/* implicit */_Bool) 32767)) ? (853400479) : (((/* implicit */int) (unsigned char)192))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                arr_62 [i_0] [i_12] [i_12] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (arr_20 [i_0] [i_0] [i_12] [i_16]) : (((/* implicit */int) (signed char)20)))));
                arr_63 [i_0] [i_12] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2))))) ? (var_8) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_16])) : (var_0)))) ? (((/* implicit */int) (unsigned char)152)) : (var_11)))));
            }
            for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 1; i_18 < 23; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
                    {
                        {
                            arr_73 [i_19] [(signed char)6] [i_18] [i_18] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1458364544) & (((/* implicit */int) (unsigned char)197))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)64))));
                            arr_74 [i_18] [i_12] [i_17] [i_17] [i_19] [i_18] [i_17] = ((unsigned char) (-(((/* implicit */int) (unsigned char)32))));
                            arr_75 [i_0] [i_18] [i_12] [i_18] [17] = ((/* implicit */unsigned char) min((-1319756484), (((/* implicit */int) var_6))));
                            arr_76 [i_0] [i_18] [(unsigned char)8] [6] [i_18] [i_18] [i_19] = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)128))))))));
                        }
                    } 
                } 
                arr_77 [i_0] [(unsigned char)1] [i_17] [i_17] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_1))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((+((+(((/* implicit */int) arr_30 [i_0] [i_0])))))) : (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (signed char)-96)) : (33553408)))))));
            }
            var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)138)), (max((min((((/* implicit */int) arr_69 [i_0])), (arr_42 [i_0] [20] [i_0]))), (((/* implicit */int) (unsigned char)255))))));
            /* LoopSeq 1 */
            for (unsigned char i_20 = 1; i_20 < 23; i_20 += 4) 
            {
                arr_80 [i_0] = var_0;
                arr_81 [i_0] [i_0] [i_20] = ((/* implicit */signed char) var_5);
            }
            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
        }
        var_29 = ((/* implicit */signed char) ((unsigned char) ((max((((/* implicit */int) (unsigned char)220)), (var_0))) / ((+(var_11))))));
        var_30 = ((/* implicit */int) min((var_30), (((var_14) ^ (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) max(((unsigned char)83), (var_1)))) : (2096640)))))));
    }
    var_31 = ((/* implicit */unsigned char) var_3);
}
