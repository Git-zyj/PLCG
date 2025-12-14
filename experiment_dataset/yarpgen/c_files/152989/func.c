/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152989
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
    var_15 = ((/* implicit */short) ((max((((((/* implicit */_Bool) -630694960)) ? (18446744039349813248ULL) : (((/* implicit */unsigned long long int) -2147483636)))), (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_16 = ((/* implicit */short) max((max((((((/* implicit */_Bool) 7499510332718771095LL)) ? (var_9) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_14))))))), (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 2147483624)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((10000308823213325828ULL), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((4186112ULL), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) & (arr_3 [i_0]))))));
        var_17 |= ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(_Bool)1])) / (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) * (2097151ULL))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_18 = ((((/* implicit */_Bool) 18211135947149056805ULL)) ? (((((/* implicit */_Bool) -2147483636)) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) (short)27990)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-27984)) && (((/* implicit */_Bool) 133852838U))))))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_19 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_3])) ? (arr_6 [i_3]) : (((/* implicit */int) arr_1 [i_2 + 2] [i_3])))), (2147483636)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) var_5);
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                            var_22 = (~(var_1));
                        }
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_18 [(unsigned char)5] [5ULL] [(short)18] [(unsigned char)10] [i_0] [(short)8] [8ULL] = ((((/* implicit */_Bool) arr_13 [(unsigned short)3] [i_0] [(unsigned char)10] [(unsigned char)18] [(_Bool)0])) || (((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_8 [(unsigned short)4] [(signed char)7] [17ULL] [i_0])))), (((/* implicit */int) arr_11 [(_Bool)1] [(unsigned char)4] [i_0] [0ULL] [(short)14]))))));
                            var_23 = ((/* implicit */unsigned short) ((max((arr_8 [i_5 + 1] [17LL] [(_Bool)1] [i_0]), (arr_11 [i_5 - 2] [(_Bool)1] [i_0] [(_Bool)1] [i_2 - 1]))) && (arr_8 [i_5 - 2] [11LL] [6] [i_0])));
                        }
                        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */short) max((((/* implicit */int) (short)32758)), (max((min((((/* implicit */int) arr_16 [2])), (2147483620))), (min((arr_6 [i_0]), (((/* implicit */int) (unsigned short)57521))))))));
                            arr_21 [(short)8] [5U] [i_0] [11ULL] [(unsigned short)14] [3U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_9 [18U] [14ULL])))) ? (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_13)), (var_3)))), (2604982663U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(unsigned short)5] [i_6 - 2] [(_Bool)1])))))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)187))))))) ? (((/* implicit */int) (unsigned short)8015)) : (((/* implicit */int) (_Bool)1))));
        }
        for (int i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            arr_24 [i_7] |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)10] [(short)6] [3ULL] [11])) ? (((/* implicit */int) arr_8 [(unsigned char)6] [(unsigned char)4] [(unsigned char)10] [i_7])) : ((-2147483647 - 1))))) ? ((+(((/* implicit */int) (short)16488)))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [(short)19])) >= (((/* implicit */int) arr_16 [(unsigned short)14]))))))) | (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (short)-5613)) : (((/* implicit */int) (signed char)126)))) == (((/* implicit */int) ((((/* implicit */_Bool) (short)4095)) || (((/* implicit */_Bool) 1309090522))))))))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
                    {
                        {
                            arr_31 [6] [(unsigned char)0] [i_7] [16ULL] [(signed char)0] |= ((/* implicit */short) (+(((((/* implicit */int) arr_28 [(unsigned char)10] [i_10 - 1] [i_8 - 1])) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84)))))))));
                            var_26 = ((/* implicit */_Bool) (short)32748);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            var_27 = ((arr_30 [10] [i_0] [2ULL] [(unsigned short)3] [(short)19]) - (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
            arr_35 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8ULL)));
            arr_36 [i_0] [(signed char)20] [(unsigned short)1] = ((/* implicit */unsigned short) ((arr_32 [i_0] [i_0]) ^ (arr_32 [(unsigned short)18] [i_11])));
            var_28 = ((/* implicit */int) ((arr_32 [(_Bool)1] [(signed char)20]) <= (((/* implicit */int) arr_5 [i_0]))));
        }
    }
    for (short i_12 = 0; i_12 < 17; i_12 += 1) 
    {
        arr_39 [(unsigned char)10] = ((/* implicit */signed char) var_12);
        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [8])) && (((/* implicit */_Bool) arr_25 [(_Bool)1] [(unsigned short)2] [(unsigned short)6])))) ? ((-(((((/* implicit */_Bool) arr_37 [8ULL] [(unsigned short)2])) ? (arr_26 [(unsigned short)9] [18ULL] [(_Bool)1] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)20] [(unsigned short)2] [(_Bool)1] [(short)6] [(unsigned char)8]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)2738), (((/* implicit */unsigned short) arr_0 [(unsigned short)14]))))))));
    }
}
