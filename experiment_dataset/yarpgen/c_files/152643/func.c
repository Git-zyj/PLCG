/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152643
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
    var_16 &= ((/* implicit */_Bool) ((int) 18446744073709551615ULL));
    var_17 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_6 [6ULL] [i_1] = ((/* implicit */int) var_5);
            var_18 += ((/* implicit */_Bool) var_14);
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) 9743610007330201445ULL);
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [(unsigned short)14] [i_2]) ? (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_1] [i_2]), (arr_9 [i_2] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) ? (var_14) : (((/* implicit */int) arr_4 [3LL]))));
            }
            for (short i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_21 |= ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_3 - 2] [i_1] [i_3 - 2]));
                    var_22 |= ((/* implicit */short) var_0);
                }
                for (long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) var_8);
                    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)32752))) || (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 2147483647))) / (((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    var_25 = ((/* implicit */signed char) 5961876392546747514ULL);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) var_15)), (arr_2 [i_0] [i_5]))));
                        arr_22 [i_0] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */signed char) arr_8 [i_3] [i_5] [i_6]);
                        var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(2070272655)))), (((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [4LL] [i_3 - 1] [(unsigned short)8] [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) 203122827)) >= (5123774450048505399ULL)))), (((short) arr_0 [i_1] [i_1])))))) : (((unsigned int) (signed char)127))));
                        var_28 += ((/* implicit */int) min((((((/* implicit */_Bool) 5961876392546747509ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))) : (min((arr_8 [i_0] [i_1] [i_6]), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2047216377U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(short)6] [i_1] [i_3] [i_1] [i_6] [(signed char)10]))) : (arr_3 [i_3] [i_5] [i_6]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -138885228)) == (1117103813820416LL))))))))));
                    }
                }
                var_29 &= ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)67)), (2147483647)))) ? (((/* implicit */int) arr_16 [(signed char)3] [i_3 + 1] [(unsigned short)2] [i_1] [(unsigned short)2] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_3])))), (((/* implicit */int) var_2))));
                var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0] [i_1] [i_3 + 3] [i_3]))));
                var_31 ^= ((/* implicit */signed char) ((unsigned short) 3886094210U));
            }
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5991)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5991)))))) != (var_8)))));
        }
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_27 [(_Bool)1] [(_Bool)1] [i_7] = ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-68))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (11749509938860197530ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(signed char)12] [i_7] [i_0] [i_7])))));
            arr_28 [i_0] = min((3886094189U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_19 [(unsigned short)8] [i_7] [(unsigned short)8] [i_0])))))))));
            var_33 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)5922))))))), (2307962450U)));
            var_34 = ((/* implicit */short) (unsigned short)29205);
            var_35 &= ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [(unsigned short)3] [i_7]);
        }
        var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_0]))) ? (((/* implicit */int) arr_24 [i_0])) : (((/* implicit */int) (!(arr_24 [i_0]))))));
    }
}
