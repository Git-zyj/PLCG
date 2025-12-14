/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118281
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) var_10);
                        arr_12 [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (-(588799631U)))) / (max((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])))))) < (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) -1040427679))))))))));
                        var_16 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1621754839U)) : (var_8))) & (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-121)))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) (((~((~(((/* implicit */int) arr_9 [i_0] [16] [i_0] [i_0])))))) - (min((((((/* implicit */int) (signed char)115)) | (((/* implicit */int) var_7)))), (((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)-106))))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                var_17 = arr_3 [i_0];
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) (-(-6638318866046329081LL)));
                            arr_23 [i_6] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)40722))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_19 += ((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)-85))))) << (((((int) -10)) + (38))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2999011296U)) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_2 [i_4])) - (55173))))) : (((arr_18 [i_4] [i_4]) - (((/* implicit */int) (_Bool)1))))));
                arr_28 [13ULL] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)58))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8]))) != (1621754839U))))));
            }
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (((arr_10 [i_0] [(signed char)8] [(short)12] [i_9 + 2] [(signed char)8]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))))) & (var_10)));
                var_22 = ((/* implicit */unsigned char) (unsigned short)0);
            }
            for (unsigned char i_10 = 1; i_10 < 16; i_10 += 3) /* same iter space */
            {
                var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) < (arr_27 [i_0] [i_0] [i_10 + 2])));
                arr_35 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (signed char)-3)) / (((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2)))))));
                arr_36 [i_0] [i_4] [(unsigned char)16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [(signed char)1]))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (-1531876090)))) ? ((~(3491808975U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)3), (((/* implicit */unsigned char) (_Bool)0))))))))));
            }
            var_24 = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
            var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((~(arr_7 [i_0] [(_Bool)1] [9U]))) & (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (((((((/* implicit */_Bool) (signed char)-1)) ? (10315895932681453897ULL) : (4393624277955230634ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (signed char)-70)))))))));
            var_26 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_27 [i_4] [5LL] [5LL])) ? (((/* implicit */int) var_3)) : (2056468756)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_19 [i_0] [14LL] [i_4] [i_4])))) == (((1116001184) + (((/* implicit */int) arr_14 [i_4])))))))) : (((((/* implicit */_Bool) min((2999011296U), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */long long int) ((int) var_8))) : (min((((/* implicit */long long int) (signed char)12)), (6096260861040084371LL))))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))) == ((-((+(var_8)))))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned long long int) ((min((max((((/* implicit */long long int) var_3)), (9166037901301246027LL))), (((/* implicit */long long int) ((((arr_18 [i_0] [(short)4]) + (2147483647))) << (((((arr_16 [i_0]) + (3214382475162766716LL))) - (10LL)))))))) < (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (arr_32 [i_0] [i_0] [i_0] [i_0]))))))));
        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_30 [i_0] [i_0] [i_0]), (var_13)))))))));
    }
    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) != (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_30 ^= ((/* implicit */_Bool) var_12);
    var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (((~(((/* implicit */int) (short)(-32767 - 1))))) >= (((((/* implicit */int) var_3)) * (var_14)))))) : (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_13))), (((7850246780977081250LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_32 = ((/* implicit */short) (+(var_12)));
}
