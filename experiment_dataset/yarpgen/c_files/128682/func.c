/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128682
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 &= ((/* implicit */short) ((unsigned char) min((((((/* implicit */int) arr_4 [i_1])) == (arr_5 [(short)10]))), (((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_0)))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_4 [i_1]))));
        var_17 &= ((/* implicit */signed char) min((((unsigned int) arr_4 [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_6 [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_4 [i_1])))) : ((+(((/* implicit */int) var_4)))))))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_18 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_1])) == (var_0))))));
            var_19 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (var_8)))));
        }
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)13] [i_3 + 3]))) / (arr_10 [i_1] [i_1] [i_3])))) ? (((((/* implicit */int) arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 3])) & (((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 3] [i_3 + 2])))) : (var_1)));
            arr_12 [i_3] = ((/* implicit */unsigned char) var_0);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_3] [i_3])) >> (((((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1])) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_7 [i_1] [i_3 + 3] [i_3])))) - (45)))))) || (((/* implicit */_Bool) ((arr_9 [i_3] [i_3 + 1]) ? (((/* implicit */int) arr_9 [i_1] [i_3 + 1])) : (((/* implicit */int) arr_9 [(unsigned short)1] [i_3 + 2])))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_7 [i_1] [i_3] [i_3]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_8 [i_1])) ? ((-(((/* implicit */int) arr_7 [10] [i_4] [i_4])))) : (((/* implicit */int) min((((/* implicit */short) arr_7 [(unsigned char)0] [i_4] [i_1])), ((short)-32757)))))) + (2147483647))) >> (((min((((/* implicit */int) (short)-32767)), (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) arr_8 [i_4])) : (((/* implicit */int) (unsigned char)3)))))) + (32770)))));
            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32759)) || (((((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_4])))) >= (((/* implicit */int) var_9))))));
        }
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 4; i_6 < 18; i_6 += 3) 
            {
                var_24 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_10))), (((((/* implicit */int) (signed char)22)) - (((/* implicit */int) var_5))))))) : (min((((/* implicit */unsigned long long int) (short)-32760)), (arr_15 [i_5 - 1] [i_6 - 3] [i_6])))));
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    arr_28 [i_1] [i_5] [i_6 - 3] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_1] [i_5]))))) ^ (min((var_7), (((/* implicit */long long int) arr_26 [i_1] [i_7 - 1] [i_6 + 2] [i_6 + 2] [i_7 - 1]))))))) ? (((/* implicit */unsigned int) min((((arr_4 [i_6]) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) arr_7 [i_5] [i_6] [i_5])))), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6 - 1] [i_6 - 4] [i_6])) ? (var_3) : (((/* implicit */unsigned int) arr_26 [i_1] [i_5 - 2] [i_6] [i_6 - 4] [i_7 + 1]))))));
                    var_25 -= ((/* implicit */unsigned char) ((((unsigned long long int) arr_25 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7])) / (((/* implicit */unsigned long long int) ((arr_25 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1]) ? (((/* implicit */int) arr_25 [i_7 + 1] [i_7] [i_7 - 1] [(short)11] [i_7])) : (((/* implicit */int) arr_25 [i_7 + 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1])))))));
                    var_26 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 2] [i_5 - 1])))))));
                    arr_29 [i_1] [(unsigned short)18] [i_6] [(signed char)7] [i_7] = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217)))))))))));
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    arr_34 [i_8] [i_5 - 1] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)248))));
                    arr_35 [i_8] = ((/* implicit */int) arr_6 [17ULL]);
                    arr_36 [i_5 + 1] [i_8] [i_8 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [(_Bool)1] [i_6] [i_8] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_5]))))) : (var_6)));
                }
            }
            for (int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_21 [i_1] [i_5] [i_9])), (((unsigned long long int) (+(((/* implicit */int) var_4)))))));
                var_28 &= ((/* implicit */short) (unsigned short)34566);
            }
            arr_39 [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) (unsigned char)123));
            var_29 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_15 [i_1] [17U] [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))))) && (((/* implicit */_Bool) 896480095U))));
        }
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
    }
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_12))));
    var_32 = ((/* implicit */unsigned char) ((long long int) ((var_6) * (((((/* implicit */_Bool) var_4)) ? (7861626246834164763ULL) : (var_6))))));
    var_33 ^= ((/* implicit */unsigned short) var_3);
}
