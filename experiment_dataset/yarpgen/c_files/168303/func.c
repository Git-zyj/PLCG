/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168303
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
    var_15 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), (var_13)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56321))) : (((((/* implicit */_Bool) 507904LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6611022554805391857LL)))));
            var_17 |= ((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_0]));
        }
        var_18 *= ((/* implicit */short) ((min((max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-844333302726223406LL))), (max((-194523060261353292LL), (((/* implicit */long long int) (_Bool)1)))))) < (max((194523060261353290LL), (-194523060261353292LL)))));
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_19 ^= ((((-194523060261353292LL) + (min((((/* implicit */long long int) (_Bool)1)), (-194523060261353294LL))))) / (min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_5 [i_0] [19LL] [4])), ((unsigned char)171)))), (min((-194523060261353292LL), (194523060261353288LL))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) arr_8 [i_0] [i_2]))));
                        var_21 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (((-2147483647 - 1)) + (1426267169)))))) || (((_Bool) arr_2 [i_0] [i_3] [i_0]))));
                        arr_12 [i_0] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-2271826425417368696LL)))) || (((/* implicit */_Bool) arr_11 [i_2] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1833275855)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) arr_6 [i_5] [i_3] [i_0]);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -194523060261353292LL)) ? (((/* implicit */int) (unsigned short)18618)) : (((/* implicit */int) (unsigned short)46918))));
                    }
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_13 [i_0] [i_0] [i_0])))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [(_Bool)1] [i_0])), (arr_10 [i_0] [i_0] [(unsigned short)9] [i_0])))), (min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_5 [(short)4] [i_0] [i_0]))))))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_10)))))))))));
        var_25 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_6] [0LL] [0LL] [i_6])) || (((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60125))))))));
    }
    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(min((-1234276010), (((/* implicit */int) (signed char)-125)))))))));
        arr_22 [(short)6] [i_7] |= ((/* implicit */_Bool) ((((/* implicit */long long int) max((((((/* implicit */_Bool) -194523060261353300LL)) ? (2147483640) : (((/* implicit */int) (_Bool)1)))), (min((-866956993), (((/* implicit */int) (unsigned short)37169))))))) * (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (max((var_4), (((/* implicit */long long int) var_6))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_27 = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_18 [i_8] [i_8])) ^ (((/* implicit */int) var_6)))) + (((/* implicit */int) max(((short)32767), (arr_20 [i_8])))))), ((((-(((/* implicit */int) var_6)))) * (((/* implicit */int) ((_Bool) var_10)))))));
        arr_25 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [13] [13])) ? (194523060261353312LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8] [i_8])))))))))) % (((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))));
    }
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            for (unsigned int i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                for (short i_12 = 1; i_12 < 16; i_12 += 4) 
                {
                    {
                        var_28 ^= arr_26 [i_11];
                        arr_37 [i_9] [i_9] [i_9] [i_11] [i_12] [i_12] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_9]))) & (arr_10 [i_9] [i_10] [i_9] [i_12 + 1])))))), (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)88))))) > (-6481896530097348815LL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            arr_41 [(signed char)15] [(signed char)17] [(signed char)15] [i_11] [i_12] [(unsigned short)16] = ((/* implicit */int) (~((((((-(9223372036854775804LL))) + (9223372036854775807LL))) << (((max((arr_27 [i_11] [i_13]), (((/* implicit */unsigned int) (short)2047)))) - (4245804580U)))))));
                            arr_42 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */signed char) min((min((((/* implicit */long long int) min((((/* implicit */int) arr_35 [i_9])), (arr_14 [i_9] [i_9] [i_9] [i_9] [2LL])))), (((((/* implicit */_Bool) -10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_7 [i_9] [(signed char)13]))))), (((/* implicit */long long int) (((~(var_13))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))))))));
                        }
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            arr_46 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_9] [i_11 + 4])), ((~(((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) arr_3 [i_11] [i_11] [i_14]))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7168U)) || (((/* implicit */_Bool) 14U)))))) / ((-(-1LL)))))))));
                            var_30 = ((/* implicit */_Bool) (unsigned short)1);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 14; i_16 += 1) 
            {
                {
                    var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)2047))) == (var_0))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)123)), (var_12)))) : (((((/* implicit */_Bool) 194523060261353291LL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)1))))))) && (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_9] [i_15] [i_16 - 1]))) - (-1106671754889065620LL))), (((((/* implicit */_Bool) 424566194146418648ULL)) ? (4902357115597740739LL) : (-194523060261353278LL))))))));
                    var_32 = ((/* implicit */short) (~(min((max((((/* implicit */int) (unsigned short)65534)), (-1234276002))), (((/* implicit */int) (unsigned short)65530))))));
                    var_33 ^= ((/* implicit */short) 7739955101200720649ULL);
                    var_34 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_7 [i_9] [i_15]), (((/* implicit */long long int) ((signed char) (short)-27737))))))));
                }
            } 
        } 
    }
}
