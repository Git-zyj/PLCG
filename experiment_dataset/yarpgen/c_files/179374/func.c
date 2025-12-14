/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179374
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_10 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((signed char)-18), (var_7)))) ? (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */signed char) ((6565463308782299202ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39840))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))))))));
        var_11 |= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_1 [i_0 - 1] [(_Bool)1])), (var_4))), (((/* implicit */long long int) min((var_7), (arr_1 [i_0 - 1] [i_0]))))));
        var_12 = var_5;
        var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)27876)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)7), (((/* implicit */short) arr_0 [i_0])))))) : (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [8] [i_0 - 1]))) : (-5803257164261206541LL))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_2)))))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(3U)))))) ? (arr_3 [4U] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
                            var_16 = arr_0 [i_1];
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4294438087U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_1] [i_2]), (arr_8 [i_1] [i_2]))))) : ((~((+(var_9)))))));
                            var_18 = ((((((/* implicit */long long int) ((/* implicit */int) var_7))) > (((long long int) arr_4 [(unsigned short)10] [i_1])))) ? (var_4) : (((/* implicit */long long int) -736334997)));
                        }
                    } 
                } 
            } 
            var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_6 [(signed char)3]) : (((/* implicit */unsigned long long int) var_8)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_6] [i_1])) ? (((/* implicit */long long int) arr_5 [i_1])) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))));
            var_21 = ((/* implicit */signed char) arr_3 [8U] [i_1]);
            var_22 ^= ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_3) : (((/* implicit */int) var_2))))));
            var_23 |= ((/* implicit */unsigned short) ((int) arr_0 [i_1]));
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4965590912530139078ULL))));
            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8847358495283478187ULL)) ? (13510236262529608780ULL) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (arr_5 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (short)-1))))))))));
        }
        var_26 &= ((/* implicit */short) var_2);
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((signed char) (signed char)-90))) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1])) : (max((((/* implicit */unsigned long long int) var_0)), (var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_8] [i_8]), (arr_4 [i_8] [i_8])))) / (((((/* implicit */int) arr_4 [i_8] [i_8])) * (((/* implicit */int) arr_4 [i_8] [i_8]))))));
        var_29 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (short)25753)) : (((/* implicit */int) (_Bool)0)))));
    }
    var_30 *= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_9)))));
    var_31 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) (!((_Bool)1)))))));
}
