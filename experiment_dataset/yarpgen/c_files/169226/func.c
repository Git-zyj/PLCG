/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169226
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) arr_0 [i_0])))));
        var_14 = ((/* implicit */_Bool) min(((+(((var_10) ? (((/* implicit */long long int) var_9)) : (arr_0 [0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [4U])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) min((-20), (((/* implicit */int) (unsigned char)227))))) : (((unsigned long long int) var_12))))) ? (((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_9))))) : ((-(-9039024553757346076LL)))));
            arr_7 [i_1] [11ULL] [i_0] = (!((!(((/* implicit */_Bool) max((1677084764269916989LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_16 [i_0] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_12))))));
                        var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((int) 9039024553757346060LL)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [11LL] [i_0])))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) && ((!(arr_13 [(_Bool)1] [i_1] [i_0] [i_0] [(_Bool)1] [(short)17]))))))));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((unsigned int) arr_2 [i_4]))));
            arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [1U])) : (((/* implicit */int) arr_10 [i_0]))))) % ((((_Bool)1) ? (3312223637405357878LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_0))));
                            var_20 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [14ULL] [i_4] [i_5] [2] [i_6] [(unsigned char)15]))))), (((((/* implicit */_Bool) arr_12 [i_7] [i_6] [i_5] [i_4] [i_0])) ? (var_8) : (4490886561161670483LL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((_Bool) var_3))))));
                        }
                        arr_30 [19ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [i_5] [i_4] [i_5] [(signed char)18])), ((+(6172987248949218098LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (0ULL)))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_24 [16U] [i_4] [i_4] [(signed char)3])) ? (((/* implicit */int) (short)3384)) : ((~(((/* implicit */int) arr_13 [i_6] [i_6] [i_5] [(short)0] [20ULL] [(_Bool)1])))))), (((((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((signed char) 1677084764269916989LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-34))))))))))));
                    }
                } 
            } 
            var_22 |= min((((/* implicit */long long int) arr_1 [i_0])), (max((-1677084764269916989LL), (((/* implicit */long long int) (short)5981)))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) - (-575309175)))) ? (((((/* implicit */_Bool) var_2)) ? (7781297793261162174LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_4] [i_0]))))))))));
        }
        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_39 [i_8] [i_8] [2LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_9] [i_8] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    for (long long int i_11 = 3; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_45 [i_0] [7] [14ULL] [i_10] [i_8] = ((/* implicit */_Bool) (((_Bool)1) ? (((var_12) % (((/* implicit */unsigned long long int) -7486151618612913266LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0])) && (((/* implicit */_Bool) 8998344576967189514LL))))))));
                            var_24 |= ((/* implicit */_Bool) -1677084764269916988LL);
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_11 + 1] [i_11] [(signed char)10] [i_11] [i_11 + 1] [i_11] [i_11])) ? (arr_21 [i_11 + 1] [i_11 - 3] [i_11 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                var_26 -= ((/* implicit */unsigned int) arr_10 [(unsigned char)1]);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) % (var_11))), (-1677084764269916999LL)));
                            var_28 += ((/* implicit */int) 2U);
                            arr_53 [i_8] [i_8] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) && (((/* implicit */_Bool) -1923711911))));
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (3313712511349947304ULL) : (((/* implicit */unsigned long long int) 4294967293U)))))));
                        }
                    } 
                } 
                arr_54 [i_8] [i_0] [i_8] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 793630646U)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_8] [(signed char)5])))))) : (arr_29 [i_0] [(signed char)17] [i_12] [i_12] [i_12] [i_12])))));
            }
            arr_55 [i_0] [i_0] |= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) (short)6060)))), ((!(((/* implicit */_Bool) var_8))))));
        }
    }
    for (int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_20 [i_15] [0U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_15] [i_15] [i_15] [i_15]))) : (arr_20 [i_15] [i_15]))));
        arr_60 [(signed char)6] |= ((/* implicit */_Bool) var_2);
    }
    /* LoopSeq 2 */
    for (int i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
    {
        arr_65 [(unsigned char)8] [(unsigned char)11] = max((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)115));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((arr_14 [i_16] [i_16 + 1] [i_16] [9]) ? (((/* implicit */int) arr_14 [i_16] [i_16 + 1] [i_16] [i_16])) : (((/* implicit */int) arr_14 [(short)0] [i_16 - 1] [i_16] [i_16])))) : (((/* implicit */int) ((arr_14 [2U] [i_16 - 1] [13LL] [i_16]) && (arr_14 [i_16] [i_16 + 1] [i_16] [i_16]))))));
        var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-25979))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((unsigned int) arr_28 [i_16] [i_16] [13ULL] [13U] [5U])))));
        var_34 = var_1;
    }
    for (int i_17 = 1; i_17 < 11; i_17 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [8] [(_Bool)0] [i_17] [i_17])) << (((var_7) - (3743936339U)))))), (max((((/* implicit */unsigned int) var_1)), (arr_21 [0ULL] [i_17] [5ULL])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))) : (var_6)));
        arr_68 [i_17] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_17 - 1])) & (((/* implicit */int) (_Bool)1))))));
        var_36 ^= ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (max((((/* implicit */long long int) ((unsigned int) var_10))), (max((((/* implicit */long long int) var_2)), (var_8))))) : (((/* implicit */long long int) ((int) arr_1 [i_17 + 1]))));
        var_37 = ((/* implicit */int) 17629941130082189123ULL);
        var_38 = (!((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_3))))))));
    }
    var_39 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (1681761338U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((var_11) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    var_40 = (!(((/* implicit */_Bool) var_6)));
}
