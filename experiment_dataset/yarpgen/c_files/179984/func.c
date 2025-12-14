/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179984
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((unsigned char) (!(((_Bool) arr_3 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) ((signed char) arr_6 [i_1] [i_1] [i_1 + 1]));
            arr_7 [i_1] = (~(((((/* implicit */int) (unsigned short)37589)) / (((/* implicit */int) var_13)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 += ((/* implicit */unsigned char) (+(arr_2 [i_2])));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27962)) ? (((/* implicit */int) (unsigned short)27970)) : (((/* implicit */int) (unsigned short)27970))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned int) -1))))))));
            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27947)) ? (((((/* implicit */_Bool) arr_1 [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27976)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))))))) != (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) / (7887416154718738273LL)))))));
        }
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27947)) % (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)101)) != (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0])))))) : (((((/* implicit */unsigned long long int) ((unsigned int) arr_8 [9ULL]))) | (max((((/* implicit */unsigned long long int) -7887416154718738258LL)), (arr_8 [i_0])))))));
        var_21 = (~(((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) >= (arr_6 [i_0] [i_0] [i_0])))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 24; i_5 += 3) 
            {
                arr_16 [i_3] [i_4 - 2] [i_4 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_5] [i_5 - 1] [i_4 + 1])) ^ (((/* implicit */int) arr_9 [i_5 + 1] [i_4] [i_4 + 1])))) ^ (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_5] [i_3]))) ^ (-7887416154718738250LL)))))));
                var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_13)) == (((/* implicit */int) ((_Bool) arr_8 [(signed char)23]))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) arr_10 [i_4])))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 3) 
                {
                    for (signed char i_7 = 4; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_6 [i_5] [i_6] [i_7 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7])))))) < (((((/* implicit */int) arr_14 [i_3] [i_4] [i_5])) % (((/* implicit */int) arr_19 [i_6])))))) ? (((((/* implicit */_Bool) (unsigned short)37617)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (unsigned char)155)))) : (((((/* implicit */int) arr_3 [i_5 + 1])) & (((/* implicit */int) arr_3 [i_5 - 1]))))));
                            arr_22 [i_7] [(signed char)15] [(signed char)15] [i_3] [i_6] = ((/* implicit */signed char) ((var_1) ^ (((((/* implicit */_Bool) 4286983306U)) ? (-509516890) : (((/* implicit */int) (unsigned short)27987))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-119)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)163)) ? ((((+(((/* implicit */int) var_7)))) % (((/* implicit */int) ((var_1) != (((/* implicit */int) (unsigned short)37539))))))) : (465368774)));
                var_27 ^= arr_3 [i_8];
            }
            var_28 = ((/* implicit */unsigned char) var_15);
        }
        for (short i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            arr_27 [i_3] [i_3] [i_9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (arr_8 [i_3]))));
            var_29 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_9] [i_3] [i_3])) >> (((((/* implicit */int) arr_5 [i_3] [i_3] [i_9])) - (60)))))));
            var_30 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_9] [13LL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))), (arr_6 [i_3] [i_9] [i_9]))), (((/* implicit */unsigned int) arr_15 [i_9] [i_9] [i_3] [i_3]))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_32 [(unsigned char)12] [i_9] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned short)27943)) : (((/* implicit */int) arr_9 [i_3] [i_9] [i_11]))))) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned short)26943)))))) ^ (((/* implicit */int) arr_25 [i_9] [i_10] [i_11]))));
                        var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_3]) ? (((/* implicit */int) arr_12 [i_10])) : (((/* implicit */int) arr_12 [i_9]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)21)), ((unsigned short)37588)))) : ((~(((/* implicit */int) (unsigned char)116))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                arr_37 [i_3] [i_9] [i_12] = ((/* implicit */int) arr_11 [i_3]);
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_9 [i_3] [i_9] [i_12])))))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_9] [i_9])))))));
            }
        }
        var_34 *= ((/* implicit */short) max((arr_17 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [(unsigned char)14] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_23 [i_3])))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_13])) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) (unsigned char)1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) / (-8242953282523512080LL))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)37589)))) ? (((/* implicit */int) arr_0 [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_13])) || (((/* implicit */_Bool) arr_29 [i_13]))))))))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37588)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (_Bool)0))));
            var_38 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_13] [i_13] [i_14] [i_13])) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_14])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_15 [i_13] [i_14] [i_14] [i_13]))))) : (((((/* implicit */int) arr_34 [i_13] [i_14] [i_14])) | (((/* implicit */int) arr_33 [i_14] [i_14] [i_13] [i_13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((-1589476538) % (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) arr_3 [(unsigned char)3])))))) : (4026522643828605180LL));
            arr_42 [i_13] [i_14] [i_14] &= ((/* implicit */unsigned int) (((+(arr_35 [i_13] [i_13] [i_13] [i_14]))) < ((~(arr_28 [i_13] [i_14] [i_14])))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_39 [i_13]), (((/* implicit */signed char) arr_25 [i_13] [i_13] [i_14])))), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)38592)) >= (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-95))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_39 [i_14])))) : ((-((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
        }
        for (signed char i_15 = 4; i_15 < 23; i_15 += 3) 
        {
            arr_47 [i_13] [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [i_13])))))) != (var_4))))));
            arr_48 [i_13] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)-69)))), (((/* implicit */int) arr_24 [i_15 - 1] [i_13] [i_15 + 2]))));
        }
        arr_49 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_13] [i_13] [i_13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_13] [i_13] [i_13]))))) ? ((~((+(((/* implicit */int) arr_9 [i_13] [i_13] [i_13])))))) : ((((~(arr_20 [i_13] [i_13] [i_13] [i_13] [i_13]))) ^ (((((/* implicit */int) (unsigned char)225)) % (((/* implicit */int) arr_11 [i_13]))))))));
    }
    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1048575)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_41 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_0)))))))));
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (unsigned short)37592))));
}
