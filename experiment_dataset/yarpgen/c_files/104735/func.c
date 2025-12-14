/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104735
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) 131071U);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_8 [(short)4] [i_1] [i_2] [i_1] [i_3 + 3] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [(unsigned short)2] [(unsigned short)2] [i_1]))));
                        arr_9 [(short)15] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) (((-(arr_1 [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)3] [(_Bool)1] [i_0 + 3])))));
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((3) >> (((/* implicit */int) arr_4 [i_4] [i_4] [i_4] [(_Bool)1]))))) ? ((-2147483647 - 1)) : (min((((/* implicit */int) (_Bool)0)), (3)))))), ((~(arr_1 [(_Bool)1]))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */long long int) 2147483639))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> ((((-(arr_1 [i_4]))) + (5330036886252951353LL))))))));
        arr_12 [i_4] = ((/* implicit */short) var_13);
        arr_13 [i_4] [i_4] = ((/* implicit */int) (~(((277310291U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_17 [0U] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_5] [i_5])))))) * (((/* implicit */int) (unsigned char)192))));
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (signed char)-80))))), (arr_1 [i_5])))) ? (max((var_3), (((/* implicit */long long int) (+(1416180166U)))))) : (((/* implicit */long long int) arr_14 [3ULL] [i_5]))));
        arr_18 [i_5] [5ULL] |= ((/* implicit */signed char) var_10);
        var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_5] [i_5])) || (((/* implicit */_Bool) 2ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_3 [i_5] [i_5])))) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2950192755088324219LL)))))))) : (arr_3 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        var_20 = ((int) (short)-15058);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 = ((((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (short)12028)) : (32767))) << (((((/* implicit */int) (short)15049)) - (15048))));
            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_6] [i_6] [i_6]))));
            arr_24 [i_6] = ((min((var_6), (((/* implicit */unsigned long long int) arr_15 [i_6] [i_6])))) == (((/* implicit */unsigned long long int) arr_15 [i_6] [i_7])));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_6] [i_7]) / (arr_23 [i_7])))) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) var_2)))))));
        }
        var_24 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6])) ? (10043576599447923396ULL) : (var_5)))) ? (min((((/* implicit */unsigned int) (short)-1)), (2244821293U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -13)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((1297181989) / (((/* implicit */int) (unsigned char)50)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6] [18])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((var_7), (((/* implicit */long long int) 16777215)))))) & (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)31))) : (arr_15 [(short)9] [i_6])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_25 = min((((/* implicit */int) arr_4 [i_6] [12] [(short)14] [20])), ((+(((arr_19 [i_6] [i_8]) % (var_0))))));
            arr_28 [i_6] [i_8] [i_8] = arr_22 [(unsigned short)4];
            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)48839)))) == (((/* implicit */int) min((arr_21 [i_6] [i_8]), (arr_21 [i_8] [i_8]))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                arr_36 [i_10] [i_10] [i_10] [i_6] = ((/* implicit */int) ((arr_3 [i_10 + 1] [i_10 + 1]) % (arr_3 [i_10 - 1] [i_10 - 1])));
                var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -612663036)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1658798583)) | (arr_1 [i_9])))) : (arr_33 [i_6])));
                var_28 ^= ((/* implicit */signed char) 1276128198U);
                var_29 = ((arr_31 [i_10 + 1] [i_10] [i_10 + 1]) || (((/* implicit */_Bool) -621612784622743033LL)));
                var_30 = ((/* implicit */signed char) arr_27 [i_6] [i_6]);
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                {
                    var_31 += ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_2 [i_6] [i_11]))))));
                    var_32 = ((/* implicit */unsigned char) arr_7 [i_9 - 1] [i_12] [0]);
                }
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) /* same iter space */
                {
                    arr_44 [i_6] [i_6] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-18143))));
                    var_33 = ((/* implicit */unsigned int) arr_40 [i_6] [i_6]);
                    var_34 = ((/* implicit */unsigned long long int) 3548731143U);
                    var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                }
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (_Bool)1))));
                var_37 = ((/* implicit */unsigned int) (short)-12068);
            }
            var_38 &= ((/* implicit */_Bool) arr_19 [i_9] [i_6]);
            var_39 = ((/* implicit */short) (~(((/* implicit */int) arr_42 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))));
        }
    }
    var_40 = ((/* implicit */unsigned char) 4294967295U);
    var_41 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (min((-195798700), (((/* implicit */int) (short)-6655)))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) 470622981)))) == (var_7))))));
}
