/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106125
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] &= ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        var_17 = min((((/* implicit */unsigned int) (short)5851)), (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)5851)) - (((/* implicit */int) (short)-1))))), (min((((/* implicit */unsigned int) (short)15129)), (arr_3 [(_Bool)1] [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) (short)-5852);
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5851)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5851)))))) ? (arr_3 [(unsigned char)4] [i_2 + 2]) : (3890266949U)));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 196608U)) ? (913732828829545052LL) : (((/* implicit */long long int) 1032192U))));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 8; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((arr_10 [i_4] [i_1]) ? (arr_1 [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19444)))));
                    var_22 = ((/* implicit */int) (short)26070);
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) ((((_Bool) (unsigned char)73)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7578283160934763640LL)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (1245192234U)))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((max((-7578283160934763650LL), (((/* implicit */long long int) (unsigned short)32964)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))))), (((max((2426087361U), (((/* implicit */unsigned int) arr_17 [i_6] [i_6])))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26070)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned short)32572)))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) -7578283160934763641LL);
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (434686435U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-22)), (2270140393U)))) ? (min((((/* implicit */long long int) var_7)), (-7431518939475072099LL))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-19882)) + (2147483647))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32771)))))))) : (((/* implicit */long long int) min((((/* implicit */int) ((4293935093U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned short)23])))))), (((((/* implicit */int) (short)-5851)) * (((/* implicit */int) (_Bool)0)))))))));
                    arr_24 [i_6] [i_7] [i_8] [i_6] = ((unsigned char) ((((((/* implicit */int) (short)-4)) + (2147483647))) >> (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6] [i_7] [i_7] [i_8]))) : (1032192U)))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) (~(min((((((/* implicit */int) (short)-32754)) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            {
                var_27 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-59)) ^ (var_14)))), (18446744073709551615ULL))) < (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9])))))), (arr_25 [i_9] [i_9])))));
                var_28 ^= ((/* implicit */unsigned short) max((((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_29 [i_9 - 1] [(unsigned char)4])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (2673127448U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) (_Bool)0)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9 - 1] [i_9 - 1])) ? (2147483647) : (-2147483647))))));
                arr_30 [i_9] [i_10] [i_10] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)25070))))) | (((((/* implicit */_Bool) 6U)) ? (arr_28 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))), (((((/* implicit */_Bool) 434686449U)) ? (1073610752LL) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-66), ((signed char)-1)))))))));
                arr_31 [20] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)15589)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_17 [i_9] [i_10]))))))) ? (-1073610752LL) : (((((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_9] [i_9 - 1] [i_9 - 1] [i_9]))))) + (4323455642275676160LL)))));
                var_29 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421310ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20263))) : (arr_20 [i_10])))) ? ((+(((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) 5717107893008118963LL)) ? (((/* implicit */int) arr_22 [i_10] [i_10] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) var_15)))))) << (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) & (0U))) > (max((19U), (((/* implicit */unsigned int) (short)20288)))))))));
            }
        } 
    } 
}
