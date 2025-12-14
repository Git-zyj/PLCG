/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105367
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (min((((/* implicit */long long int) 508U)), (var_7))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (-6088128788546894102LL) : (arr_0 [i_0])))));
        var_11 += ((/* implicit */unsigned short) max((min((max((arr_0 [i_0]), (((/* implicit */long long int) (short)-1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) == (((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) max((((6088128788546894074LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6088128788546894102LL)))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_13 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(-6088128788546894092LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))))))));
                    var_14 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) var_6)))))) & (var_2)));
                }
                var_15 += max((((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) / (-1858167175))), (-1997310818)))), (-287919167072204414LL));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned short)15] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (max((((/* implicit */long long int) ((var_7) == (3136236045763738628LL)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_5])) ? (6088128788546894090LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))))));
                            var_17 += ((/* implicit */_Bool) (-(max((((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_1 [i_4]))))))));
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((arr_10 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_5]), ((-(min((var_7), (((/* implicit */long long int) -1997310818)))))))))));
                            var_19 ^= ((/* implicit */unsigned int) (((~(max((var_2), (((/* implicit */long long int) (unsigned char)251)))))) / (((/* implicit */long long int) max((((((/* implicit */_Bool) -6088128788546894093LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_2 + 1])))), (min((21689354), (((/* implicit */int) (short)23319)))))))));
                            arr_14 [i_1] [i_4] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_2)))))) : (arr_0 [i_1 - 1])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [15ULL] [i_2 - 2] [i_4] [i_1] [i_2 - 1])))))));
                        }
                    } 
                } 
            }
            for (signed char i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                arr_17 [i_1] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 6088128788546894090LL))))), (max((((/* implicit */long long int) arr_3 [i_6 - 2] [i_6 - 2] [i_1])), (arr_10 [i_0] [i_6 - 2] [14] [i_6] [i_1])))));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (6088128788546894101LL) : (((/* implicit */long long int) 2591787728U))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) max((6088128788546894102LL), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1]))))), (((var_4) ? (var_1) : (((/* implicit */unsigned long long int) var_8))))))))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_6])) % (arr_12 [(_Bool)1] [i_1] [8U] [i_6] [i_6])))))) ? (-6616449960541825371LL) : (((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [i_6])), (-1858167175)))))))));
            }
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                var_23 += ((/* implicit */signed char) (-(((min((var_2), (var_2))) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), ((+(((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_7] [i_0] [7LL] [i_1])) - (14197)))))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (2591787728U))))))))));
                var_25 -= ((/* implicit */long long int) max((((arr_12 [(_Bool)1] [i_1] [i_1 + 1] [i_1] [i_1 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((1099511611392LL) != (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1])))))), (max(((unsigned short)47909), (arr_9 [i_1]))))))));
            }
            arr_20 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) 2665393644U)), (-6088128788546894102LL))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))));
            var_26 &= ((/* implicit */unsigned long long int) max(((+(arr_7 [6U] [i_1]))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_5)))))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) (short)-17246)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 15443857107930402718ULL)) ? (((/* implicit */int) arr_26 [(unsigned char)14] [i_9] [0])) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_26 [(signed char)4] [i_9] [i_9])))) ? (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) arr_25 [(signed char)18])) ? (((/* implicit */unsigned long long int) 584088120)) : (arr_24 [i_8] [i_9]))))) : (((/* implicit */unsigned long long int) max(((-(arr_22 [i_8]))), (((((/* implicit */_Bool) arr_26 [(unsigned short)2] [(unsigned short)20] [(unsigned short)2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [2U] [i_9] [(unsigned char)14]))))))))))));
            var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_21 [i_8] [(_Bool)1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */long long int) arr_23 [i_8])) : (var_8)))))))) : (min((((7929108172362183895LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) arr_26 [18LL] [i_8] [18LL])), (920477781193152927LL)))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_23 [i_9]), (((/* implicit */int) (signed char)15))))) ? ((-(((/* implicit */int) (signed char)-80)))) : (arr_23 [i_8])))))))));
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_22 [i_8])))) ? (((var_1) * (((/* implicit */unsigned long long int) arr_25 [(signed char)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [20LL])))))))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_0))) >> (((((/* implicit */int) arr_21 [i_10] [(_Bool)1])) + (128))))))));
                var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [4ULL])) ? (((/* implicit */int) arr_21 [i_10] [(unsigned char)12])) : (((/* implicit */int) var_0))));
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_34 |= ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (unsigned char)62)))));
                    var_35 |= ((/* implicit */signed char) (-(((((/* implicit */long long int) arr_33 [i_8])) - (var_2)))));
                }
                var_36 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) (short)(-32767 - 1))))) ^ (((((/* implicit */int) (short)17245)) % (((/* implicit */int) (unsigned char)5))))));
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_4))));
                var_38 += (-(((/* implicit */int) (unsigned char)100)));
                var_39 -= ((/* implicit */unsigned char) arr_22 [i_12]);
            }
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 133797466001497790LL)) ? (arr_24 [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (_Bool)1)))))))));
            var_41 = ((/* implicit */int) var_6);
        }
        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((arr_23 [i_8]) <= (((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8])) ? (arr_25 [18LL]) : (((/* implicit */int) (_Bool)0)))))))));
        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)18))))) : (max((((/* implicit */long long int) (unsigned char)100)), (var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [(short)6] [i_8])))))))))) : (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -133797466001497791LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_8] [i_8] [20U] [i_8]))))) : (((((/* implicit */_Bool) arr_31 [(unsigned char)2] [i_8] [(signed char)16] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(signed char)8] [(signed char)8] [i_8] [(signed char)8]))) : (arr_33 [i_8]))))))))));
    }
    var_44 = ((/* implicit */long long int) max((var_44), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6088128788546894092LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) : (var_2)))))));
    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (var_7) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) || (((/* implicit */_Bool) 4389693286971250746ULL)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (1099511611392LL)))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))) : ((-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)24845)))))))))));
}
