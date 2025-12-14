/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18026
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_14 |= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_2 [i_0]) / (((/* implicit */unsigned long long int) 134518960566401960LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-134518960566401941LL) >= (((/* implicit */long long int) var_6)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_1 + 1])) << (((arr_1 [i_0]) - (170512469)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -134518960566401969LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [11LL] [i_5] [(_Bool)1] [i_5] [i_5]))) : (arr_2 [i_2])))) ? (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0])) : (arr_8 [14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -4678724338446738672LL)) || (((/* implicit */_Bool) arr_1 [i_3])))))))))));
                            arr_15 [i_0] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 29112253)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-134518960566401955LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)32766))))))) : ((~(arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_0])))));
                            arr_16 [(signed char)5] [(signed char)5] [i_3] [(signed char)5] [i_5] [(signed char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) ? (arr_6 [i_2] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_17 [i_0] [i_2] [i_0] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) * (((/* implicit */int) (signed char)-103))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 |= arr_12 [i_0] [i_0] [(signed char)1] [i_0] [i_0] [i_0];
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_24 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) arr_0 [i_7])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) var_4)))))));
                            arr_25 [i_0] [i_0] [(_Bool)1] [2ULL] [i_0] [(_Bool)1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (2514668819170320267ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6 + 1] [i_6 + 1])))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_17 |= ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_23 [i_0] [i_0]) : (((/* implicit */long long int) arr_26 [i_2] [i_2] [i_7] [i_7])))) % (((/* implicit */long long int) ((var_13) | (((/* implicit */int) arr_21 [i_0])))))));
                            var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)75)) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 1328377016)) ? (arr_9 [(unsigned char)13] [i_2] [i_7] [(_Bool)1]) : (((/* implicit */unsigned int) arr_19 [i_0])))) : ((~(4294967273U)))));
                        }
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0] [i_7])))))));
                        arr_28 [i_0] [i_2] [i_6 + 2] [i_7] [i_7] = ((((/* implicit */int) arr_7 [i_6 + 2] [i_6 + 1])) + (((/* implicit */int) arr_7 [i_6 - 1] [i_6 + 2])));
                    }
                } 
            } 
        }
        var_20 |= ((/* implicit */unsigned char) (short)0);
    }
    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-117))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_3))))) : (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))), (min((var_5), (((/* implicit */unsigned int) (signed char)52)))))))));
    var_22 = ((/* implicit */signed char) var_10);
    var_23 -= ((/* implicit */signed char) ((var_1) - (max((0ULL), (((18446744073709551601ULL) + (((/* implicit */unsigned long long int) 67104768))))))));
}
