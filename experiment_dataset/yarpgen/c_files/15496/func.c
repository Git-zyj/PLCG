/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15496
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_1 [i_0 + 4]))))));
        var_14 = ((/* implicit */signed char) var_7);
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 4] [i_0]))))), (((((/* implicit */_Bool) arr_0 [11LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_11)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)10330))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_4 [i_2]))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)10])) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) arr_5 [i_0] [(signed char)1])) : (((/* implicit */int) max((arr_0 [(signed char)4] [i_0]), (((/* implicit */unsigned short) (signed char)-106)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) var_5))))) : (((long long int) ((unsigned short) (unsigned short)28826)))));
                var_18 = max((var_7), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))));
                var_19 = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-82)), ((-(((/* implicit */int) (unsigned char)8))))))) ? (((((long long int) (unsigned short)51718)) << ((((~(((/* implicit */int) arr_5 [i_0] [i_2])))) + (56415))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1]))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-82)), ((-(((/* implicit */int) (unsigned char)8))))))) ? (((((long long int) (unsigned short)51718)) << ((((((~(((/* implicit */int) arr_5 [i_0] [i_2])))) + (56415))) - (9770))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1])))))));
            }
            var_20 = ((/* implicit */unsigned short) min((var_20), (var_1)));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])) ? (arr_8 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]) : (arr_8 [i_5] [i_5] [i_4 - 1] [i_4 + 1])))) ? (max((((/* implicit */long long int) (unsigned short)52222)), (arr_8 [i_4] [i_4] [i_4 + 1] [i_4 + 1]))) : (min((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_8 [i_5] [i_4 + 1] [i_5] [i_4 + 1])))));
                            var_21 = ((signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)0))))) / (arr_1 [i_0 + 4])));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [i_1]))) : (6902297827202260082LL)))) ? (((9103286237185096494LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)103))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13817)))))));
            }
            var_23 ^= ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))), (max((((/* implicit */long long int) (signed char)-64)), (var_11))))) * (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) || ((!(((/* implicit */_Bool) (unsigned char)7)))))))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((7048404511683199030LL), (((/* implicit */long long int) (unsigned char)255)))))));
        }
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [(signed char)3])) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) arr_15 [i_6])))) >= (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (unsigned short)13840)) : (((/* implicit */int) (unsigned short)40940)))))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned short)56057)) : (((/* implicit */int) ((signed char) (unsigned char)8))))))))));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */int) arr_15 [i_7])) << (((((/* implicit */int) arr_19 [(signed char)11] [i_7])) - (17243))))), (((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL)))))))));
        }
        var_28 ^= ((/* implicit */unsigned char) max((4844510621432041909LL), (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_6] [i_6])) >= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)60238)))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        var_29 ^= ((/* implicit */long long int) max((((((var_7) < (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775786LL))))) : (((/* implicit */int) min(((unsigned short)58832), (((/* implicit */unsigned short) arr_21 [i_8] [i_8]))))))), ((+((+(((/* implicit */int) (unsigned short)61687))))))));
        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)60244)))) : (((/* implicit */int) (signed char)81)))))));
        arr_22 [(unsigned short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */int) arr_19 [i_8] [i_8])) : (((/* implicit */int) arr_14 [i_8]))))) ? (((((/* implicit */_Bool) arr_19 [i_8] [i_8])) ? (((/* implicit */int) arr_18 [i_8])) : (((/* implicit */int) arr_19 [i_8] [i_8])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)65535))))));
        var_31 = ((/* implicit */signed char) arr_21 [(signed char)0] [(signed char)0]);
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5303))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (unsigned short)2936)))))));
}
