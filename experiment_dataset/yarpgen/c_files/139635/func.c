/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139635
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 2; i_2 < 18; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18272)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned short)28412))));
                    var_14 -= ((/* implicit */unsigned long long int) ((((var_6) > (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28407))))) : (((unsigned int) arr_3 [i_2 + 2] [i_2 + 1]))));
                }
                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)92))));
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_2] [i_1] [i_0]))) ? ((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_6 [i_2] [i_2 + 3] [i_2] [i_2 + 1]))))), (min((((/* implicit */unsigned long long int) var_6)), (((3545503840285744100ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2)))))))));
                arr_11 [i_2] = max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_0] [i_1] [i_0])) : (((/* implicit */int) (signed char)83))))) && (((/* implicit */_Bool) ((arr_0 [i_2] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))))), ((-(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) (_Bool)1)))))));
                var_17 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) 656669156))), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_2 - 1] [i_2 + 3] [i_2] [i_2])))));
            }
            for (signed char i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
            {
                arr_16 [i_4] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 3] [i_4 + 1] [i_4 + 1] [i_4]))))));
                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5))));
                arr_17 [i_4] [i_1] = arr_1 [i_4] [i_0];
            }
            for (signed char i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
            {
                arr_20 [i_0] [i_5] [i_0] = ((/* implicit */short) arr_4 [i_5] [i_1]);
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
            }
            /* vectorizable */
            for (signed char i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
            {
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (4294967279U) : (arr_14 [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1])));
                arr_23 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_22 [i_6] [i_1] [i_0]))) && (((/* implicit */_Bool) ((int) var_8)))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) (((_Bool)0) ? (14831189848082497638ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_24 [i_0] [i_6] [i_0] = ((/* implicit */short) var_7);
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 5317539511908155251ULL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)18272))))))));
            }
            arr_25 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_2)) : (arr_18 [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40557))))))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */short) ((((arr_2 [i_0] [i_0]) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3924))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((-1090494835) >= (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_3))))))))));
        var_23 |= (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (1225193330) : (((((/* implicit */int) var_12)) << (((((/* implicit */int) (unsigned short)28412)) - (28402)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)1)), ((unsigned short)34734))))) | (((((/* implicit */_Bool) var_11)) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
        arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (7055280349763051008LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18272)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18271)) * (((/* implicit */int) var_0))))) : (arr_13 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_3))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
    {
        arr_32 [i_7] [i_7] = ((/* implicit */_Bool) arr_31 [i_7]);
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_31 [i_7])) ? (((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)1344)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_10)))) << (((((unsigned long long int) (unsigned char)115)) - (113ULL)))));
    }
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        arr_37 [i_8] = ((/* implicit */unsigned long long int) (unsigned short)28397);
        arr_38 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max(((short)-24979), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22593)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (var_5)))) : (arr_35 [i_8])));
        var_25 = ((/* implicit */unsigned int) arr_36 [i_8]);
        arr_39 [i_8] = ((/* implicit */unsigned short) (signed char)72);
        arr_40 [i_8] [i_8] = ((/* implicit */unsigned long long int) min((max((2124749623U), (((/* implicit */unsigned int) arr_36 [i_8])))), (((/* implicit */unsigned int) arr_36 [i_8]))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)53899))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
    var_27 = ((/* implicit */unsigned long long int) (((-(var_7))) | (((/* implicit */int) ((unsigned short) max((var_12), (((/* implicit */unsigned char) var_3))))))));
}
