/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142370
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min(((-(((((/* implicit */_Bool) (short)-23806)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23806))) : (2111147607895075404LL))))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) min(((short)-23823), (((/* implicit */short) ((signed char) var_7)))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */signed char) ((((arr_1 [i_0]) % (arr_1 [i_0]))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + (1278794720)))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [5LL])) : (arr_1 [i_0])))) ? (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))) : (((/* implicit */int) ((signed char) var_12)))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-23826))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_10)))) >= (((((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */int) (short)30647)) <= (((/* implicit */int) (short)23823))))) : (((/* implicit */int) ((unsigned char) (short)23823)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned char) min((min((((unsigned int) arr_4 [7U] [i_0] [i_1])), (((/* implicit */unsigned int) min(((short)-11008), ((short)-23826)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)54)) | (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_11))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 6; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) (unsigned short)36863)) ? (((/* implicit */int) (signed char)-5)) : (arr_9 [i_0] [i_2] [i_2]))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-23818))))) ? (((var_1) ? (arr_9 [i_1 - 1] [i_2 + 4] [i_2 + 2]) : (((/* implicit */int) (unsigned short)65533)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)-86)), ((short)10997)))))))));
            }
            for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                var_22 += ((/* implicit */signed char) (unsigned char)178);
                var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_3 + 1]))) : ((~(arr_11 [i_3 + 1] [i_3] [i_3] [i_3])))));
                arr_13 [i_3] [i_1] &= ((/* implicit */unsigned int) ((short) ((((arr_5 [i_0] [i_1 - 2]) >= (arr_5 [i_3] [i_0]))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) (signed char)54)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))))));
                var_24 += ((/* implicit */signed char) ((unsigned int) max((((/* implicit */long long int) (_Bool)1)), (1930848503092903818LL))));
            }
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    var_25 += ((/* implicit */signed char) (short)-10985);
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_11))));
                }
                for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
                {
                    var_27 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_4] [8ULL] [i_6] [i_4] [i_1 - 3] [i_1 - 3])) ? (var_9) : (((/* implicit */long long int) arr_18 [i_6] [i_6] [i_6] [i_6] [i_6] [i_1 - 3]))))));
                    arr_23 [i_1] [i_4] [i_6] &= ((/* implicit */unsigned long long int) var_7);
                    arr_24 [i_4] [i_4] [i_4] [i_4] [i_0] &= ((/* implicit */signed char) ((1844897158235073291ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-10), (((/* implicit */signed char) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((835676965U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (short)-11009))))))))));
                        var_29 = ((/* implicit */long long int) 14695514899816896912ULL);
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((((((unsigned long long int) var_11)) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)180))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)1121)), (((var_10) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_4])))))))))))));
                    }
                }
                var_31 &= var_1;
                var_32 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)20657)) == (((/* implicit */int) (short)23816)))))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_33 *= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 536870911U)) : (var_5))), (((/* implicit */long long int) (signed char)85))));
                    arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] [0ULL] &= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (signed char)-42)) + (2147483647))) << (max((((/* implicit */int) arr_16 [i_8] [i_4] [(signed char)5] [i_0] [i_0] [i_0])), (arr_1 [i_0]))))) < (arr_9 [i_0] [i_1 - 1] [i_8])));
                    var_34 &= max((((/* implicit */unsigned long long int) (short)23823)), ((~(10798040086166105454ULL))));
                    var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1 - 3] [i_1])) + (((/* implicit */int) arr_10 [i_1 - 3] [i_8]))))) ? (((int) arr_10 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_10 [i_1 - 3] [3ULL]))));
                }
            }
        }
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_36 *= max((max((((/* implicit */int) var_6)), (arr_32 [i_9]))), (((((/* implicit */_Bool) ((signed char) (signed char)54))) ? (((((/* implicit */int) var_6)) >> (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)6)), ((unsigned char)78)))))));
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)22649)) : (((/* implicit */int) (signed char)97)))))));
    }
    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) (unsigned short)25323)) ? (783385920U) : (3235344109U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3511581369U))))))) ? (((/* implicit */int) var_8)) : (min(((-(((/* implicit */int) (signed char)100)))), (((/* implicit */int) var_7)))))))));
    var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-5348)))))))));
}
