/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122422
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) arr_0 [i_0 + 1])))))))) ? (arr_1 [i_0] [i_0 + 3]) : (((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (((/* implicit */int) (unsigned char)75)))) - (869922640)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_7 [i_0] [(unsigned char)5] = ((/* implicit */short) (~((~((~(((/* implicit */int) (unsigned char)3))))))));
            arr_8 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) ^ (arr_1 [i_1] [i_0 - 1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? ((+(2317770876698508229ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) < (16128973197011043385ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned char)15))))))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_12 [(short)13] = ((/* implicit */long long int) (+((-(arr_5 [i_0 - 2] [i_0 + 2])))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_15 [14LL] [i_2] [i_0 + 3] = ((/* implicit */_Bool) arr_10 [i_3]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_19 *= ((/* implicit */short) ((arr_5 [i_0 - 2] [i_0]) < (arr_5 [i_0 - 2] [i_0])));
                    arr_18 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)31))) && ((!(((/* implicit */_Bool) arr_14 [(short)6]))))));
                    arr_19 [i_4] [i_3] [i_2] [i_0 - 1] = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [4] [i_0 - 2]));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */long long int) min((max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)9)) : (581432083))), (((/* implicit */int) arr_11 [(signed char)4] [i_5])))), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 4334342838984359698LL)) > (arr_22 [(_Bool)1] [i_5] [i_3]))))))));
                    arr_24 [i_0] [i_5] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_5] [i_0 + 1])) ? (arr_22 [i_0] [i_5] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)215)) != (((/* implicit */int) (unsigned char)197)))) ? (min((-2086537071), (((/* implicit */int) (unsigned char)217)))) : (((((/* implicit */int) (short)21763)) & (((/* implicit */int) (unsigned char)4))))))) ? ((+(((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) (_Bool)1))))))) : ((+((-(((/* implicit */int) (unsigned char)4))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    arr_27 [i_6] [i_3] [i_2] [i_0] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0 - 1]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (16428260739286716038ULL))))), (((/* implicit */unsigned long long int) arr_2 [14LL])));
                    arr_28 [i_2] [i_2] [i_2] = ((signed char) arr_14 [i_0 - 1]);
                    arr_29 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)82)) & (((/* implicit */int) (unsigned char)143)))) - ((+(((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_33 [i_0] [i_2] [i_7] [(unsigned char)4] [i_7] = ((/* implicit */_Bool) arr_26 [i_7] [i_2] [i_0]);
                    arr_34 [i_7] [i_7] [i_3] [i_2] [i_0 - 2] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)180)) * (((/* implicit */int) arr_0 [(short)11])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_39 [i_0 - 1] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */int) (unsigned char)239)) % (arr_4 [i_3]))) << (((((((/* implicit */_Bool) (unsigned char)181)) ? (12216521050033074354ULL) : (16128973197011043387ULL))) - (12216521050033074332ULL))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((((/* implicit */int) (short)32755)) - (-821686453))))))));
                    }
                }
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551595ULL)))) ? (((/* implicit */int) ((unsigned char) 581432081))) : ((+(((/* implicit */int) (unsigned char)241))))))) ? (((/* implicit */unsigned long long int) (+(((int) 18446744073709551595ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-5897))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125)))))) : ((+(21ULL))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                arr_43 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */int) (unsigned char)224);
                arr_44 [i_9] [i_2] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_17 [i_0] [i_0 + 2]));
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_23 = ((/* implicit */short) (((~(70044505U))) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [1] [i_9] [8] [i_0 - 2])))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((((/* implicit */_Bool) arr_10 [i_0])) ? (5158180084729306956ULL) : (((/* implicit */unsigned long long int) 8176965186774875646LL)))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-95)))))))));
                    arr_49 [i_0] [(unsigned char)15] [i_9] = ((/* implicit */short) (~((((_Bool)0) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)94))))));
                }
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    arr_52 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)20)) & (((/* implicit */int) (unsigned char)100)))) << (((/* implicit */int) ((((/* implicit */_Bool) 821686436)) && (((/* implicit */_Bool) (signed char)-113)))))));
                    arr_53 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(arr_50 [i_0])));
                }
            }
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (+(-1039728874))))) ? ((-(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) 3912341617028486808LL)) : (arr_5 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2317770876698508231ULL))))) : (((/* implicit */int) ((arr_40 [(_Bool)1] [16] [16]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
        }
        var_26 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_22 [i_0 + 1] [i_0] [i_0]) <= (2317770876698508244ULL)))))) < ((+(((((/* implicit */_Bool) 2317770876698508225ULL)) ? (arr_17 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))))))));
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 2317770876698508214ULL))));
}
