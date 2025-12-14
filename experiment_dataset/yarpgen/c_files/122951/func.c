/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122951
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
    var_10 |= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] &= ((/* implicit */signed char) max(((unsigned short)12828), (((/* implicit */unsigned short) (signed char)127))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (unsigned short)52707))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((min((arr_0 [i_0]), (((/* implicit */unsigned int) var_5)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((_Bool)0) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-41)));
        var_13 += ((/* implicit */unsigned short) (unsigned char)0);
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) (signed char)0);
            var_15 &= ((/* implicit */unsigned short) (((-(arr_3 [i_1] [i_2]))) > (((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_10 [i_1]))))) ^ ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)218))))))));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)2683)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned short)19707)))) & (((int) arr_0 [i_3]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_2))))) > (((((/* implicit */_Bool) arr_10 [(unsigned short)10])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52715)))))))) : (((/* implicit */int) var_6))));
                arr_15 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) 1U)) && ((!(((/* implicit */_Bool) ((unsigned short) (unsigned char)0)))))));
            }
            for (signed char i_4 = 3; i_4 < 19; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_6])) << (((var_3) - (1984889929))))))));
                        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8607)) != (((/* implicit */int) var_1))))) : (((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)252))))))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27270)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_22 [i_1] [i_2 + 1] [i_4] [i_5 - 3] [i_6]))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_7)) * (arr_20 [i_1] [i_4] [i_5 + 2] [20])));
                    }
                    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32035))))) ? (2878250023U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_1] [i_4 + 1])) <= (663036013)))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)82)), (max(((unsigned short)12828), (((/* implicit */unsigned short) var_2))))))) : (((/* implicit */int) ((signed char) min((var_3), (((/* implicit */int) var_6))))))));
                    var_21 = ((/* implicit */unsigned char) arr_16 [i_5] [i_2]);
                }
                arr_23 [i_1] = max((((/* implicit */int) arr_22 [i_4] [4] [i_4 - 1] [i_4 - 1] [i_4])), (((((/* implicit */int) (signed char)-94)) * (0))));
            }
            var_22 -= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_9 [i_2 - 1])))) * (((/* implicit */int) min((((/* implicit */short) var_4)), (arr_18 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))));
        }
        /* LoopSeq 3 */
        for (short i_7 = 2; i_7 < 19; i_7 += 4) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned int) var_9)) : (arr_20 [i_1] [i_1] [i_7] [10])));
            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7 - 2] [i_7 + 2])) ? (var_7) : (((/* implicit */int) arr_6 [i_7 + 1] [i_7 - 2]))))) ? (((((/* implicit */int) arr_2 [i_7 - 1])) & (((/* implicit */int) arr_2 [i_7 + 2])))) : (((/* implicit */int) var_2))));
            var_25 += ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 1) 
            {
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_8 - 1] [i_7 + 1] [i_7 + 2])))))));
                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)31)) + (((/* implicit */int) var_5))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52721))) : (2515554919U))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min(((signed char)36), ((signed char)7))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                arr_33 [2U] |= ((/* implicit */short) 1361294633U);
                var_30 += ((/* implicit */unsigned short) ((((arr_25 [i_10] [(short)12] [(short)14]) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_6)))) <= (((((/* implicit */_Bool) (+(2)))) ? (var_7) : (((/* implicit */int) arr_13 [i_10] [i_9] [i_1]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (arr_20 [(_Bool)1] [i_10] [i_9] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [(unsigned short)20] [i_1] [i_10] [(unsigned short)18])))))) ? (((/* implicit */int) arr_32 [i_1] [i_9] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47533)) || (((/* implicit */_Bool) (signed char)85)))))));
                    var_32 += ((/* implicit */int) arr_36 [i_11] [i_10] [(short)13] [i_1] [i_1] [i_1]);
                }
                for (short i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    var_33 *= ((/* implicit */short) max((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [14]))) | (arr_20 [i_9] [i_9] [i_9] [i_12]))), (min((0U), (1361294633U))))), (((/* implicit */unsigned int) var_2))));
                    var_34 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 3026976339U)) ? (1811439408U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9597))))));
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_1] [(unsigned short)5] [i_1] [i_12] [i_12] [i_9] [(_Bool)1])) % (((/* implicit */int) arr_18 [i_1] [i_1] [i_10] [i_1])))) * (((/* implicit */int) min((((_Bool) 779589177)), (((((/* implicit */int) (signed char)87)) == (((/* implicit */int) (short)16322))))))))))));
                }
            }
            for (int i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                var_36 *= var_6;
                var_37 = ((/* implicit */int) ((signed char) min((min((((/* implicit */int) (short)-16650)), (arr_8 [i_1] [i_1]))), (1749477516))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            arr_45 [i_1] [i_1] [6] &= (_Bool)1;
            var_38 -= ((/* implicit */unsigned char) (_Bool)1);
            arr_46 [(_Bool)1] [i_1] [(unsigned short)20] = (~(((/* implicit */int) (_Bool)0)));
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                {
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (+(((/* implicit */int) max(((short)-17260), (((/* implicit */short) (unsigned char)22))))))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2107123831)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) arr_44 [i_15])) : (((((/* implicit */_Bool) (signed char)110)) ? (18) : (((/* implicit */int) (short)0))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (arr_8 [i_1] [i_15])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_1])) << (((((/* implicit */int) arr_10 [i_1])) + (7166)))))));
                }
            } 
        } 
    }
    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */unsigned int) var_3)) % (((((/* implicit */_Bool) ((var_3) << (((((-1013093892) + (1013093895))) - (3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17260))) ^ (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))))))));
}
