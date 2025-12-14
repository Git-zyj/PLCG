/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115058
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
    var_16 = ((/* implicit */unsigned char) var_10);
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_5))), (arr_0 [i_0]))))));
        arr_2 [19LL] = ((/* implicit */long long int) ((int) min((min((arr_1 [i_0 - 1] [i_0]), (-1830671800))), ((~(arr_1 [i_0] [(unsigned char)3]))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -1852176284)) ? (arr_3 [i_1] [9U]) : (((/* implicit */unsigned long long int) 4294967271U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1])) : (1830671797)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(var_11)))))))))));
        arr_5 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1]);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) 54U))));
        var_22 ^= ((/* implicit */unsigned long long int) 59U);
    }
    for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] |= ((/* implicit */unsigned long long int) max((((_Bool) 1852176279)), (((_Bool) (+(((/* implicit */int) var_6)))))));
        arr_9 [i_2] = ((unsigned short) (+(((/* implicit */int) (short)-1))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            arr_13 [(short)0] = ((/* implicit */unsigned int) ((signed char) var_5));
            arr_14 [i_2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((-1830671800), (((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) (short)-5)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_18 [i_2 + 2] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((39U) > (((/* implicit */unsigned int) arr_7 [i_2 + 1])))))));
                arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) 2147483637);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [15] [i_2]) + (((/* implicit */unsigned long long int) 4294967244U))))) ? (((((/* implicit */_Bool) (unsigned short)25207)) ? (((/* implicit */unsigned long long int) 3000900155U)) : (arr_6 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82)))));
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), ((+(arr_16 [i_2 + 1])))));
                    arr_23 [i_2] [i_3] [(signed char)3] [i_5] = ((/* implicit */_Bool) 2147483637);
                    arr_24 [i_2 - 1] [i_3] [i_4] [i_5 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2 + 1])) ? (arr_11 [i_5 + 2] [i_5 + 1] [i_5 - 1]) : (arr_11 [i_5 - 1] [i_5] [i_5 - 1])));
                    arr_25 [(_Bool)1] [i_3] [i_3] [i_4] [i_4] [i_5 + 1] = ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
                }
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_28 [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */short) (_Bool)1);
                arr_29 [i_2] [i_2 + 2] [i_2 - 1] = arr_22 [i_6] [i_6] [(short)3] [i_3] [i_2];
                arr_30 [i_2 - 1] [i_2] [(unsigned short)5] [(unsigned char)8] = ((/* implicit */int) ((unsigned long long int) ((54U) >= (((/* implicit */unsigned int) var_11)))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_4))));
            }
            for (unsigned int i_7 = 2; i_7 < 8; i_7 += 1) 
            {
                arr_34 [i_2 + 1] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_21 [i_2] [i_7 + 1])))));
                arr_35 [i_2] [i_2] = ((/* implicit */unsigned short) arr_22 [i_7 + 1] [i_3] [i_2] [i_2] [i_2 - 1]);
                arr_36 [(short)6] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) arr_31 [i_2 - 1])), (4294967242U)))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_2 + 1] [i_2 + 1] [i_2 - 1])) + (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_3] [i_7])) ? (((/* implicit */int) (short)-11)) : (1299828005)))))) != ((~(max((arr_17 [1U]), (((/* implicit */unsigned long long int) var_3)))))))))));
            }
            arr_37 [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)11758)) ? (((/* implicit */int) (signed char)7)) : (-157756697))))), (min(((~(((/* implicit */int) (unsigned short)7244)))), (((/* implicit */int) ((((/* implicit */long long int) 157756693)) >= (arr_16 [i_2]))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            arr_40 [i_2] [6] = ((/* implicit */unsigned short) arr_17 [i_2 + 1]);
            arr_41 [i_8] [(_Bool)1] = ((/* implicit */int) arr_3 [5] [i_2 + 2]);
            arr_42 [i_8] [i_8] [i_8] &= ((/* implicit */short) arr_26 [(unsigned char)7] [(short)1] [i_8] [i_8]);
            arr_43 [i_2] [(signed char)0] = ((/* implicit */unsigned char) 2128498242227457602LL);
            arr_44 [(unsigned char)2] [i_8] [i_8] = ((/* implicit */_Bool) (~(arr_6 [i_2 - 1])));
        }
        for (unsigned char i_9 = 3; i_9 < 8; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_54 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1852176273)), (min((min((((/* implicit */unsigned long long int) 1575185311U)), (14012938315755936738ULL))), (((/* implicit */unsigned long long int) (unsigned char)118))))));
                        arr_55 [i_2 - 1] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (short)-6428))));
                    }
                } 
            } 
            arr_56 [i_2] [i_9] [i_9 + 1] = ((/* implicit */int) ((-7345015813574883929LL) + (((/* implicit */long long int) -1852176283))));
        }
    }
}
